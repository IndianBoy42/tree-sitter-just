; This query specifies how nested languages are handled

; ================ Standards ================
((comment) @injection.content
  (#set! injection.language "comment"))

; Highlight the RHS of `=~` as regex
((regex_literal
  [
    (string_literal)
    (raw_string_literal)
  ] @injection.content)
  (#set! injection.language "regex"))


; ================ Global language ================
; Global language is set with something like one of the following:
;
;    set shell := ["bash", "-c", ...]
;    set shell := ["pwsh.exe"]
;
; We can extract the first item of the array, but we can't extract the language
; name from that with something like regex. So instead we special case two
; things: powershell, which is likely to come with a `.exe` attachment, and
; everything else which hopefully has no extension. We separate this with a
; `#match`.
;
; On NeoVim we have `#gsub!`, so this split is not required.
;
; We also don't have a way to apply this captured language to more than one
; possible item, so instead we do each of the above patterns twice to cover
; all options (recipe bodies and external commands)
;
; Unfortunately, there also isn't a way to allow arbitrary nesting or
; alternatively set "global" capture variables. So we can set this for item-
; level external commands, but not for e.g. external commands within an
; expression without getting _really_ annoying. Should at least look fine since
; they default to bash. Limitations...
; See https://github.com/tree-sitter/tree-sitter/issues/880 for more on that.

(source_file                                                    ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (setting                                                    ; NVIM-DISABLE
    left: (identifier) @setting                                 ; NVIM-DISABLE
    (#match? @setting "^shell$")                                ; NVIM-DISABLE
    right: (array                                               ; NVIM-DISABLE
      (string_literal) @executable                              ; NVIM-DISABLE
      (#match? @executable ".*(powershell|pwsh|cmd).*")         ; NVIM-DISABLE
      (#set! injection.language "powershell")                   ; NVIM-DISABLE
      )))                                                       ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (recipe                                                     ; NVIM-DISABLE
      (recipe_body                                              ; NVIM-DISABLE
        (recipe_line                                            ; NVIM-DISABLE
          (text) @injection.content)))))                        ; NVIM-DISABLE
                                                                ; NVIM-DISABLE
(source_file                                                    ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (setting                                                    ; NVIM-DISABLE
    left: (identifier) @setting                                 ; NVIM-DISABLE
    (#match? @setting "^shell$")                                ; NVIM-DISABLE
    right: (array                                               ; NVIM-DISABLE
      (string_literal) @injection.language                      ; NVIM-DISABLE
      (#not-match? @executable ".*(powershell|pwsh|cmd).*")     ; NVIM-DISABLE
      )))                                                       ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (recipe                                                     ; NVIM-DISABLE
      (recipe_body                                              ; NVIM-DISABLE
        (recipe_line                                            ; NVIM-DISABLE
          (text) @injection.content)))))                        ; NVIM-DISABLE
                                                                ; NVIM-DISABLE
(source_file                                                    ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (setting                                                    ; NVIM-DISABLE
    left: (identifier) @setting                                 ; NVIM-DISABLE
    (#match? @setting "^shell$")                                ; NVIM-DISABLE
    right: (array                                               ; NVIM-DISABLE
      (string_literal) @executable                              ; NVIM-DISABLE
      (#match? @executable ".*(powershell|pwsh|cmd).*")         ; NVIM-DISABLE
      (#set! injection.language "powershell")                   ; NVIM-DISABLE
      )))                                                       ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (assignment                                                 ; NVIM-DISABLE
      right: (expression                                        ; NVIM-DISABLE
        (value                                                  ; NVIM-DISABLE
          (external_command                                     ; NVIM-DISABLE
            body: (command_body) @injection.content))))))       ; NVIM-DISABLE
                                                                ; NVIM-DISABLE
(source_file                                                    ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (setting                                                    ; NVIM-DISABLE
    left: (identifier) @setting                                 ; NVIM-DISABLE
    (#match? @setting "^shell$")                                ; NVIM-DISABLE
    right: (array                                               ; NVIM-DISABLE
      (string_literal) @injection.language                      ; NVIM-DISABLE
      (#not-match? @executable ".*(powershell|pwsh|cmd).*")     ; NVIM-DISABLE
      )))                                                       ; NVIM-DISABLE
  (item                                                         ; NVIM-DISABLE
    (assignment                                                 ; NVIM-DISABLE
      right: (expression                                        ; NVIM-DISABLE
        (value                                                  ; NVIM-DISABLE
          (external_command                                     ; NVIM-DISABLE
            body: (command_body) @injection.content))))))       ; NVIM-DISABLE

; (source_file                                                  ; NVIM-ENABLE
;   (item                                                       ; NVIM-ENABLE
;     (setting                                                  ; NVIM-ENABLE
;     left: (identifier) @setting                               ; NVIM-ENABLE
;     (#match? @setting "^shell$")                              ; NVIM-ENABLE
;     right: (array                                             ; NVIM-ENABLE
;       (string_literal) @injection.language                    ; NVIM-ENABLE
;       (#gsub! injection.language "(%S+)%*" "%1")              ; NVIM-ENABLE
;       )))                                                     ; NVIM-ENABLE
;   (item                                                       ; NVIM-ENABLE
;     (assignment                                               ; NVIM-ENABLE
;       right: (expression                                      ; NVIM-ENABLE
;         (value                                                ; NVIM-ENABLE
;           (external_command                                   ; NVIM-ENABLE
;             body: (command_body) @injection.content))))))     ; NVIM-ENABLE
;                                                               ; NVIM-ENABLE
; (source_file                                                  ; NVIM-ENABLE
;   (item                                                       ; NVIM-ENABLE
;     (setting                                                  ; NVIM-ENABLE
;     left: (identifier) @setting                               ; NVIM-ENABLE
;     (#match? @setting "^shell$")                              ; NVIM-ENABLE
;     right: (array                                             ; NVIM-ENABLE
;       (string_literal) @injection.language                    ; NVIM-ENABLE
;       (#gsub! injection.language "(%S+)%*" "%1")              ; NVIM-ENABLE
;       )))                                                     ; NVIM-ENABLE
;   (item                                                       ; NVIM-ENABLE
;     (assignment                                               ; NVIM-ENABLE
;       right: (expression                                      ; NVIM-ENABLE
;         (value                                                ; NVIM-ENABLE
;           (external_command                                   ; NVIM-ENABLE
;             body: (command_body) @injection.content))))))     ; NVIM-ENABLE

; ================ Handle shebangs  ================

(recipe_body                    ; NVIM-DISABLE
  (shebang) @injection.shebang  ; NVIM-DISABLE
  (recipe_line                  ; NVIM-DISABLE
    (text) @injection.content)) ; NVIM-DISABLE

; On NeoVIM, use gsub to extract the language from the shebang
;  (recipe_body                                             ; NVIM-ENABLE
;      (shebang) @injection.language                        ; NVIM-ENABLE
;      (recipe_line                                         ; NVIM-ENABLE
;          (text) @injection.content)                       ; NVIM-ENABLE
;      (#gsub! injection.language "/#!%*[\/ ](%S+)/" "%1")) ; NVIM-ENABLE


; ================ Default recipe body ================

; If there are no other matches, set defaults to bash 
(recipe_line
    (text) @injection.content
    (#set! injection.language "bash"))

(external_command
    (command_body) @injection.content
    (#set! injection.language "bash"))
