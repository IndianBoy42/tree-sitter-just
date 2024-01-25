# List all recipes
default:
	just --list

# Run deno lint
lint:
	deno lint

alias fmt := format

# Run deno format
format:
	deno fmt

# Generate the parser
gen *extra-args:
	#!/bin/sh
	set -eaux
	tree-sitter generate {{ extra-args }}
	python3 build-flavored-queries.py

alias t := test-ts

# Run tests that are built into tree-sitter
test-ts *ts-test-args: gen
	tree-sitter test {{ ts-test-args }}

# Verify that tree-sitter can parse and highlight all files in the repo. Requires a tree-sitter configuration.
test-parse-highlight:
	#!/bin/sh
	set -eaux

	# skip readme.just because it is broken but works for testing, and skip files
	# from the fuzzer
	find {{justfile_directory()}} -type f -iregex '.*[\./]just[^\./]*' |
		grep -v readme.just |
		grep -vE 'timeout-.*' |
		grep -vE 'crash-.*' |
		while read -r fname
	do
		printf '\n\n\n'
		echo "::group::Parse and highlight testing for $fname"
		echo "::notice:: checking parsing of $fname"
		tree-sitter parse "$fname" > /dev/null
		echo "::notice:: checking highlight of $fname"
		tree-sitter highlight "$fname" > /dev/null
		echo "::endgroup::"
	done

# Check C files with more strict arguments
check-c:
	#!/bin/sh
	set -eaux

	find src/ -name '*.c' ! -name 'parser.c' |
		xargs -IFNAME sh -c \
		'echo && echo "::notice:: checking file FNAME" &&
		clang FNAME -c -Wall -Werror --pedantic  \
		-Wno-format-pedantic \
		-o/dev/null'

src := justfile_directory() / "src"
ts_src := justfile_directory() / "tree-sitter-src"
ts_staticlib := ts_src / "libtree-sitter.a"
fuzz_out := justfile_directory() / "fuzzer"

# Download and build upstream tree-sitter
tree-sitter *cflags:
	#!/bin/sh
	[ ! -d "{{ ts_src }}" ] &&
		git clone https://github.com/tree-sitter/tree-sitter "{{ ts_src }}" \
		--depth=1
	CFLAGS="-O1 -g {{ cflags }} $CFLAGS" make -C "{{ ts_src }}"

debug-build: tree-sitter
	clang -O3 -g ${CFLAGS:-} -Isrc "-I{{ ts_src }}/lib/include" \
	"-L{{ ts_src }}" "-ltree-sitter" \
	"src/scanner.c" "src/parser.c" "debug.c" \
	-o debug.out

# Run the fuzzer
fuzz *extra-args: (gen "--debug-build") (tree-sitter "-fsanitize=fuzzer,address,undefined")
	#!/bin/sh
	set -eaux

	out="{{ fuzz_out }}"
	obj="$out/obj"
	mkdir -p "$obj"
	
	
	flags="-fsanitize=fuzzer,address,undefined"
	flags="$flags -g -O1"
	flags="$flags -I{{ src }} -I{{ ts_src }}/lib/include"

	clang $flags "src/scanner.c" -c -o "$obj/scanner.o"
	clang $flags "src/parser.c" -c -o "$obj/parser.o"
	sources="{{ ts_staticlib }} $obj/scanner.o $obj/parser.o" 
	
	cat << EOF | clang $flags -o "$obj/fuzz.out" $sources -x c -
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
	"/$out/fuzz.out" $fuzzer_flags {{ extra-args }}


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
		sp.run(["tree-sitter", "init-config"], check=True, shell=shell)

	with open(cfg_fname, "r+") as f:
		j = json.load(f)
		f.seek(0)

		# Add ths tree-sitter-just directory to the config file
		parent_dir = os.path.dirname("{{ justfile_directory() }}")
		j["parser-directories"].append(parent_dir)
		json.dump(j, f)
		
		f.truncate()

# Run lint and check formatting
ci-codestyle:
	deno lint
	deno fmt --check

# Make sure that files have not changed
ci-validate-generated-files: gen
	#!/bin/sh
	set -eaux

	git tag ci-tmp-pre-updates
	
	failed=false
	git diff ci-tmp-pre-updates --exit-code || failed=true

	if ! [ "$failed" = "false" ]; then
		echo '::warning::Generated files are out of date!'
		echo '::warning::run `just gen` or `npm run gen` and commit the changes'
	fi

	git tag -d ci-tmp-pre-updates
