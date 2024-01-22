#!/usr/bin/env just
# <- comment

foo := "abc"
# <- variable
#   ^^ operator
#      ^^^^^ string

bar := "abc" + 'def' + foo
# <- variable
#   ^^ operator
#      ^^^^^ string
#            ^ operator
#              ^^^^^ string
#                    ^ operator
#                      ^ variable

relative := "abc" / "def"
# <- variable
#        ^^ operator
#           ^^^^^ string
#                 ^ operator
#                   ^^^^^ string


absolute := / "abc"
# <- variable
#        ^^ operator
#           ^ operator
#             ^^^^^ string

combined := "foo" / os() / bar
# <- variable
#        ^^ operator
#           ^^^^^ string
#                 ^ operator
#                   ^^ function
#                      ^^ punctuation.bracket
#                        ^ operator
#                          ^^^ variable


# We can't really test multiline strings completely since check comments only
# apply to one line above, but should be okay here

foo0 := "a"
# <- variable
#    ^^ operator
#       ^^^ string

bar0 := "b
  c
"
# <- string

baz0 := "a\"\t"
# <- variable
#    ^ operator
#       ^^ string
#         ^^^^ constant.character.escape
#             ^ string

foo1 := """a"""
# <- variable
#    ^^ operator
#       ^^^^^^^ string

bar1:= """b
  c
"""
# <- string

baz1 := """
abc \t
def \"
\""""
# <-  constant.character.escape
# ^^^ string

foo2 := 'a'
# <- variable
#   ^^ operator
#       ^^^ string

bar2 := 'b
  c
'
# <- string

baz2 := 'a\"\t'
# <- variable
#    ^^ operator
#       ^^^ string

foo3 := '''a'''
# <- variable
#   ^^ operator
#       ^^^^^^^ string

bar3 := '''b
  c
'''
# <- string

baz3 := '''
  abc \t
  def \"
'''
# <- string

foo4 := `echo hi`
bar4 := `echo hi
  echo bye
`

foo5 := ```echo hi```
# <- variable
#   ^^ operator

bar5 := ```
echo bye  
```

foo_if := if foo == "x" { "val" } else if "1" != "2" { env("val") } else { bar }
# <- variable
#      ^^ operator
#         ^^ keyword.control.conditional
#            ^^^ variable
#                ^^ operator
#                   ^^^ string
#                       ^ punctuation.bracket
#                         ^^^^^ string
#                               ^ punctuation.bracket
#                                 ^^^^ keyword.control.conditional
#                                      ^^ keyword.control.conditional
#                                         ^^^ string
#                                             ^^ operator
#                                                ^^^ string
#                                                    ^ punctuation.bracket
#                                                      ^^^ function
#                                                         ^ punctuation.bracket
#                                                           ^^^^^ string
#                                                                 ^ punctuation.bracket
#                                                                    ^^^^ keyword.control.conditional
#                                                                          ^^^ variable

foo_fn := env("abc", foo)
# <- variable
#      ^^ operator
#         ^^^ function
#            ^ punctuation.bracket
#             ^^^^ string
#                  ^ punctuation.delimiter
#                    ^^^ variable
#                       ^ punctuation.bracket

export fooexp := "abc"
# <- keyword
#      ^^^^^^ variable
#             ^^ operator
#                 ^^^^ string

import? 'baz.just'
# <- keyword
#     ^ operator
#       ^^^^^^^^^^ string

mod? foomod
# <- keyword
#  ^ operator
#    ^^^^^^ namespace

mod barmod 'recipes.just'
# <- keyword
#   ^^^^^^ namespace
#           ^^^^^ string

mod? qux "PATH"
# <- keyword
#  ^ operator
#    ^^^ namespace
#        ^^^^^ string

set dotenv-load
set fallback := false
set tempdir := "/tmp/just"
set shell := ["powershell.exe", "-c"]

# comment
# <- comment.line

foo_cmt := bar # + baz
# <- variable
#              ^ comment.line

foo_re := if ".JUSTFILE" =~ '(?i)\.?just(?:file)?' { "match" } else { "mismatch" }
