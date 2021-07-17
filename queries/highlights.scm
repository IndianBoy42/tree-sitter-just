(assignment (NAME) @variable)
(alias (NAME) @variable)
(value (NAME) @variable)
(parameter (NAME) @variable)
(setting (NAME) @variable)

(call (NAME) @function)
(dependency (NAME) @function)
(depcall (NAME) @function)
(recipeheader (NAME) @function)

(depcall (expression) @parameter)
(parameter) @parameter
(variadic_parameters) @parameter

["if" "else"] @conditional

(string) @string

(boolean ["true" "false"]) @boolean

(comment) @comment

(interpolation) @none

["export" "alias" "set"] @keyword

["@" "==" "!=" "+" ":="] @operator

[ "(" ")" "[" "]" "{" "}"] @punctuation.bracket
