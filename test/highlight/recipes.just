#!/use/bin/env just

foo:
# <- function
#  ^ operator
	echo foo

@bar:
# <- operator
# ^ function
#   ^ operator
	echo bar

baz: foo bar
# <- function
#  ^ operator
#     ^ function
#          ^ function
	echo baz
