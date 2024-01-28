# List all recipes
default:
	just --list

# Run the linter
lint:
	npm run lint:check

alias fmt := format

# Autoformat code
format:
	npm run format:write

# Generate the parser
gen:
	npm run gen

alias t := test-ts

# Run tests that are built into tree-sitter
test-ts *ts-test-args: gen
	npm test -- {{ ts-test-args }}

# Verify that tree-sitter can parse and highlight all files in the repo. Requires a tree-sitter configuration.
test-parse-highlight:
	#!/bin/sh
	set -eaux

	# skip readme.just because it is broken but works for testing
	# FIXME: also skip test.just because it is currently broken
	find {{justfile_directory()}} -type f -iregex '.*[\./]just[^\./]*' |
		grep -v readme.just |
		grep -v test.just |
		while read -r fname
	do
		printf '\n\n\n'
		echo "::group::Parse and highlight testing for $fname"
		echo "::notice:: checking parsing of $fname"
		npx tree-sitter parse "$fname" > "$fname.parse.out"
		echo "::notice:: checking highlight of $fname"
		npx tree-sitter highlight "$fname" > "$fname.highlight.out"
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

# Verify that the `just` tool parses all files we are using
verify-just-parsing:
	#!/bin/sh
	set -eaux

	# skip readme.just because it is broken but works for testing
	find . -type f -iregex '.*[\./]just[^\./]*' |
		grep -v readme.just |
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
ci-codestyle:
	npm run format:check
	npm run lint:check

# Make sure that files have not changed
ci-validate-generated-files:
	#!/bin/sh
	set -eaux

	git tag ci-tmp-pre-updates
	
	npm run gen

	failed=false
	git diff ci-tmp-pre-updates --exit-code || failed=true

	if ! [ "$failed" = "false" ]; then
		echo '::warning::Generated files are out of date!'
		echo '::warning::run `npm run gen` and commit the changes'
	fi

	git tag -d ci-tmp-pre-updates
