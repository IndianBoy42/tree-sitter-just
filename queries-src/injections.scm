; This query specifies how nested languages are handled

((comment) @injection.content
  (#set! injection.language "comment"))


(recipe_line
    (text) @injection.content
    (#set! injection.language "bash"))

(external_command
    (command_body) @injection.content
    (#set! injection.language "bash"))

; ; FIXME: read default from shebang
; ([
;     (recipe_body 
;       (recipe_line (text)))
;     (external_command
;         body: (_)*)
;   ] @injection.content
;   (#set! injection.language "bash")
;   )
