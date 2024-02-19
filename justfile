# List all recipes
default:
	just --list

# Run the linter for JS, C, Cargo, and Python. Requires clang-tidy, clippy, and ruff.
lint:
	npm run lint:check
	find src/ -name '*.c' ! -name 'parser.c' | \
		xargs -IFNAME sh -c \
		'echo && echo "checking file FNAME" && \
		clang-tidy FNAME -- -I src/  -Wall -Werror --pedantic  \
		-Wno-format-pedantic'
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
ci-codestyle: lint
	# Check formatting without changing
	npm run format:check
	clang-format --Werror --verbose src/scanner.c | diff -up - src/scanner.c

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
pre-commit: ci-codestyle

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
