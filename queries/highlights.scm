; This file specifies how matched syntax patterns should be highlighted
;
; This file is ordered roughly the same as grammar.js

(shebang) @comment

(alias
  left: (identifier) @variable)

(assignment
  left: (identifier) @variable)

(module
  modname: (identifier) @namespace)

(setting "shell" @keyword)
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

(attribute
  attr_item: (identifier) @variable)

(recipe_header
  recipe_name: (identifier) @function)

; pattern includes variadic_parameter
(parameter
  param: (identifier) @variable.parameter
  "="? @operator)

(dependency
  recipe: (identifier) @function)
(dependency_expression
  recipe: (identifier) @function)

(string (_ (string_escape) @constant.character.escape))
(string) @string

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

["@" "==" "!=" "+" ":=" "*" ":" "/" "?"] @operator

["(" ")" "[" "]" "{{" "}}" "{" "}"] @punctuation.bracket

["," ":"] @punctuation.delimiter

"`" @punctuation.special

(ERROR) @error
