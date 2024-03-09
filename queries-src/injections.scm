((comment) @injection.content
  (#set! injection.language "comment"))

(comment) @comment

; Default everything to be bash
; FIXME: uncomment this when we have a better idea of how precedence will work
; in all editors, since this is pretty turbulant in early 2024.
; (recipe_body
;   (#set! injection.language "bash")
;   (#set! injection.include-children)) @injection.content

(external_command
  (command_body) @injection.content
  (#set! injection.language "bash"))

; Set highlighting for recipes that set a language
(recipe_body
  (shebang (language) @injection.language)
  (#set! injection.include-children)) @injection.content

; Highlight the RHS of `=~` as regex
((regex_literal (_) @injection.content)
  (#set! injection.language "regex"))
