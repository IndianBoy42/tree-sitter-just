(body) @block.inner
(body) @block.outer
(body) @function.inner
(recipe) @function.outer
(expression 
    if:(expression) @block.inner 
    else:(expression) @block.inner)
) 
(interpolation (expression) @block.inner) @block.outer
(settinglist (stringlist) @block.inner) @block.outer

(call (NAME) @call.inner)
(dependency (NAME) @call.outer)
(depcall (NAME) @call.inner)

(dependency (expression) @parameter.inner) @parameter.outer

(stringlist 
    (string) @parameter.inner
    . ","? @_end
    (#make-range! "parameter.outer" @parameter.inner @_end)
)
(parameters 
    [(parameter) 
    (variadic_parameters)] @parameter.inner
    . " "? @_end
    (#make-range! "parameter.outer" @parameter.inner @_end)
)

(expression 
    (condition) @conditional.inner
    if:(expression) @conditional.inner 
    else:(expression) @conditional.inner)
) @conditional.outer

(item [(alias) (assignment) (export) (setting)]) @statement.outer
(recipeheader) @statement.outer
(line) @statement.outer

(comment) @comment.outer
