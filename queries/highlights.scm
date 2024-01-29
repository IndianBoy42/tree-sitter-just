; Keywords

[
  "export"
  "import"
] @keyword.import

"mod" @module

[
  "alias"
  "set"
  "shell"
] @keyword

[
  "if"
  "else"
] @keyword.conditional

; Variables

(identifier) @variable

; Functions

(recipe_header name: (identifier) @function)

(dependency name: (identifier) @function)

(function_call name: (identifier) @function.call)

; Parameters

(parameter (identifier) @variable.parameter)

; Operators

[
  ":="
  "?"
  "=="
  "!="
  "=~"
  "@"
  "="
  "$"
  "*"
  "+"
  "&&"
  "@-"
  "-@"
  "-"
] @operator

; Punctuation

[
  "/"
  ":"
  ","
] @punctuation.delimiter

[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

[ "{{" "}}" ] @punctuation.special

; Literals

(boolean) @boolean

[
  (string)
  (external_command)
] @string

(escape_sequence) @string.escape

; Comments

(comment) @comment @spell
