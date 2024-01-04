; This file tells us about the scope of variables so e.g. local
; variables override global functions with the same name

(assignment (identifier) @local.definition)
(parameter (identifier) @local.definition)

; (assignment (identifier) @definition.variable)
; (alias left:(identifier) @definition.variable)
; (alias right:(identifier) @reference.variable)
; (value (identifier) @reference.variable)
; (parameter (identifier) @definition.variable)

; (call (identifier) @reference.function)
; (dependency (identifier) @reference.function)
; (depcall (identifier) @reference.function)
; (recipe_header (identifier) @definition.function)

