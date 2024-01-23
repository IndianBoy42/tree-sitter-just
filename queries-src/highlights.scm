; This file specifies how matched syntax patterns should be highlighted
;
; This file is ordered roughly the same as grammar.js

(shebang) @comment

(alias left: (identifier) @variable)
(assignment
  left: (identifier) @variable
  [":="] @operator)

(module mod_name: (identifier) @namespace)

; highlight known settings (filtering does not always work)
(setting
  left: ((identifier) @keyword
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

; highlight known attributes (filtering does not always work)
(attribute
  attr_item: ((identifier) @attribute
  (#any-of? @attribute
    "private"
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
(string_literal (string_escape) @constant.character.escape)
(string_literal) @string

(comment) @comment.line

; (interpolation) @string

; FIXME: interpreter
; (shebang interpreter:(TEXT) @keyword ) @comment

[
  "alias"
  "export"
  "import"
  "mod"
  "set"
] @keyword

; exclude `=` and `&&` since they are valid in more normal scopes
; (matching is covered in their parent nodes)
["@" "==" "!=" "+" "*" ":" "/" "?"] @operator

["(" ")" "[" "]" "{{" "}}" "{" "}"] @punctuation.bracket

["," ":"] @punctuation.delimiter

"`" @punctuation.special

(ERROR) @error
