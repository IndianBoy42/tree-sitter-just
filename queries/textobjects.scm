(recipe_body) @block.inner
(recipe_body) @block.outer
(recipe_body) @function.inner
(recipe) @function.outer
; (expression 
;     if:(expression) @block.inner 
; ) 
; (expression 
;     else:(expression) @block.inner
; ) 
; (interpolation (expression) @block.inner) @block.outer
; ; (string_array (stringlist) @block.inner) @block.outer

; (call (identifier) @call.inner) @call.outer
; (dependency (identifier) @call.inner) @call.outer

; (dependency) @parameter.outer
; ; (dependency_call) @parameter.inner
; ; (dependency_call (expression) @parameter.inner) 

; ; (stringlist 
; ;     (string) @parameter.inner
; ;     . ","? @_end
; ;     (#make-range! "parameter.outer" @parameter.inner @_end)
; ; )
; (parameters 
;     [
;         (parameter) 
;         (variadic_parameter)
;     ] @parameter.inner
;     . " "? @_end
;     (#make-range! "parameter.outer" @parameter.inner @_end)
; )

; (expression 
;     (condition) @conditional.inner
; ) @conditional.outer
; (expression 
;     if:(expression) @conditional.inner 
; )
; (expression 
;     else:(expression) @conditional.inner
; )

; (item [(alias) (assignment) (export) (setting)]) @statement.outer
; (recipe_header) @statement.outer
; (line) @statement.outer

; (comment) @comment.outer
