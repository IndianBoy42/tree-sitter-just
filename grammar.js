// Main grammar for justfiles

const ESCAPE_SEQUENCE = token(/\\[nrt"\\]/);

// Comma separated list with at least one item
function comma_sep1(item) {
  return seq(item, repeat(seq(",", item)));
}

// Create an array with the given item as contents
function make_array(item) {
  const array_item = field("array_item", item);
  return field(
    "array",
    seq(
      "[",
      field(
        "contents",
        optional(seq(comma_sep1(array_item), optional(array_item))),
      ),
      "]",
    ),
  );
}

module.exports = grammar({
  name: "just",
  externals: (
    $,
  ) => [
    $._indent,
    $._dedent,
    $._newline,
    $._string_start,
    $._string_end,
    $._content_component,
    $._raw_string_start,
    $._raw_string_end,
    $._command_start,
    $._command_end,
    $._interp_start,
    $._interp_end,
  ],
  inline: (
    $,
  ) => [
    $._string,
    $._string_indented,
    $._raw_string_indented,
    $._expression_braced,
    $._expression_recurse,
  ],
  word: ($) => $.identifier,

  rules: {
    // justfile      : item* EOF
    source_file: ($) => seq(optional($.shebang), repeat($.item)),

    // item          : recipe
    //               | alias
    //               | assignment
    //               | export
    //               | import
    //               | module
    //               | setting
    //               | eol
    item: ($) =>
      choice(
        $.recipe,
        $.alias,
        $.assignment,
        $.export,
        $.import,
        $.module,
        $.setting,
        $.eol,
      ),

    // eol           : NEWLINE
    //               | COMMENT NEWLINE
    eol: ($) => choice($._newline, $.comment),

    // alias         : 'alias' NAME ':=' NAME
    alias: ($) =>
      seq(
        "alias",
        field("left", $.identifier),
        ":=",
        field("right", $.identifier),
      ),

    // assignment    : NAME ':=' expression eol
    assignment: ($) =>
      seq(
        field("left", $.identifier),
        ":=",
        field("right", $.expression),
        $.eol,
      ),

    // export        : 'export' assignment
    export: ($) => seq("export", $.assignment),

    // import        : 'import' '?'? string?
    import: ($) => seq("import", optional("?"), $._string),

    // module        : 'mod' '?'? string?
    module: ($) =>
      seq(
        "mod",
        optional("?"),
        field("mod_name", $.identifier),
        optional($._string),
      ),

    // setting       : 'set' 'dotenv-load' boolean?
    //               | 'set' 'export' boolean?
    //               | 'set' 'positional-arguments' boolean?
    //               | 'set' 'shell' ':=' '[' string (',' string)* ','? ']'
    setting: ($) =>
      choice(
        seq(
          "set",
          field("left", $.identifier),
          optional(
            seq(":=", field("right", choice($.boolean, $._string, $.array))),
          ),
          $.eol,
        ),
      ),

    // Our only use of arrays (setting) only accepts strings. We may want to figure
    // out how to better reuse `array` while specifying a type.
    array: ($) => make_array($._string),

    // boolean       : ':=' ('true' | 'false')
    boolean: (_) => choice("true", "false"),

    // expression    : 'if' condition '{' expression '}' 'else' '{' expression '}'
    //               | value '/' expression
    //               | value '+' expression
    //               | value
    expression: ($) => seq(optional("/"), $._expression_inner),

    _expression_inner: ($) =>
      choice(
        $.if_expression,
        prec.left(2, seq($._expression_recurse, "+", $._expression_recurse)),
        prec.left(1, seq($._expression_recurse, "/", $._expression_recurse)),
        $.value,
      ),

    // We can't mark `_expression_inner` inline because it causes an infinite
    // loop at generation, so we just alias it.
    _expression_recurse: ($) => alias($._expression_inner, "expression"),

    if_expression: ($) =>
      seq(
        "if",
        $.condition,
        $._braced_expr,
        repeat(seq("else", "if", $.condition, $._braced_expr)),
        optional(seq("else", $._braced_expr)),
      ),

    _braced_expr: ($) => seq("{", field("braced_body", $.expression), "}"),

    // condition     : expression '==' expression
    //               | expression '!=' expression
    //               | expression '=~' expression
    condition: ($) =>
      choice(
        seq($.expression, "==", $.expression),
        seq($.expression, "!=", $.expression),
        seq($.expression, "=~", choice($.regex_literal, $.expression)),
        $.expression,
      ),

    // Capture this special for injections
    regex_literal: ($) => prec(4, $._string),

    // value         : NAME '(' sequence? ')'
    //               | BACKTICK
    //               | INDENTED_BACKTICK
    //               | NAME
    //               | string
    //               | '(' expression ')'
    value: ($) =>
      prec.left(
        choice(
          $.function_call,
          $.external_command,
          $.identifier,
          $._string,
          seq("(", $.expression, ")"),
        ),
      ),

    function_call: ($) =>
      seq(
        field("name", $.identifier),
        "(",
        field("arguments", optional($.sequence)),
        ")",
      ),

    // sequence      : expression ',' sequence
    //               | expression ','?
    sequence: ($) => comma_sep1($.expression),

    attribute: ($) =>
      seq(
        "[",
        field("contents", comma_sep1(field("attr_item", $.identifier))),
        "]",
        $.eol,
      ),

    // A complete recipe
    // recipe        : attribute? '@'? NAME parameter* variadic_parameters? ':' dependency* body?
    recipe: ($) =>
      seq(
        repeat($.attribute),
        $.recipe_header,
        $.eol,
        optional($.recipe_body),
      ),

    recipe_header: ($) =>
      seq(
        optional("@"),
        field("recipe_name", $.identifier),
        optional($.parameters),
        ":",
        optional($.dependencies),
      ),

    parameters: ($) =>
      seq(repeat($.parameter), choice($.parameter, $.variadic_parameter)),

    // FIXME: do we really have leading `$`s here?`
    // parameter     : '$'? NAME
    //               | '$'? NAME '=' value
    parameter: ($) =>
      seq(
        optional("$"),
        field("param", $.identifier),
        optional(seq("=", field("default", $.value))),
      ),

    // variadic_parameters      : '*' parameter
    //               | '+' parameter
    variadic_parameter: ($) =>
      seq(field("kleene", choice("*", "+")), $.parameter),

    dependencies: ($) =>
      prec.left(seq($.dependency, repeat(seq(optional("&&"), $.dependencies)))),

    // dependency    : NAME
    //               | '(' NAME expression* ')'
    dependency: ($) =>
      choice(
        field("recipe", $.identifier),
        $.dependency_expression,
      ),

    // contents of `(recipe expression)`
    dependency_expression: ($) =>
      seq(
        "(",
        field("recipe", $.identifier),
        repeat(field("expression", $.expression)),
        ")",
      ),

    // body          : INDENT line+ DEDENT
    recipe_body: ($) =>
      seq(
        $._indent,
        field("contents", seq(optional($.shebang), repeat($.recipe_line))),
        $._dedent,
      ),

    recipe_line: ($) =>
      seq(
        optional($.recipe_line_prefix),
        repeat(choice($.text, $.interpolation)),
        $._newline,
      ),

    recipe_line_prefix: (_) => choice("@-", "-@", "@", "-"),

    shebang: ($) => prec.left(seq(/#!.*/, optional($._newline))),

    // `# ...` comment
    comment: ($) => seq(/#.*/, $._newline),

    // interpolation : '{{' expression '}}'
    interpolation: ($) => seq("{{", $.expression, "}}"),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    // string        : STRING
    //               | INDENTED_STRING
    //               | RAW_STRING
    //               | INDENTED_RAW_STRING
    _string: ($) => choice($.raw_string_literal, $.string_literal),

    escape_sequence: (_) => ESCAPE_SEQUENCE,
    string_literal: ($) =>
      seq(
        field("open", alias($._string_start, '("|""")')),
        field("body", repeat(choice($._content_component, $.escape_sequence))),
        field("close", alias($._string_end, '("|""")')),
      ),

    raw_string_literal: ($) =>
      seq(
        field("open", alias($._raw_string_start, "('|''')")),
        field("body", optional($._content_component)),
        field("close", alias($._raw_string_end, "('|''')")),
      ),

    external_command: ($) =>
      seq(
        field("open", alias($._command_start, "(`|```)")),
        field("body", repeat(choice(prec(1, $.interpolation), $.command_body))),
        field("close", alias($._command_end, "(`|```)")),
      ),

    command_body: ($) => $._content_component,

    text: (_) => /.+/, //recipe TEXT, only matches in a recipe body
  },
});
