; This file tells us about the scope of variables so e.g. local
; variables override global functions with the same name

(recipe) @local.scope

; definition sources
(alias left: (identifier) @local.definition.variable)
(assignment left: (identifier) @local.definition.variable)
(module mod_name: (identifier) @local.definition.namespace)
(parameter param: (identifier) @local.definition.variable)
(recipe_header recipe_name: (identifier) @local.definition.function)

; reference locations
(alias right: (identifier) @local.reference.variable)
(function_call name: (identifier) @local.reference.function)
(dependency recipe: (identifier) @local.reference.function)
(dependency_expression recipe: (identifier) @local.reference.function)
(value (identifier) @local.reference.variable)
