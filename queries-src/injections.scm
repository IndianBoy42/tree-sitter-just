; This query specifies how nested languages are handled

; ((comment) @injection.content
;   (#set! injection.language "comment"))

([
    (recipe_body 
      (recipe_line (text)))
    (external_command
        _
        body: (_)*)
  ] @injection.content
  (#set! injection.language "bash")
  ; (#set! injection.include-children)
  )

(interpolation
  (#set! injection.language "just")
  (#set! injection.include-children)
  )

; (source_file
;   (item
;     (setting
;       left: (identifier)
;       right: (string_array
;         (string) @injection.language)))

;   (item (recipe (recipe_body) @injection.content))
; )
    
; FIXME: shebang
; (shebang_recipe 
;     (shebang 
;         interpreter:(TEXT) @language)
;     (shebang_body) @content
; ) 

; (source_file 
;     ; (item (setting lang:(identifier) @language))
;     (item (recipe (recipe_body) @content))
; ) 

; (interpolation (expression) @just)
