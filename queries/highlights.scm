; This file specifies how matched syntax patterns should be highlighted
;
; This file is ordered roughly the same as grammar.js

(shebang) @comment

(alias
  left: (identifier) @variable
)

(assignment
  left: (identifier) @variable)

(module (identifier) @namespace)

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
; (call (identifier) @function)


; ([parameter varidic_parameter]
   ; (identifier) @variable)
(parameter (identifier) @variable)
(variadic_parameter (parameter (identifier)) @variable)

(function_call
  name: (identifier) @function)



(dependency
  recipe: (identifier) @function
  expression: (expression)* @parameter)
  
(recipe_header (identifier) @function)

; FIXME: what's up with $identifier params
(parameter) @variable.parameter


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
