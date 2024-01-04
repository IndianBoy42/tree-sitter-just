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

qux var1:
# <- function
#   ^^^ variable.parameter
#       ^ operator

quux var *var2:
# <- function
#    ^^^ variable.parameter
#        ^ operator
#          ^^^ variable.parameter
#             ^ operator

# This is a good test of locals.scm
# (the first `bar` is a recipe and the second is a variable)
corge +quux: baz (quux quux)
# <- function
#     ^ operator
#      ^^^^ variable.parameter
#          ^ operator
#            ^^^ function
#                ^ punctuation.bracket
#                      ^^^ variable
#                          ^ punctuation.bracket
#                 FIXME  function

grault abc="def":
# <- function
#      ^^^ variable.parameter
#         ^ operator
#          ^^^^ string
#               ^ operator

garply: foo && bar
# <- function
#     ^ operator
#       ^^^ function
#           ^^ operator
#              ^^^ function

waldo a="b": foo bar && baz
# <- function
#     ^ variable.parameter
#      ^ operator
#       ^^^ string
#          ^ operator
#            ^^^ function
#                ^^^ function
#                    ^^ operator
#                       ^^^ function

fred: garply && (waldo "x")
# <- function
#     ^^^^^^ function
#            ^^ operator
#               ^ punctuation.bracket
#                 ^^^^ function
#                      ^^^ string
#                         ^ punctuation.bracket

# FIXME: can't test these because we can't place comments between
[private]
[confirm, no-cd]
attributes:
