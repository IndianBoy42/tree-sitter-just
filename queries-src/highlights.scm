; This file specifies how matched syntax patterns should be highlighted
;
; This file is ordered roughly the same as grammar.js

(shebang) @comment

(alias left: (identifier) @variable)
(assignment
  left: (identifier) @variable
  ":=" @operator)

(module mod_name: (identifier) @namespace)

; highlight known settings (filtering does not always work)
(setting
  left: ((identifier) @keyword
  ":="? @operator
  (#any-of? @keyword
    "allow-duplicate-recipes"
    "dotenv-filename"
    "dotenv-load"
    "dotenv-path"
    "export"
    "fallback"
    "ignore-comments"
    "positional-arguments"
    "shell"
    "tempdi"
    "windows-powershell"
    "windows-shell"
    )))

(boolean ["true" "false"]) @constant.builtin.boolean

["if" "else"] @keyword.control.conditional

(value (identifier) @variable)

(function_call
  name: (identifier) @function)

(attribute
  attr_item: ((identifier) @attribute))

(recipe_header
  recipe_name: (identifier) @function)

; recipe argument specification
; pattern includes variadic_parameter
(parameter
  param: (identifier) @variable.parameter
  "="? @operator)

(dependencies "&&" @operator)
(dependency recipe: (identifier) @function)
(dependency_expression recipe: (identifier) @function)

; handle escape sequences
(string_literal (escape_sequence) @constant.character.escape)
[
  (string_literal)
  (raw_string_literal)
] @string

(comment) @comment.line

[
  "alias"
  "export"
  "import"
  "mod"
  "set"
] @keyword

; exclude `=` and `&&` since they are valid only in specific scopes
; (matching is covered in their parent nodes)
["@" "==" "!=" "+" "*" ":" "/" "?"] @operator

["(" ")" "[" "]" "{{" "}}" "{" "}"] @punctuation.bracket

["," ":"] @punctuation.delimiter


; open and close are "`" or "```" 
(external_command
  open: _ @punctuation.special
  close: _ @punctuation.special
  )

(ERROR) @error
