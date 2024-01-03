#!/use/bin/env just
# <- comment
# ^^^^^^^^^^^^^^^^^ comment


foo:
# <- function
#  ^ operator

@bar:
# <- operator
# ^ function
#   ^ operator

baz: foo bar
# <- function
#  ^ operator
#     ^ function
#          ^ function
