; File autogenerated by build-queries-nvim.py; do not edit

; Specify how to navigate around logical blocks in code

(recipe 
  (recipe_body) .inner) .outer

(parameters 
  ((_) .inner . ","? .outer)) .outer

(dependency_expression
  (_) .inner) .outer

(function_call
  arguments: (sequence
    (expression) .inner) .outer) .outer

(comment) .outer
