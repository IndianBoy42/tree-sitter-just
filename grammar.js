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
  externals: ($) => [$._indent, $._dedent, $._newline],
  inline: (
    $,
  ) => [
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
    import: ($) => seq("import", optional("?"), $.string),

    // module        : 'mod' '?'? string?
    module: ($) =>
      seq(
        "mod",
        optional("?"),
        field("mod_name", $.identifier),
        optional($.string),
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
          field(
            "right",
            array($.string),
          ),
          $.eol,
        ),
      ),

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
        seq($.expression, "=~", $.expression),
        // verify whether this is valid
        $.expression,
      ),

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
          $.string,
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

    external_command: ($) =>
      choice(seq($.backticked), seq($.indented_backticked)),

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
        $._newline,
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

    shebang: ($) => seq(/\s*#!.*/, $._newline),

    // `# ...` comment
    comment: ($) => seq(/#.*/, $._newline),

    // notinterpolation: ($) => /[^{][^{]\S*/,
    notinterpolation: (_) => /[^\s{][^\s{]\S*/,

    // interpolation : '{{' expression '}}'
    interpolation: ($) => seq("{{", $.expression, "}}"),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    // string        : STRING
    //               | INDENTED_STRING
    //               | RAW_STRING
    //               | INDENTED_RAW_STRING
    string: ($) =>
      choice(
        $.basic_string,
        $.basic_string_indented,
        $.raw_string,
        $.raw_string_indented,
      ),

    raw_string: (_) => /'[^']*'/,
    raw_string_indented: (_) => seq("'''", repeat(/./), "'''"),
    basic_string: ($) =>
      seq('"', repeat(choice($.string_escape, /[^\\"]+/)), '"'),
    basic_string_indented: ($) =>
      seq('"""', repeat(choice($.string_escape, /[^\\"]+/)), '"""'),
    string_escape: (_) => /\\[nrt"\\]/,

    backticked: (_) => seq("`", repeat(/./), "`"),
    indented_backticked: (_) => seq("```", repeat(/./), "```"),

    text: (_) => /.+/, //recipe TEXT, only matches in a recipe body
    // text: (_) => /\S+/, //recipe TEXT, only matches in a recipe body
  },
});
