; This file specifies how matched syntax patterns should be highlighted
;
; This file is ordered roughly the same as grammar.js

(shebang) @comment

(alias left: (identifier) @variable)
(assignment
  left: (identifier) @variable
  [":="] @operator)

(module name: (identifier) @namespace)

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
  ((identifier) @attribute
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

(recipe_header name: (identifier) @function)

; recipe argument specification
; pattern includes variadic_parameter
(parameter
  name: (identifier) @variable.parameter
  "="? @operator)

(dependencies "&&" @operator)
(dependency name: (identifier) @function)
(dependency_expression name: (identifier) @function)

; handle escape sequences
(string (escape_sequence) @constant.character.escape)
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

; exclude `=` and `&&` since they are valid in more normal scopes
; (matching is covered in their parent nodes)
["@" "==" "!=" "+" "*" ":" "/" "?"] @operator

["(" ")" "[" "]" "{{" "}}" "{" "}"] @punctuation.bracket

["," ":"] @punctuation.delimiter

"`" @punctuation.special

(ERROR) @error
