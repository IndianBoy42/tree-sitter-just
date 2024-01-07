; This query specifies how nested languages are handled

((comment) @injection.content
  (#set! injection.language "comment"))


; FIXME: read default from shebang
(recipe_line
    (text) @injection.content
    (#set! injection.language "bash"))

(external_command
    (command_body) @injection.content
    (#set! injection.language "bash"))

((regex_literal
    [
        (string_literal)
        (raw_string_literal)
    ] @injection.content)
    (#set! injection.language "regex"))
