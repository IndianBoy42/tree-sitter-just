; Scopes

(recipe) @local.scope

; References

(identifier) @local.reference

; Definitions

(recipe_header name: (identifier) @local.definition.function)

(alias left: (identifier) @local.definition.variable)

(assignment left: (identifier) @local.definition.variable)

(module name: (identifier) @local.definition.namespace)

(parameter (identifier) @local.definition.variable)
