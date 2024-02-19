# List all recipes
default:
	just --list

# Lint with more minimal dependencies that can be run during pre-commit
_lint-min:
	npm run lint:check
	find src/ -name '*.c' ! -name 'parser.c' | \
		xargs -IFNAME sh -c \
		'echo && echo "checking file FNAME" && \
		clang-tidy FNAME -- -I src/  -Wall -Werror --pedantic  \
		-Wno-format-pedantic'

# Run the linter for JS, C, Cargo, and Python. Requires clang-tidy, clippy, and ruff.
lint: _lint-min
	cargo clippy
	ruff .

alias fmt := format

# Autoformat code. Requires Cargo, clang-format, and black.
format:
	npm run format:write
	find src/ -name '*.c' ! -name 'parser.c' | \
		xargs -IFNAME sh -c \
		'echo && echo "checking file FNAME" && \
		clang-format -i FNAME -Werror --verbose'
	black .

# Check formatting without editing
format-check:
	npm run format:check
	clang-format --Werror --verbose src/scanner.c | diff -up - src/scanner.c

# Generate the parser
gen *extra-args:
	npx tree-sitter generate {{ extra-args }}
	python3 build-flavored-queries.py

alias t := test-ts

# Run tests that are built into tree-sitter
test-ts *ts-test-args: gen
	npm test -- {{ ts-test-args }}

# Verify that tree-sitter can parse and highlight all files in the repo. Requires a tree-sitter configuration.
test-parse-highlight:
	#!/bin/sh
	set -eaux

	# skip readme.just because it is broken but works for testing, and skip files
	# from the fuzzer
	find {{justfile_directory()}} -type f -iregex '.*[\./]just[^\./]*' |
		grep -v readme.just |
		grep -v test.just |
		grep -vE 'timeout-.*' |
		grep -vE 'crash-.*' |
		while read -r fname
	do
		printf '\n\n\n'
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
	find . -type f -iregex '.*[\./]just[^\./]*' |
		grep -v readme.just |
		grep -vE 'timeout-.*' |
		grep -vE 'crash-.*' |
		while read -r fname
	do
		echo "::notice file=$fname:: checking Just parsing"
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

fuzz *extra-args: (gen "--debug-build")
	#!/bin/sh
	set -eaux

	out=".fuzzer-cache"
	ts_source="$out/tree-sitter"

	flags="-fsanitize=fuzzer,address,undefined"
	flags="$flags -g -O1"
	flags="$flags -Isrc/ -I$ts_source/lib/include -I$ts_source/lib/src"
	flags="$flags -o $out/fuzzer"

	mkdir -p "$out"

	if [ ! -d "$ts_source" ]; then
		git clone https://github.com/tree-sitter/tree-sitter "$ts_source" \
			--depth=1
	else
		git -C "$ts_source" pull
	fi

	# FIXME: ideally we use the makefile, but this gives us undefined symbol
	# errors in CI. So, we build ts ourselves.
	# make -C "$ts_source"

	cat << EOF | clang $flags "$ts_source/lib/src/lib.c" "src/scanner.c" "src/parser.c" -x c -
	#include <stdio.h>
	#include <stdlib.h>
	#include "tree_sitter/api.h"

	TSLanguage *tree_sitter_just();

	int LLVMFuzzerTestOneInput(const uint8_t *data, const size_t len) {
	  TSParser *parser = ts_parser_new();
	  ts_parser_set_language(parser, tree_sitter_just());

	  // Build a syntax tree based on source code stored in a string.
	  TSTree *tree = ts_parser_parse_string(
	    parser,
	    NULL,
	    (const char *)data,
	    len
	  );
	  // Free all of the heap-allocated memory.
	  ts_tree_delete(tree);
	  ts_parser_delete(parser);
	  return 0;
	}
	EOF

	fuzzer_flags="-artifact_prefix=$out/ -timeout=20 -max_total_time=1200"
	./.fuzzer-cache/fuzzer $fuzzer_flags {{ extra-args }}
