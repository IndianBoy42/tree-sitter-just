; This file specifies how matched syntax patterns should be highlighted

[
  "export"
  "import"
] @keyword.import

"mod" @keyword.module

[
  "alias"
  "set"
  "shell"
] @keyword

[
  "if"
  "else"
] @keyword.control.conditional

(boolean ["true" "false"]) @constant.builtin.boolean

; Variables

(value (identifier) @variable)

(alias left: (identifier) @variable)

(assignment left: (identifier) @variable)

; Functions

(recipe_header name: (identifier) @function)

(dependency name: (identifier) @function.call)

(dependency_expression name: (identifier) @function.call)

(function_call name: (identifier) @function.call)

; Parameters

(parameter name: (identifier) @variable.parameter)

; Namespaces

(module name: (identifier) @namespace)

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
  "/"
  ":"
] @operator

; Punctuation

[ "," ] @punctuation.delimiter

[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

[ "{{" "}}" "`" ] @punctuation.special

; Literals

(boolean) @boolean

[
  (string)
  (external_command)
] @string

(escape_sequence) @constant.character.escape

; Comments

(comment) @comment.line @spell

(shebang) @comment

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
