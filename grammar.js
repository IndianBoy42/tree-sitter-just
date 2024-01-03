// Main grammar for justfiles

// Comma separated list with at least one item
function comma_sep1(item) {
  return seq(item, repeat(seq(",", item)));
}

// Create an array with the given item as contents
function array(item) {
  const array_item = field("array_item", item);
  return field(
    "array",
    seq(
      "[",
      optional(seq(comma_sep1(array_item), optional(array_item))),
      "]",
    ),
  );
}

module.exports = grammar({
  name: "just",

  externals: ($) => [$.INDENT, $.DEDENT, $.NEWLINE, $.LINE],

  rules: {
    // justfile      : item* EOF
    source_file: ($) => repeat($.item),
    // $.expression is not really a valid Justfile,
    // but we do this so that we can parse just expression using this parser.
    // This is needed for injecting inside interpolations

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
    eol: ($) => choice($.NEWLINE, $.comment),

    // alias         : 'alias' NAME ':=' NAME
    alias: ($) =>
      seq("alias", field("left", $.NAME), ":=", field("right", $.NAME)),

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
        seq(
          "set",
          field("name", $.NAME),
          field(
            "right",
            optional(
              seq(":=", choice($.boolean, $.string, array($.string))),
            ),
          ),
          $.eol,
        ),
        seq(
          "set",
          "shell",
          ":=",
          array($.string),
          $.eol,
        ),
      ),

    // boolean       : ':=' ('true' | 'false')
    boolean: (_) => choice("true", "false"),

    // expression    : 'if' condition '{' expression '}' 'else' '{' expression '}'
    //               | value '/' expression
    //               | value '+' expression
    //               | value
    expression: ($) =>
      choice(
        seq(
          "if",
          $.condition,
          "{",
          field("if", $.expression),
          "}",
          "else",
          "{",
          field("else", $.expression),
          "}",
        ),
        seq($.value, "+", $.expression),
        seq($.value, "/", $.expression),
        $.value,
      ),

    // condition     : expression '==' expression
    //               | expression '!=' expression
    //               | expression '=~' expression
    condition: ($) =>
      choice(
        seq($.expression, "==", $.expression),
        seq($.expression, "!=", $.expression),
        seq($.expression, "=~", $.expression),
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
        choice($.call, $.cmd, $.NAME, $.string, seq("(", $.expression, ")")),
      ),

    call: ($) => seq($.NAME, "(", optional($.sequence), ")"),

    cmd: ($) => choice(seq($.BACKTICK), seq($.INDENTED_BACKTICK)),

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
        seq($.expression, optional(",")),
      ),

    attribute: ($) => seq("[", $.NAME, "]", $.eol),

    // recipe        : attribute? '@'? NAME parameter* variadic_parameters? ':' dependency* body?
    recipe: ($) =>
      seq(optional($.attribute), $.recipe_header, $.NEWLINE, optional($.body)),

    recipe_header: ($) =>
      seq(
        optional("@"),
        $.NAME,
        optional($.parameters),
        ":",
        optional(" "),
        optional($.dependencies),
      ),

    parameters: ($) =>
      seq(repeat1($.parameter), optional($.variadic_parameters)),

    // parameter     : '$'? NAME
    //               | '$'? NAME '=' value
    parameter: ($) =>
      choice(
        seq(optional("$"), $.NAME),
        seq(optional("$"), $.NAME, "=", $.value),
      ),

    // variadic_parameters      : '*' parameter
    //               | '+' parameter
    variadic_parameters: ($) =>
      choice(seq("*", $.parameter), seq("+", $.parameter)),

    dependencies: ($) => repeat1($.dependency),

    // dependency    : NAME
    //               | '(' NAME expression* ')'
    dependency: ($) => choice($.NAME, seq("(", $.depcall, ")")),

    depcall: ($) => seq($.NAME, repeat($.expression)),

    // body          : INDENT line+ DEDENT
    body: ($) =>
      seq(
        $.INDENT,
        choice($.shebang_recipe, optional($.recipe_body)),
        $.DEDENT,
      ),
    // seq($.INDENT, $.recipebody, $.DEDENT),

    shebang_recipe: ($) => seq($.shebang, $.shebang_body),
    shebang_body: ($) => repeat1($.line),

    shebang: ($) =>
      seq(
        "#!",
        choice(
          seq(/.*\//, field("interpreter", $.TEXT)),
          seq("/usr/bin/env", field("interpreter", $.TEXT)),
        ),
        $.NEWLINE,
      ),

    recipe_body: ($) => repeat1($.line),

    line: ($) => choice($.comment, $.recipeline),
    // line: ($) => choice($.comment, $.recipeline, $.shebang),

    // FIXME: detecting interpolation doesn't work
    recipeline: ($) =>
      seq(
        $.notcomment,
        // repeat(choice($.interpolation, $.notinterpolation)),
        repeat(choice($.interpolation, $.TEXT)),
        $.NEWLINE,
      ),
    // notcomment: ($) => /[^#\s{]\S*/,
    notcomment: (_) => /[^#\s]\S*/,
    comment: ($) => seq(/#[^!].*/, /.*/, $.NEWLINE),

    // notinterpolation: ($) => /[^{][^{]\S*/,
    notinterpolation: (_) => /[^\s{][^\s{]\S*/,

    // interpolation : '{{' expression '}}'
    interpolation: ($) => seq("{{", $.expression, "}}"),

    BACKTICK: (_) => /`[^`]*`/,
    INDENTED_BACKTICK: (_) => /```[^(```)]*```/,
    // COMMENT: (_) => /\#([^!].*)?/, // /\#([^!].*)?$/, // FIXME: '$' Regex assertions not supported, could cause misparses
    NAME: (_) => /[a-zA-Z_][a-zA-Z0-9_-]*/,
    RAW_STRING: (_) => /'[^']*'/,
    INDENTED_RAW_STRING: (_) => /'''[^(''')]*'''/,

    STRING: (_) => /"[^"]*"/, // # also processes \n \r \t \" \\ escapes
    INDENTED_STRING: (_) => /"""[^("""]*"""/, // # also processes \n \r \t \" \\ escapes
    TEXT: (_) => /\S+/, //recipe TEXT, only matches in a recipe body
  },
});
