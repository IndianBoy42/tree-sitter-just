(comment) @comment

(recipe_body
  (shebang (language) @injection.language)
  (#set! injection.include-children)
) @injection.content

(comment) @comment


(source_file
    ; (item (setting lang:(identifier) @language))
    (recipe (recipe_body) @content)
)

; (interpolation (expression) @just)
