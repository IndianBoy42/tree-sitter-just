src := justfile_directory() / "src"
bindings := justfile_directory() / "bindings"
fuzzer := justfile_directory() / "fuzzer"
target := justfile_directory() / "target"
bin_dir := target / "bin"
obj_dir := target / "obj"
debug_out := bin_dir / "debug.out"
fuzz_out := bin_dir / "fuzz.out"

ts_path := justfile_directory() / "repositories" / "tree-sitter"
ts_repo := "https://github.com/tree-sitter/tree-sitter"
ts_sha := "1c55abb5308fe3891da545662e5df7ba28ade275" # v0.21.0

just_path := justfile_directory() / "repositories" / "just"
just_repo := "https://github.com/casey/just.git"
just_sha := "a2ff42e6c37ba5c429d444f3a18d3633e59f9a34" # 1.24.0

include_args := "-Isrc/ -I" + ts_path + "/lib/include -Inode_modules/nan"
general_cflags := "-Wall -Werror --pedantic -Wno-format-pedantic"

# FIXME: there are errors running with ASAN, we ideally want `,address` here
fuzzer_flags := env("FUZZER_FLAGS", "-fsanitize=fuzzer,undefined")
fuzz_time := env("FUZZ_TOTAL_TIME", "1200")

# Source files needed to build a parser
parser_sources := src + "/scanner.c " + src + "/parser.c " + ts_path + "/lib/src/lib.c"

base_cache_key := sha256_file(src / "scanner.c") + sha256_file(src / "parser.c") + sha256(parser_sources) + sha256(include_args) + sha256(general_cflags) + sha256(fuzzer_flags)

verbose_flag := if env("CI", "") == "1" { "--verbose" } else { "" }

# `timeout` is not available on all platforms, but perl often is. This needs a
# bash shell.
make_timeout_fn := '''timeout () { perl -e 'alarm shift; exec @ARGV' "$@"; }'''

# Files that should parse with errors but not crash
errors_expected := '''
	test/timeout-1aa6bf37e914715f4aa49e6cf693f7abf81aaf8e

	# FIXME: xfail files, these should parse correctly
	test/test.just
	repositories/just/examples/kitchen-sink.just
	repositories/just/examples/powershell.just
'''

# Files used for testing that Just itself might not understand
no_just_parsing := '''
	test/readme.just
'''

# List all recipes
default:
	just --list

# Install needed packages and make sure tools are setup
setup *npm-args:
	#!/bin/sh
	set -eau

	check_installed () {
		printf "checking $1... "
		if "$1" --version 2> /dev/null ; then
			echo "tool $1 found!"
		else
			echo
			echo "tool $1 NOT found. This may be needed for some functionality"
		fi
		echo
	}

	check_installed npm
	check_installed cargo
	check_installed clang
	check_installed clang-tidy
	check_installed clang-format

	if which npm > /dev/null; then
		npm install --include=dev {{ npm-args }}
	else
		echo "npm not found: skipping install"
	fi

# Lint with more minimal dependencies that can be run during pre-commit
_lint-min: _clone-repo-tree-sitter configure-compile-database
	npm run lint:check
	git ls-files '**.c' | grep -v 'parser\.c' | \
		xargs -IFNAME sh -c 'echo "\nchecking file FNAME" && clang-tidy FNAME'

# Run the linter for JS, C, Cargo, and Python. Requires clang-tidy, clippy, and ruff.
lint: _lint-min
	cargo clippy
	ruff .

_out-dirs:
	mkdir -p "{{ bin_dir }}"
	mkdir -p "{{ obj_dir }}"

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
	just {{ verbose_flag }} test-parse-highlight
	just {{ verbose_flag }} verify-no-error-tests

	echo '\nRunning Cargo tests'

	# FIXME: xfail Rust CI on Windows because we are getting STATUS_DLL_NOT_FOUND
	{{ if os_family() + env("CI", "1") == "windows1" { "echo skipping tests on Windows" } else { "cargo test" } }}

# Verify that tree-sitter can parse and highlight all files in the repo. Requires a tree-sitter configuration.
test-parse-highlight: _clone-repo-just
	#!/usr/bin/env python3
	import re
	import os
	import subprocess as sp
	from pathlib import Path

	# Windows doesn't seem to evaluate PATH unless `shell=True`.
	if os.name == "nt":
		shell = True
	else:
		shell = False

	justfile_directory = Path(r"{{ justfile_directory() }}")
	just_path = Path(r"{{ just_path }}")

	repo_files = sp.check_output(
		["git", "ls-files", "*.just", "*justfile", "*timeout", "*crash"],
		encoding="utf8", shell=shell
	)
	just_repo_files =  sp.check_output(
		["git", "-C", just_path, "ls-files", "*.just", "*justfile"],
		encoding="utf8", shell=shell
	)

	files = set()
	error_files = set()
	skip_just = []

	for line in repo_files.splitlines():
		files.add(justfile_directory / line)

	for line in just_repo_files.splitlines():
		files.add(just_path / line)

	for line in """{{ errors_expected }}""".splitlines():
		line = re.sub("#.*", "", line).strip()
		if len(line) == 0:
			continue

		error_files.add(justfile_directory / line)

	for line in """{{ no_just_parsing }}""".splitlines():
		line = re.sub("#.*", "", line).strip()
		if len(line) == 0:
			continue

		skip_just.append(justfile_directory / line)

	files -= error_files

	print("Checking parsing and highlighting...")

	ts_cmd = ["npx", "tree-sitter"]
	scope_args = ["--scope", "source.just"]

	for fname in files:
		print(f"Checking '{fname}': parse'")
		sp.check_output(
			ts_cmd + ["parse", fname] + scope_args, timeout=10, shell=shell
		)
	
		print(f"Checking '{fname}': highlight'")
		sp.check_output(
			ts_cmd + ["highlight", fname] + scope_args,	timeout=10, shell=shell
		)

		# Verify that the `just` tool parses all files we are using
		if not fname in skip_just:
			sp.check_output(
				["just", "--list", "--unstable", "--justfile", fname],
				timeout=10, shell=shell
			)

	print("Checking parsing and highlighting for invalid files...")

	for fname in error_files:
		cmd = ts_cmd + ["parse", fname] + scope_args
		try:
			print(f"Checking invalid source '{fname}': parse'")
			res = sp.check_output(cmd, timeout=10, shell=shell)
		except sp.CalledProcessError as e:
			if e.returncode != 1: # error code 1 is a highlight failure
				print("command completed with non-1 exit status")
				raise e
		else:
			raise AssertionError(f"failure expected but not found: {cmd} -> {res}")

		# Highlighting should always succeed
		print(f"Checking invalid source '{fname}': highlight'")
		sp.check_output(
			ts_cmd + ["highlight",  fname] + scope_args, timeout=10, shell=shell
		)
	
	print(
		f"Successfully parsed {len(files) + len(error_files)} example files "
		f"with {len(error_files)} expected failures"
	)

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
		parent_dir = os.path.dirname(r"{{ justfile_directory() }}")
		j["parser-directories"].append(parent_dir)
		json.dump(j, f)

		f.truncate()

# Run lint and check formatting
ci-codestyle: lint format-check

# Make sure that files have not changed
ci-validate-generated-files exit-code="1":
	#!/bin/sh
	set -eaux

	git tag ci-tmp-pre-updates

	just {{ verbose_flag }} gen

	failed=false
	git diff ci-tmp-pre-updates --exit-code || failed=true
	git tag -d ci-tmp-pre-updates

	if ! [ "$failed" = "false" ]; then
		echo '::warning::Generated files are out of date!'
		echo '::warning::run `just gen` and commit the changes'

		# We use an exit code so that we can use this as either a warning or error
		exit {{ exit-code }}
	fi

# Run a subset of CI checks before committing.
pre-commit: _lint-min format-check

# Install pre-commit hooks
pre-commit-install:
	#!/bin/sh
	fname="{{ justfile_directory() }}/.git/hooks/pre-commit"
	touch "$fname"
	chmod +x "$fname"

	cat << EOF > "$fname"
	#!/bin/sh
	just pre-commit
	EOF

# Clone or update a repo
_clone-repo url path sha:
	#!/bin/sh
	set -eaux

	if [ ! -d '{{ path }}' ]; then
		echo "Cloning {{ url }}"
		git clone '{{ url }}' '{{ path }}' --depth=100
	fi

	actual_sha=$(git -C '{{ path }}' rev-parse HEAD)
	if [ "$actual_sha" != "{{ sha }}" ]; then
		echo "Updating {{ url }} to {{ sha }}"
		git -C '{{ path }}' fetch
		git -C '{{ path }}' reset --hard '{{ sha }}'
	fi

# Clone the tree-sitter repo
_clone-repo-tree-sitter: (_clone-repo ts_repo ts_path ts_sha)

# Clone the just repo
_clone-repo-just: (_clone-repo just_repo just_path just_sha)

# Build a simple debug executable
debug-build: _clone-repo-tree-sitter _out-dirs
	#!/bin/sh
	set -eau

	cache_key='{{ base_cache_key + sha256_file(bindings / "debug.c") }}'
	keyfile="{{ obj_dir }}/debug-build.cachekey"
	[ "$cache_key" = $(cat "$keyfile" 2> /dev/null || echo "") ] && exit 0

	clang -O0 -g -fsanitize=undefined ${CFLAGS:-} {{ include_args }} \
	{{ parser_sources }} "{{ bindings }}/debug.c" \
	-o {{ debug_out }}

	printf "$cache_key" > "$keyfile"

# # Run the debug executable with one or more files
debug-run *file-names: debug-build
	{{ debug_out }} {{file-names}}

# Build and run the fuzzer
fuzz *extra-args: (gen "--debug-build") _clone-repo-tree-sitter _out-dirs
	#!/bin/sh
	set -eaux

	"{{ fuzzer / "build-corpus.py" }}"

	artifacts="{{fuzzer}}/failures/"
	corpus="{{fuzzer}}/corpus"
	mkdir -p "$artifacts"
	opt_level="-O0"

	flags="{{ fuzzer_flags }}"
	flags="$flags -g $opt_level -std=gnu99"
	flags="$flags {{ include_args }}"

	sources="{{ parser_sources }} {{ fuzzer }}/entry.c"

	cache_key='{{ base_cache_key + sha256_file(fuzzer/ "entry.c") }}'
	keyfile="{{ obj_dir }}/fuzz.cachekey"
	[ "$cache_key" = $(cat "$keyfile" || echo "") ] ||
		clang $flags -o "{{ fuzz_out }}" $sources

	printf "$cache_key" > "$keyfile"

	fuzzer_flags="-artifact_prefix=$artifacts -timeout=20 -max_total_time={{ fuzz_time }} -jobs={{ num_cpus() }}"

	echo "Starting fuzzing at $(date -u -Is)"
	LD_LIBRARY_PATH="{{ ts_path }}" "{{ fuzz_out }}" "$corpus" $fuzzer_flags {{ extra-args }}

# Configure the database used by clang-format, clang-tidy, and language servers
configure-compile-database:
	#!/usr/bin/env python3
	import json
	src = r"{{ src }}"
	include_args = r"{{ include_args }}"
	general_cflags = r"{{ general_cflags }}"

	sources = [
		("bindings/debug.c", r"{{ debug_out }}"),
		("fuzzer/entry.c", r"{{ fuzz_out }}"),
		("src/parser.c", r"{{ obj_dir / "parser.o" }}"),
		("src/scanner.c", r"{{ obj_dir / "scanner.o" }}"),
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
