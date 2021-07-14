module.exports = grammar({
  name: "just",

  externals: ($) => [$.INDENT, $.DEDENT, $.NEWLINE, $.LINE],

  rules: {
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
        seq("set", "dotenv-load", optional($.boolean), $.eol),
        seq("set", "export", optional($.boolean), $.eol),
        seq("set", "positional-arguments", optional($.boolean), $.eol),
        seq(
          "set",
          "shell",
          ":=",
          "[",
          $.string,
          repeat(seq(",", $.string)),
          optional(","),
          "]",
          $.eol
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
          $.expression,
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
      prec.left(
        0,
        choice(
          seq($.NAME, "(", optional($.sequence), ")"),
          seq($.BACKTICK),
          seq($.INDENTED_BACKTICK),
          seq($.NAME),
          seq($.string),
          seq("(", $.expression, ")")
        )
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

    // recipe        : '@'? NAME parameter* variadic_parameters? ':' dependency* body?
    recipe: ($) =>
      prec.left(
        0,
        seq(
          optional("@"),
          $.NAME,
          repeat($.parameter),
          optional($.variadic_parameters),
          ":",
          repeat($.dependency),
          optional($.body)
        )
      ),

    // parameter     : '$'? NAME
    //               | '$'? NAME '=' value
    parameter: ($) =>
      choice(
        seq(optional("$"), $.NAME),
        seq(optional("$"), $.NAME, "=", $.value)
      ),

    // variadic_parameters      : '*' parameter
    //               | '+' parameter
    variadic_parameters: ($) =>
      choice(seq("*", $.parameter), seq("+", $.parameter)),

    // dependency    : NAME
    //               | '(' NAME expression* ')'
    dependency: ($) =>
      choice($.NAME, seq("(", $.NAME, repeat($.expression), ")")),

    // body          : INDENT line+ DEDENT
    body: ($) => seq($.INDENT, repeat1($.line), $.DEDENT),

    // TODO: how to handle the LINE token
    // line          : LINE (TEXT | interpolation)+ NEWLINE
    //               | NEWLINE
    line: ($) =>
      choice(
        seq($.LINE, repeat1(choice($.text, $.interpolation)), $.NEWLINE),
        $.NEWLINE
      ),

    // TODO: separately parse bash/fish to a good enough extent here
    text: ($) => $.TEXT,

    // interpolation : '{{' expression '}}'
    interpolation: ($) => seq("{{", $.expression, "}}"),

    BACKTICK: (_) => /`[^`]*`/,
    INDENTED_BACKTICK: (_) => /```[^(```)]*```/,
    COMMENT: (_) => /\#([^!].*)?/, // /\#([^!].*)?$/, // FIXME: '$' Regex assertions not supported
    NAME: (_) => /[a-zA-Z_][a-zA-Z0-9_-]*/,
    RAW_STRING: (_) => /'[^']*'/,
    INDENTED_RAW_STRING: (_) => /'''[^(''')]*'''/,

    // TODO: IDK about these
    STRING: (_) => /"[^"]*"/, // # also processes \n \r \t \" \\ escapes
    INDENTED_STRING: (_) => /"""[^("""]*"""/, // # also processes \n \r \t \" \\ escapes
    TEXT: (_) => /[^\s]+/, //recipe text, only matches in a recipe body
  },
});
