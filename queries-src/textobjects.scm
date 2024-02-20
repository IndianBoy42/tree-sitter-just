(recipe 
  (recipe_body) @function.inside) @function.around

(parameters 
  ((_) @parameter.inside . ","? @parameter.around)) @parameter.around

(dependency_expression
  (_) @parameter.inside) @parameter.around

(function_call
  arguments: (sequence (expression) @parameter.inside) @parameter.around) @function.around

(comment) @comment.around

; (expression 
;     if:(expression) @block.inner 
; ) 
; (expression 
;     else:(expression) @block.inner
; ) 
; (interpolation (expression) @block.inner) @block.outer
; ; (string_array (stringlist) @block.inner) @block.outer

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

; (item [(alias) (assignment) (export) (setting)]) @statement.outer
; (recipe_header) @statement.outer
; (line) @statement.outer

