; Specify how to navigate around logical blocks in code

(recipe 
  (recipe_body) @function.inside) @function.around

(parameters 
  ((_) @parameter.inside . ","? @parameter.around)) @parameter.around

(dependency_expression
  (_) @parameter.inside) @parameter.around

(function_call
  arguments: (sequence
    (expression) @parameter.inside) @parameter.around) @function.around

(comment) @comment.around
