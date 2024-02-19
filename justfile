src := justfile_directory() / "src"
bindings := justfile_directory() / "bindings"
ts_src := justfile_directory() / "repositories" / "tree-sitter"
fuzzer := justfile_directory() / "fuzzer"
nproc := if os() == "macos" { `sysctl -n hw.logicalcpu` } else { `nproc` }
include_args := "-Isrc/ -I" + ts_src + "/lib/include -Inode_modules/nan"
general_cflags := "-Wall -Werror --pedantic -Wno-format-pedantic"
# Source files needed to build a parser
parser_sources := src + "/scanner.c " + src + "/parser.c " + ts_src + "/lib/src/lib.c"

bin_dir := src / "target" / "bin"
obj_dir := src / "target" / "obj"
debug_out := bin_dir / "debug.out"
fuzz_out := bin_dir / "fuzz.out"

# List all recipes
default:
	just --list

# Lint with more minimal dependencies that can be run during pre-commit
_lint-min: tree-sitter-clone configure-compile-database
	npm run lint:check
	git ls-files '**.c' | grep -v 'parser\.c' | \
		xargs -IFNAME sh -c 'echo "\nchecking file FNAME" && clang-tidy FNAME'

_out-dirs:
	mkdir -p "{{ bin_dir }}"
	mkdir -p "{{ obj_dir }}"

# Run the linter for JS, C, Cargo, and Python. Requires clang-tidy, clippy, and ruff.
lint: _lint-min
	cargo clippy
	ruff .

alias fmt := format

# Autoformat code. Requires Cargo, clang-format, and black.
format: configure-compile-database
	npm run format:write
	git ls-files '**.c' | grep -v 'parser\.c' | \
		xargs -IFNAME sh -c \
		'echo "\nformatting 'FNAME'" && clang-format -i FNAME --verbose'
	cargo fmt
	black .

# Check formatting without editing
format-check: configure-compile-database
	npm run format:check
	git ls-files '**.c' | grep -v 'parser\.c' | \
		xargs -IFNAME sh -c \
		'echo "\nchecking formatting for 'FNAME'" && clang-format FNAME | diff -up - FNAME'
	cargo fmt --check

# Generate the parser
gen *extra-args:
	npx tree-sitter generate {{ extra-args }}
	python3 build-flavored-queries.py

	# Run formatting only on generated files
	npx prettier --write src/
	# Only clang-format if it is available
	which clang-format > /dev/null && \
		clang-format -i src/parser.c || \
		echo "skipping clang-format"

alias t := test

# Run tests that are built into tree-sitter, as well as integration and Cargo tests
test *ts-test-args: gen
	npx tree-sitter test {{ ts-test-args }}
	just test-parse-highlight

	echo && echo Running Cargo tests

	# FIXME: xfail CI on Windows because we are getting STATUS_DLL_NOT_FOUND
	{{ if os_family() + env("CI", "1") == "windows1" { "echo skipping tests on Windows" } else { "cargo test" } }}

# Verify that tree-sitter can parse and highlight all files in the repo. Requires a tree-sitter configuration.
test-parse-highlight:
	#!/bin/sh
	set -eau

	echo Checking all files in the repo...

	# skip readme.just because it is broken but works for testing, and skip files
	# from the fuzzer
	git ls-files '**.just' 'justfile' |
		grep -v readme.just |
		grep -v test.just |
		grep -vE 'timeout-.*' |
		grep -vE 'crash-.*' |
		while read -r fname
	do
		printf '\n\n'
		echo "::group::Parse and highlight testing for $fname"
	
		npx tree-sitter parse "$fname" > /dev/null
		npx tree-sitter highlight "$fname" > /dev/null

		echo "::endgroup::"
	done

# Verify that the `just` tool parses all files we are using
verify-just-parsing:
	#!/bin/sh
	set -eaux

	# skip readme.just because it is broken but works for testing
	git ls-files '**.just' 'justfile'
		grep -v readme.just |
		grep -vE 'timeout-.*' |
		grep -vE 'crash-.*' |
		while read -r fname
	do
		echo "::notice:: checking Just parsing"
		just --list --unstable --justfile "$fname"
	done

# Make sure that no tests contain errors
verify-no-error-tests:
    ! grep -nr -C4 -E '(ERROR|MISSING|UNEXPECTED)' test

# Helper to rebuild helix grammars
hx-build:
	hx --grammar build

# Configure tree-sitter to use this directory
configure-tree-sitter:
	#!/usr/bin/env python3
	import json
	import os
	import subprocess as sp

	# Windows doesn't seem to evaluate PATH unless `shell=True`.
	if os.name == "nt":
		shell = True
	else:
		shell = False
		
	cfg_fname = r"""{{ config_directory() / "tree-sitter" / "config.json" }}"""
	if not os.path.isfile(cfg_fname):
		sp.run(["npx", "tree-sitter", "init-config"], check=True, shell=shell)

	with open(cfg_fname, "r+") as f:
		j = json.load(f)
		f.seek(0)

		# Add ths tree-sitter-just directory to the config file
		parent_dir = os.path.dirname("{{ justfile_directory() }}")
		j["parser-directories"].append(parent_dir)
		json.dump(j, f)
		
		f.truncate()

# Run lint and check formatting
ci-codestyle: lint format-check

# Make sure that files have not changed
ci-validate-generated-files:
	#!/bin/sh
	set -eaux

	git tag ci-tmp-pre-updates
	
	just gen

	failed=false
	git diff ci-tmp-pre-updates --exit-code || failed=true

	if ! [ "$failed" = "false" ]; then
		echo '::warning::Generated files are out of date!'
		echo '::warning::run `just gen` and commit the changes'
	fi

	git tag -d ci-tmp-pre-updates

# Run a subset of CI checks before committing.
pre-commit: _lint-min format-check

# Install pre-commit hooks
pre-commit-install:
	#!/bin/sh
	fname="{{justfile_directory()}}/.git/hooks/pre-commit"
	touch "$fname"
	chmod +x "$fname"

	cat << EOF > "$fname"
	#!/bin/sh
	just pre-commit
	EOF

# Download and build upstream tree-sitter
tree-sitter-clone:
	#!/bin/sh
	if [ ! -d "{{ ts_src }}" ]; then
		git clone https://github.com/tree-sitter/tree-sitter "{{ ts_src }}" \
			--depth=1
	fi

debug-build: tree-sitter-clone _out-dirs
	clang -O3 -g ${CFLAGS:-} {{ include_args }} \
	{{ parser_sources }} "{{bindings}}/debug.c" \
	-o {{ debug_out }}

run *file-names: debug-build
	{{ debug_out }} {{file-names}}

fuzz *extra-args: (gen "--debug-build") tree-sitter-clone _out-dirs
	#!/bin/sh
	set -eaux

	"{{ fuzzer / "build-corpus.py" }}"

	artifacts="{{fuzzer}}/cache/failures/"
	corpus="{{fuzzer}}/corpus"
	mkdir -p "$artifacts"

	flags="-fsanitize=fuzzer,address,undefined"
	flags="$flags -g -O1 -std=gnu99"
	flags="$flags {{ include_args }}"

	sources="{{ parser_sources }} {{ fuzzer }}/entry.c"

	clang $flags -o "{{ fuzz_out }}" $sources

	fuzzer_flags="-artifact_prefix=$artifacts -timeout=20 -max_total_time=1200 -jobs={{ nproc }}"
	LD_LIBRARY_PATH="{{ts_src}}" "{{ fuzz_out }}" "$corpus" $fuzzer_flags {{ extra-args }}

# Configure the database used by clang-format, clang-tidy, and language servers
configure-compile-database:
	#!/usr/bin/env python3
	import json
	src = "{{ src }}"
	include_args = "{{ include_args }}"
	general_cflags = "{{ general_cflags }}"
	
	sources = [
		("bindings/debug.c", "{{ debug_out }}"),
		("fuzzer/entry.c", "{{ fuzz_out }}"),
		("src/parser.c", "{{ obj_dir / "parser.o" }}"),
		("src/scanner.c", "{{ obj_dir / "scanner.o" }}"),
	]
	results = []

	for (input, output) in sources:
		results.append({
			"directory": f"{src}",
			"command": f"clang {include_args} {input} {general_cflags}",
			"file": f"{src}/{input}",
			"output": f"{src}/{output}",
		})

	with open("compile_commands.json", "w") as f:
		json.dump(results, f, indent=4)
