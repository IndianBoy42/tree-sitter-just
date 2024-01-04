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
#   ^^^ variable
#       ^ operator

quux var *var2:
# <- function
#    ^^^ variable
#        ^ operator
#          ^^^ variable
#             ^ operator

# This is a good test of locals.scm
# (the first `bar` is a recipe and the second is a variable)
corge +quux: baz (quux quux)
# <- function
#     ^ operator
#      ^^^^ variable
#          ^ operator
#            ^^^ function
#                ^ punctuation.bracket
#                      ^^^ variable
#                          ^ punctuation.bracket
#                 FIXME  function

osdioj: a

[private]
a:
