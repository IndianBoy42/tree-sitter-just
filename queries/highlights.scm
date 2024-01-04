; This file specifies how matched syntax patterns should be highlighted

(assignment (NAME) @variable)
(alias (NAME) @variable)
(value (NAME) @variable)
(parameter (NAME) @variable)
(setting (NAME) @keyword)
(setting "shell" @keyword)

(call (NAME) @function)
(dependency (NAME) @function)
(depcall (NAME) @function)
(recipe_header (NAME) @function)

(depcall (expression) @parameter)
(parameter) @parameter
(variadic_parameters) @parameter

(module (NAME) @namespace)

["if" "else"] @conditional

(string) @string

(boolean ["true" "false"]) @boolean

(shebang) @comment
(comment) @comment

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

[ "(" ")" "[" "]" "{{" "}}" "{" "}"] @punctuation.bracket

(ERROR) @error
