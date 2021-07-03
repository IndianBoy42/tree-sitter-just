module.exports = grammar({
  name: "just",

  rules: {
    // TODO: add the actual grammar rules
    // justfile      : item* EOF
    source_file: ($) => repeat($.item),

    // item          : recipe
    //               | alias
    //               | assignment
    //               | export
    //               | setting
    //               | eol
    item: ($) =>
      choice($.recipe, $.alias, $.assignment, $.export, $.setting, $.eol),

    // eol           : NEWLINE
    //               | COMMENT NEWLINE
    eol: ($) => choice($.NEWLINE, seq($.COMMENT, $.NEWLINE)),

    // alias         : 'alias' NAME ':=' NAME
    alias: ($) => seq("alias", $.NAME, ":=", $.NAME),

    // assignment    : NAME ':=' expression eol
    assignment: ($) => seq($.NAME, ":=", $.expression, $.eol),

    // export        : 'export' assignment
    export: ($) => seq("export", $.assignment),

    // setting       : 'set' 'dotenv-load' boolean?
    //               | 'set' 'export' boolean?
    //               | 'set' 'positional-arguments' boolean?
    //               | 'set' 'shell' ':=' '[' string (',' string)* ','? ']'
    setting: ($) =>
      choice(
        seq("set", "dotenv-load", optional($.boolean)),
        seq("set", "export", optional($.boolean)),
        seq("set", "positional-arguments", optional($.boolean)),
        seq(
          "set",
          "shell",
          ":=",
          "[",
          $.string,
          repeat(seq(",", $.string)),
          optional(","),
          "]"
        )
      ),

    // boolean       : ':=' ('true' | 'false')
    boolean: ($) => seq(":=", choice("true", "false")),

    // expression    : 'if' condition '{' expression '}' 'else' '{' expression '}'
    //               | value '+' expression
    //               | value
    expression: ($) =>
      choice(
        seq(
          "if",
          $.condition,
          "{",
          $.expression,
          "}",
          "else",
          "{",
          "expression",
          "}"
        ),
        seq($.value, "+", $.expression),
        $.value
      ),

    // condition     : expression '==' expression
    //               | expression '!=' expression
    condition: ($) =>
      choice(
        seq($.expression, "==", $.expression),
        seq($.expression, "!=", $.expression)
      ),

    // value         : NAME '(' sequence? ')'
    //               | BACKTICK
    //               | INDENTED_BACKTICK
    //               | NAME
    //               | string
    //               | '(' expression ')'
    value: ($) =>
      choice(
        seq($.NAME, "(", optional($.sequence), ")"),
        seq($.BACKTICK),
        seq($.INDENTED_BACKTICK),
        seq($.NAME),
        seq($.string),
        seq("(", $.expression, ")")
      ),

    // string        : STRING
    //               | INDENTED_STRING
    //               | RAW_STRING
    //               | INDENTED_RAW_STRING
    string: ($) =>
      choice($.STRING, $.INDENTED_STRING, $.RAW_STRING, $.INDENTED_RAW_STRING),

    // sequence      : expression ',' sequence
    //               | expression ','?
    sequence: ($) =>
      choice(
        seq($.expression, ",", $.sequence),
        seq($.expression, optional(","))
      ),

    // recipe        : '@'? NAME parameter* variadic? ':' dependency* body?
    recipe: ($) =>
      seq(
        optional("@"),
        $.NAME,
        repeat($.parameter),
        optional($.variadic),
        ":",
        repeat($.dependency),
        optional($.body)
      ),

    // parameter     : '$'? NAME
    //               | '$'? NAME '=' value
    parameter: ($) =>
      choice(
        seq(optional("$"), $.NAME),
        seq(optional("$"), $.NAME, "=", $.value)
      ),

    // variadic      : '*' parameter
    //               | '+' parameter
    variadic: ($) => choice(seq("*", $.parameter), seq("+", $.parameter)),

    // dependency    : NAME
    //               | '(' NAME expression* ')'
    dependency: ($) =>
      choice($.NAME, seq("(", $.NAME, repeat($.expression), ")")),

    // body          : INDENT line+ DEDENT
    body: ($) => seq($.INDENT, repeat1($.line), $.DEDENT),

    // line          : LINE (TEXT | interpolation)+ NEWLINE
    //               | NEWLINE
    line: ($) =>
      choice(
        seq($.LINE, repeat1(choice($.TEXT, $.interpolation)), $.NEWLINE),
        $.NEWLINE
      ),

    // interpolation : '{{' expression '}}'
    interpolation: ($) => seq("{{", $.expression, "}}"),

    BACKTICK: ($) => /`[^`]*`/,
    INDENTED_BACKTICK: ($) => /```[^(```)]*```/,
    COMMENT: ($) => /\#([^!].*)?/, // /\#([^!].*)?$/, // Problem: '$' Regex assertions not supported
    INDENT: ($) => /\s\s\s\s/,
    NAME: ($) => /[a-zA-Z_][a-zA-Z0-9_-]*/,
    NEWLINE: ($) => /\n|\r\n/,
    RAW_STRING: ($) => /'[^']*'/,
    INDENTED_RAW_STRING: ($) => /'''[^(''')]*'''/,

    // TODO: IDK about these
    DEDENT: ($) => /\s\s\s\s/,
    LINE: ($) => /\s/,
    STRING: ($) => /"[^"]*"/, // # also processes \n \r \t \" \\ escapes
    INDENTED_STRING: ($) => /"""[^("""]*"""/, // # also processes \n \r \t \" \\ escapes
    TEXT: ($) => /[a-zA-Z_][a-zA-Z0-9_-]*/, //recipe text, only matches in a recipe body
  },
});
