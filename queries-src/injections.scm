; This query specifies how nested languages are handled

((comment) @injection.content
  (#set! injection.language "comment"))

; NVIM-DISABLE-START
(recipe_body
    (shebang) @injection.shebang 
    (recipe_line
        (text) @injection.content))
; NVIM-DISABLE-END

(recipe_line
    (text) @injection.content
    (#set! injection.language "bash"))

; NVIM-ENABLE (recipe_body
; NVIM-ENABLE     (shebang) @injection.language
; NVIM-ENABLE     (recipe_line
; NVIM-ENABLE         (text) @injection.content)
; NVIM-ENABLE     (#gsub! injection.language "/#!%*[\/ ](%S+)/" "%1"))

(external_command
    (command_body) @injection.content
    (#set! injection.language "bash"))

((regex_literal
    [
        (string_literal)
        (raw_string_literal)
    ] @injection.content)
    (#set! injection.language "regex"))
