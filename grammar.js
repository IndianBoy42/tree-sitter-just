/**
 * @file Justfile grammar for tree-sitter
 * @author Anshuman Medhi <amedhi@connect.ust.uk>
 * @author Trevor Gross <tmgross@umich.edu>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license Apache-2.0
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const ESCAPE_SEQUENCE = token(/\\([nrt"\\]|(\r?\n))/);

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 */
function comma_sep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to match an array-like structure filled with `item`
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {Rule}
 */
function array(rule) {
  const item = field("element", rule);
  return field(
    "array",
    seq(
      "[",
      optional(field("content", seq(comma_sep1(item), optional(item)))),
      "]",
    ),
  );
}

module.exports = grammar({
  name: "just",

  externals: ($) => [
    $._indent,
    $._dedent,
    $._newline,
    $.text,
    $.error_recovery,
  ],

  // Allow comments, backslash-escaped newlines (with optional trailing whitespace),
  // and whitespace anywhere
  extras: ($) => [$.comment, /\\(\n|\r\n)\s*/, /\s/],

  inline: ($) => [
    $._string,
    $._string_indented,
    $._raw_string_indented,
    $._expression_braced,
    $._expression_recurse,
  ],
  word: ($) => $.identifier,

  rules: {
    // justfile      : item* EOF
    source_file: ($) =>
      seq(optional(seq($.shebang, $._newline)), repeat($._item)),

    // item          : recipe
    //               | alias
    //               | assignment
    //               | export
    //               | import
    //               | module
    //               | setting
    _item: ($) =>
      choice(
        $.recipe,
        $.alias,
        $.assignment,
        $.export,
        $.import,
        $.module,
        $.setting,
      ),

    // alias         : 'alias' NAME ':=' NAME
    alias: ($) =>
      seq(
        "alias",
        field("left", $.identifier),
        ":=",
        field("right", $.identifier),
      ),
    // assignment    : NAME ':=' expression _eol
    assignment: ($) =>
      seq(
        field("left", $.identifier),
        ":=",
        field("right", $.expression),
        $._newline,
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
        field("name", $.identifier),
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
            optional(seq(":=", choice($.boolean, $.string, array($.string)))),
          ),
          $._newline,
        ),
        seq("set", "shell", ":=", field("right", array($.string)), $._newline),
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
        field("consequence", $._braced_expr),
        repeat(field("alternative", $.else_if_clause)),
        optional(field("alternative", $.else_clause)),
      ),

    else_if_clause: ($) => seq("else", "if", $.condition, $._braced_expr),

    else_clause: ($) => seq("else", $._braced_expr),

    _braced_expr: ($) => seq("{", field("body", $.expression), "}"),

    // condition     : expression '==' expression
    //               | expression '!=' expression
    //               | expression '=~' expression
    condition: ($) =>
      choice(
        seq($.expression, "==", $.expression),
        seq($.expression, "!=", $.expression),
        seq($.expression, "=~", choice($.regex_literal, $.expression)),
        // verify whether this is valid
        $.expression,
      ),

    // Capture this special for injections
    regex_literal: ($) => prec(1, $.string),

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
          $.numeric_error,
          seq("(", $.expression, ")"),
        ),
      ),

    function_call: ($) =>
      seq(
        field("name", $.identifier),
        "(",
        optional(field("arguments", $.sequence)),
        ")",
      ),

    external_command: ($) =>
      choice(seq($._backticked), seq($._indented_backticked)),

    // sequence      : expression ',' sequence
    //               | expression ','?
    sequence: ($) => comma_sep1($.expression),

    attribute: ($) => seq("[", comma_sep1($.identifier), "]", $._newline),

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
        field("name", $.identifier),
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
        field("name", $.identifier),
        optional(seq("=", field("default", $.value))),
      ),

    // variadic_parameters      : '*' parameter
    //               | '+' parameter
    variadic_parameter: ($) =>
      seq(field("kleene", choice("*", "+")), $.parameter),

    dependencies: ($) => repeat1(seq(optional("&&"), $.dependency)),

    // dependency    : NAME
    //               | '(' NAME expression* ')'
    dependency: ($) =>
      choice(field("name", $.identifier), $.dependency_expression),

    // contents of `(recipe expression)`
    dependency_expression: ($) =>
      seq("(", field("name", $.identifier), repeat($.expression), ")"),

    // body          : INDENT line+ DEDENT
    recipe_body: ($) =>
      seq(
        $._indent,
        optional(seq($.shebang, $._newline)),
        repeat(choice(seq($.recipe_line, $._newline), $._newline)),
        $._dedent,
      ),

    recipe_line: ($) =>
      seq(
        optional($.recipe_line_prefix),
        repeat1(choice($.text, $.interpolation)),
      ),

    recipe_line_prefix: (_) => choice("@-", "-@", "@", "-"),

    _shebang_flag: (_) => /--?\w*/,

    shebang: ($) =>
      seq(
        "#!",
        /.*\//,
        optional(seq("env ", repeat($._shebang_flag))),
        // defer dilemma: python3 => python, but json5 => json5
        alias($.identifier, $.language),
        repeat($._shebang_flag),
      ),

    // string        : STRING
    //               | INDENTED_STRING
    //               | RAW_STRING
    //               | INDENTED_RAW_STRING
    string: ($) =>
      choice(
        $._string_indented,
        $._raw_string_indented,
        $._string,
        // _raw_string, can't be written as a separate inline for osm reason
        /'[^']*'/,
      ),

    _raw_string_indented: (_) => seq("'''", repeat(/./), "'''"),
    _string: ($) => seq('"', repeat(choice($.escape_sequence, /[^\\"]+/)), '"'),
    _string_indented: ($) =>
      seq('"""', repeat(choice($.escape_sequence, /[^\\"]+/)), '"""'),

    escape_sequence: (_) => ESCAPE_SEQUENCE,

    _backticked: ($) => seq("`", optional($.command_body), "`"),
    _indented_backticked: ($) => seq("```", optional($.command_body), "```"),

    command_body: ($) => repeat1(choice($.interpolation, /./)),

    // interpolation : '{{' expression '}}'
    interpolation: ($) => seq("{{", $.expression, "}}"),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    // Numbers aren't allowed as values, but we capture them anyway as errors so
    // they don't mess up the whole syntax
    numeric_error: (_) => /(\d+\.\d*|\d+)/,

    // `# ...` comment
    comment: (_) => token(prec(-1, /#.*/)),
  },
});
