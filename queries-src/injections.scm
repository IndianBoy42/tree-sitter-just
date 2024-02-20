((comment) @injection.content
  (#set! injection.language "comment"))

(recipe_body
  (shebang (language) @injection.language)
  (#set! injection.include-children)
) @injection.content

(comment) @comment


(source_file
    ; (item (setting lang:(identifier) @language))
    (recipe (recipe_body) @content)
)
; Defaults if language is not set elsewhere

; (recipe_line
;   (text) @injection.content
;   (#set! injection.language "bash"))

; (external_command
;   (command_body) @injection.content
;   (#set! injection.language "bash"))
