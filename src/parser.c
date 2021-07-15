#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_alias = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_export = 5,
  anon_sym_set = 6,
  anon_sym_dotenv_DASHload = 7,
  anon_sym_positional_DASHarguments = 8,
  anon_sym_shell = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  anon_sym_if = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_else = 18,
  anon_sym_PLUS = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_AT = 24,
  anon_sym_COLON = 25,
  anon_sym_ = 26,
  anon_sym_DOLLAR = 27,
  anon_sym_EQ = 28,
  anon_sym_STAR = 29,
  anon_sym_POUND_BANG = 30,
  anon_sym_LBRACE_LBRACE = 31,
  anon_sym_RBRACE_RBRACE = 32,
  sym_BACKTICK = 33,
  sym_INDENTED_BACKTICK = 34,
  sym_NAME = 35,
  sym_RAW_STRING = 36,
  sym_INDENTED_RAW_STRING = 37,
  sym_STRING = 38,
  sym_INDENTED_STRING = 39,
  sym_TEXT = 40,
  sym_INDENT = 41,
  sym_DEDENT = 42,
  sym_NEWLINE = 43,
  sym_LINE = 44,
  sym_source_file = 45,
  sym_item = 46,
  sym_eol = 47,
  sym_comment = 48,
  sym_alias = 49,
  sym_assignment = 50,
  sym_export = 51,
  sym_setting = 52,
  sym_boolean = 53,
  sym_expression = 54,
  sym_condition = 55,
  sym_value = 56,
  sym_string = 57,
  sym_sequence = 58,
  sym_recipe = 59,
  sym_parameter = 60,
  sym_variadic_parameters = 61,
  sym_dependency = 62,
  sym_body = 63,
  sym_shebang = 64,
  sym_line = 65,
  sym_text = 66,
  sym_interpolation = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_setting_repeat1 = 69,
  aux_sym_recipe_repeat1 = 70,
  aux_sym_recipe_repeat2 = 71,
  aux_sym_dependency_repeat1 = 72,
  aux_sym_body_repeat1 = 73,
  aux_sym_line_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [anon_sym_set] = "set",
  [anon_sym_dotenv_DASHload] = "dotenv-load",
  [anon_sym_positional_DASHarguments] = "positional-arguments",
  [anon_sym_shell] = "shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_BACKTICK] = "BACKTICK",
  [sym_INDENTED_BACKTICK] = "INDENTED_BACKTICK",
  [sym_NAME] = "NAME",
  [sym_RAW_STRING] = "RAW_STRING",
  [sym_INDENTED_RAW_STRING] = "INDENTED_RAW_STRING",
  [sym_STRING] = "STRING",
  [sym_INDENTED_STRING] = "INDENTED_STRING",
  [sym_TEXT] = "TEXT",
  [sym_INDENT] = "INDENT",
  [sym_DEDENT] = "DEDENT",
  [sym_NEWLINE] = "NEWLINE",
  [sym_LINE] = "LINE",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_eol] = "eol",
  [sym_comment] = "comment",
  [sym_alias] = "alias",
  [sym_assignment] = "assignment",
  [sym_export] = "export",
  [sym_setting] = "setting",
  [sym_boolean] = "boolean",
  [sym_expression] = "expression",
  [sym_condition] = "condition",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_sequence] = "sequence",
  [sym_recipe] = "recipe",
  [sym_parameter] = "parameter",
  [sym_variadic_parameters] = "variadic_parameters",
  [sym_dependency] = "dependency",
  [sym_body] = "body",
  [sym_shebang] = "shebang",
  [sym_line] = "line",
  [sym_text] = "text",
  [sym_interpolation] = "interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_setting_repeat1] = "setting_repeat1",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_recipe_repeat2] = "recipe_repeat2",
  [aux_sym_dependency_repeat1] = "dependency_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_dotenv_DASHload] = anon_sym_dotenv_DASHload,
  [anon_sym_positional_DASHarguments] = anon_sym_positional_DASHarguments,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_BACKTICK] = sym_BACKTICK,
  [sym_INDENTED_BACKTICK] = sym_INDENTED_BACKTICK,
  [sym_NAME] = sym_NAME,
  [sym_RAW_STRING] = sym_RAW_STRING,
  [sym_INDENTED_RAW_STRING] = sym_INDENTED_RAW_STRING,
  [sym_STRING] = sym_STRING,
  [sym_INDENTED_STRING] = sym_INDENTED_STRING,
  [sym_TEXT] = sym_TEXT,
  [sym_INDENT] = sym_INDENT,
  [sym_DEDENT] = sym_DEDENT,
  [sym_NEWLINE] = sym_NEWLINE,
  [sym_LINE] = sym_LINE,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_eol] = sym_eol,
  [sym_comment] = sym_comment,
  [sym_alias] = sym_alias,
  [sym_assignment] = sym_assignment,
  [sym_export] = sym_export,
  [sym_setting] = sym_setting,
  [sym_boolean] = sym_boolean,
  [sym_expression] = sym_expression,
  [sym_condition] = sym_condition,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_sequence] = sym_sequence,
  [sym_recipe] = sym_recipe,
  [sym_parameter] = sym_parameter,
  [sym_variadic_parameters] = sym_variadic_parameters,
  [sym_dependency] = sym_dependency,
  [sym_body] = sym_body,
  [sym_shebang] = sym_shebang,
  [sym_line] = sym_line,
  [sym_text] = sym_text,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_setting_repeat1] = aux_sym_setting_repeat1,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_recipe_repeat2] = aux_sym_recipe_repeat2,
  [aux_sym_dependency_repeat1] = aux_sym_dependency_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv_DASHload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positional_DASHarguments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_BACKTICK] = {
    .visible = true,
    .named = true,
  },
  [sym_INDENTED_BACKTICK] = {
    .visible = true,
    .named = true,
  },
  [sym_NAME] = {
    .visible = true,
    .named = true,
  },
  [sym_RAW_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_INDENTED_RAW_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_INDENTED_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_TEXT] = {
    .visible = true,
    .named = true,
  },
  [sym_INDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_DEDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_NEWLINE] = {
    .visible = true,
    .named = true,
  },
  [sym_LINE] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_eol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_variadic_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(181);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(120);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(122);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 71:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 73:
      if (lookahead == '}') ADVANCE(119);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'v') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 74, .external_lex_state = 2},
  [2] = {.lex_state = 74, .external_lex_state = 2},
  [3] = {.lex_state = 74, .external_lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 74, .external_lex_state = 3},
  [44] = {.lex_state = 74, .external_lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 10, .external_lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 74, .external_lex_state = 3},
  [49] = {.lex_state = 74, .external_lex_state = 3},
  [50] = {.lex_state = 74, .external_lex_state = 3},
  [51] = {.lex_state = 74, .external_lex_state = 3},
  [52] = {.lex_state = 72, .external_lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 72, .external_lex_state = 4},
  [55] = {.lex_state = 72, .external_lex_state = 4},
  [56] = {.lex_state = 74, .external_lex_state = 2},
  [57] = {.lex_state = 74, .external_lex_state = 2},
  [58] = {.lex_state = 74, .external_lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 74, .external_lex_state = 2},
  [61] = {.lex_state = 72, .external_lex_state = 2},
  [62] = {.lex_state = 74, .external_lex_state = 2},
  [63] = {.lex_state = 74, .external_lex_state = 2},
  [64] = {.lex_state = 74, .external_lex_state = 2},
  [65] = {.lex_state = 74, .external_lex_state = 2},
  [66] = {.lex_state = 74, .external_lex_state = 2},
  [67] = {.lex_state = 74, .external_lex_state = 2},
  [68] = {.lex_state = 74, .external_lex_state = 2},
  [69] = {.lex_state = 74, .external_lex_state = 2},
  [70] = {.lex_state = 74, .external_lex_state = 2},
  [71] = {.lex_state = 74, .external_lex_state = 2},
  [72] = {.lex_state = 74, .external_lex_state = 2},
  [73] = {.lex_state = 74, .external_lex_state = 2},
  [74] = {.lex_state = 74, .external_lex_state = 2},
  [75] = {.lex_state = 74, .external_lex_state = 2},
  [76] = {.lex_state = 74, .external_lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 74},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 72, .external_lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 72, .external_lex_state = 2},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 2, .external_lex_state = 2},
  [93] = {.lex_state = 2, .external_lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2, .external_lex_state = 2},
  [97] = {.lex_state = 2, .external_lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2, .external_lex_state = 2},
  [100] = {.lex_state = 2, .external_lex_state = 2},
  [101] = {.lex_state = 2, .external_lex_state = 2},
  [102] = {.lex_state = 2, .external_lex_state = 2},
  [103] = {.lex_state = 2, .external_lex_state = 2},
  [104] = {.lex_state = 2, .external_lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 72, .external_lex_state = 4},
  [107] = {.lex_state = 72, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 30},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 2, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2, .external_lex_state = 2},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 72, .external_lex_state = 2},
  [126] = {.lex_state = 72, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 72, .external_lex_state = 2},
  [130] = {.lex_state = 2, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 74},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 30},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 77},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 74},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 74},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 74},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 77},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 30},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 74},
  [173] = {.lex_state = 74},
  [174] = {.lex_state = 30},
  [175] = {.lex_state = 30},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 74},
  [181] = {.lex_state = 74},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 2},
};

enum {
  ts_external_token_INDENT = 0,
  ts_external_token_DEDENT = 1,
  ts_external_token_NEWLINE = 2,
  ts_external_token_LINE = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_INDENT] = sym_INDENT,
  [ts_external_token_DEDENT] = sym_DEDENT,
  [ts_external_token_NEWLINE] = sym_NEWLINE,
  [ts_external_token_LINE] = sym_LINE,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_INDENT] = true,
    [ts_external_token_DEDENT] = true,
    [ts_external_token_NEWLINE] = true,
    [ts_external_token_LINE] = true,
  },
  [2] = {
    [ts_external_token_NEWLINE] = true,
  },
  [3] = {
    [ts_external_token_INDENT] = true,
    [ts_external_token_NEWLINE] = true,
  },
  [4] = {
    [ts_external_token_DEDENT] = true,
    [ts_external_token_NEWLINE] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_dotenv_DASHload] = ACTIONS(1),
    [anon_sym_positional_DASHarguments] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [sym_BACKTICK] = ACTIONS(1),
    [sym_INDENTED_BACKTICK] = ACTIONS(1),
    [sym_NAME] = ACTIONS(1),
    [sym_RAW_STRING] = ACTIONS(1),
    [sym_INDENTED_RAW_STRING] = ACTIONS(1),
    [sym_STRING] = ACTIONS(1),
    [sym_INDENTED_STRING] = ACTIONS(1),
    [sym_INDENT] = ACTIONS(1),
    [sym_DEDENT] = ACTIONS(1),
    [sym_NEWLINE] = ACTIONS(1),
    [sym_LINE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(178),
    [sym_item] = STATE(2),
    [sym_eol] = STATE(71),
    [sym_comment] = STATE(60),
    [sym_alias] = STATE(71),
    [sym_assignment] = STATE(71),
    [sym_export] = STATE(71),
    [sym_setting] = STATE(71),
    [sym_recipe] = STATE(71),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_NAME] = ACTIONS(15),
    [sym_NEWLINE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_alias,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_NAME,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_comment,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(71), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [40] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(26), 1,
      anon_sym_alias,
    ACTIONS(29), 1,
      anon_sym_export,
    ACTIONS(32), 1,
      anon_sym_set,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(38), 1,
      sym_NAME,
    ACTIONS(41), 1,
      sym_NEWLINE,
    STATE(60), 1,
      sym_comment,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(71), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [80] = 2,
    ACTIONS(46), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(44), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [100] = 2,
    ACTIONS(50), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(48), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [120] = 12,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    STATE(157), 1,
      sym_sequence,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [159] = 12,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    STATE(143), 1,
      sym_sequence,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [198] = 11,
    ACTIONS(70), 1,
      anon_sym_if,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      sym_BACKTICK,
    ACTIONS(81), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(84), 1,
      sym_NAME,
    STATE(24), 1,
      sym_string,
    STATE(42), 1,
      sym_value,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [235] = 11,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(24), 1,
      sym_string,
    STATE(42), 1,
      sym_value,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(11), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [272] = 12,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    STATE(166), 1,
      sym_sequence,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [311] = 11,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_string,
    STATE(42), 1,
      sym_value,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [348] = 12,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    STATE(141), 1,
      sym_sequence,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [387] = 11,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(135), 1,
      sym_expression,
    STATE(181), 1,
      sym_condition,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [423] = 11,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(135), 1,
      sym_expression,
    STATE(180), 1,
      sym_condition,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [459] = 11,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(135), 1,
      sym_expression,
    STATE(146), 1,
      sym_condition,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [495] = 2,
    ACTIONS(113), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(115), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [512] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(164), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [545] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(162), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [578] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(159), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [611] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(4), 1,
      sym_expression,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [644] = 1,
    ACTIONS(117), 12,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [659] = 10,
    ACTIONS(119), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_BACKTICK,
    ACTIONS(125), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(127), 1,
      sym_NAME,
    STATE(109), 1,
      sym_expression,
    STATE(116), 1,
      sym_string,
    STATE(127), 1,
      sym_value,
    ACTIONS(129), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(131), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [692] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(167), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [725] = 2,
    ACTIONS(133), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(135), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [742] = 10,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(24), 1,
      sym_string,
    STATE(133), 1,
      sym_value,
    STATE(154), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [775] = 10,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(24), 1,
      sym_string,
    STATE(133), 1,
      sym_value,
    STATE(155), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [808] = 2,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [825] = 2,
    ACTIONS(143), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(145), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [842] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(177), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [875] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(144), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [908] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(150), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [941] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(4), 1,
      sym_expression,
    STATE(24), 1,
      sym_string,
    STATE(42), 1,
      sym_value,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [974] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1007] = 2,
    ACTIONS(147), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1024] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(176), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1057] = 10,
    ACTIONS(119), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_BACKTICK,
    ACTIONS(125), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(127), 1,
      sym_NAME,
    STATE(116), 1,
      sym_string,
    STATE(127), 1,
      sym_value,
    STATE(134), 1,
      sym_expression,
    ACTIONS(129), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(131), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1090] = 10,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(62), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(80), 1,
      sym_value,
    STATE(145), 1,
      sym_expression,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1123] = 2,
    ACTIONS(133), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(135), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1139] = 1,
    ACTIONS(135), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1153] = 1,
    ACTIONS(115), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1167] = 1,
    ACTIONS(145), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1181] = 3,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(149), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(153), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1199] = 4,
    ACTIONS(159), 1,
      sym_INDENT,
    STATE(69), 1,
      sym_body,
    ACTIONS(155), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(157), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1218] = 4,
    ACTIONS(159), 1,
      sym_INDENT,
    STATE(68), 1,
      sym_body,
    ACTIONS(161), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(163), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1237] = 8,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(94), 1,
      sym_value,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1264] = 7,
    ACTIONS(167), 1,
      anon_sym_POUND_BANG,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      sym_TEXT,
    ACTIONS(173), 1,
      sym_NEWLINE,
    STATE(61), 1,
      sym_shebang,
    STATE(55), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(90), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1289] = 8,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(105), 1,
      sym_value,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1316] = 4,
    ACTIONS(159), 1,
      sym_INDENT,
    STATE(67), 1,
      sym_body,
    ACTIONS(175), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(177), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1335] = 4,
    ACTIONS(159), 1,
      sym_INDENT,
    STATE(74), 1,
      sym_body,
    ACTIONS(179), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(181), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1354] = 4,
    ACTIONS(159), 1,
      sym_INDENT,
    STATE(76), 1,
      sym_body,
    ACTIONS(183), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(185), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1373] = 4,
    ACTIONS(159), 1,
      sym_INDENT,
    STATE(62), 1,
      sym_body,
    ACTIONS(187), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(189), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1392] = 6,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(194), 1,
      sym_TEXT,
    ACTIONS(197), 1,
      sym_DEDENT,
    ACTIONS(199), 1,
      sym_NEWLINE,
    STATE(52), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(90), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1414] = 7,
    ACTIONS(202), 1,
      anon_sym_COLON_EQ,
    ACTIONS(206), 1,
      anon_sym_COLON,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      sym_NAME,
    STATE(160), 1,
      sym_variadic_parameters,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(59), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1438] = 6,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      sym_TEXT,
    ACTIONS(173), 1,
      sym_NEWLINE,
    ACTIONS(212), 1,
      sym_DEDENT,
    STATE(52), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(90), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1460] = 6,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      sym_TEXT,
    ACTIONS(173), 1,
      sym_NEWLINE,
    ACTIONS(214), 1,
      sym_DEDENT,
    STATE(52), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(90), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1482] = 2,
    ACTIONS(216), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(218), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1495] = 2,
    ACTIONS(220), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(222), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1508] = 2,
    ACTIONS(224), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(226), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1521] = 6,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      sym_NAME,
    ACTIONS(228), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_variadic_parameters,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(79), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1542] = 2,
    ACTIONS(230), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(232), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1555] = 5,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      sym_TEXT,
    ACTIONS(173), 1,
      sym_NEWLINE,
    STATE(54), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(90), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1574] = 2,
    ACTIONS(175), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(177), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1587] = 2,
    ACTIONS(234), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(236), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1600] = 2,
    ACTIONS(238), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(240), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1613] = 2,
    ACTIONS(242), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(244), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1626] = 2,
    ACTIONS(246), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(248), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1639] = 2,
    ACTIONS(183), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(185), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1652] = 2,
    ACTIONS(179), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(181), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1665] = 2,
    ACTIONS(187), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(189), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1678] = 2,
    ACTIONS(250), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(252), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1691] = 2,
    ACTIONS(254), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(256), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1704] = 2,
    ACTIONS(258), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(260), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1717] = 2,
    ACTIONS(262), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(264), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1730] = 2,
    ACTIONS(155), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(157), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1743] = 2,
    ACTIONS(266), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(268), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1756] = 2,
    ACTIONS(270), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(272), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1769] = 6,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      sym_NAME,
    ACTIONS(228), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_variadic_parameters,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(78), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1790] = 6,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      sym_NAME,
    ACTIONS(274), 1,
      anon_sym_COLON,
    STATE(147), 1,
      sym_variadic_parameters,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(79), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1811] = 4,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      sym_NAME,
    STATE(79), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
    ACTIONS(276), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1827] = 2,
    ACTIONS(284), 1,
      anon_sym_PLUS,
    ACTIONS(153), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [1839] = 5,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_,
    ACTIONS(290), 1,
      sym_NAME,
    ACTIONS(292), 1,
      sym_NEWLINE,
    STATE(99), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [1856] = 5,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_NAME,
    ACTIONS(294), 1,
      anon_sym_,
    ACTIONS(296), 1,
      sym_NEWLINE,
    STATE(97), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [1873] = 5,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_NAME,
    ACTIONS(298), 1,
      anon_sym_,
    ACTIONS(300), 1,
      sym_NEWLINE,
    STATE(101), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [1890] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(302), 1,
      anon_sym_COLON_EQ,
    STATE(60), 1,
      sym_comment,
    STATE(72), 1,
      sym_eol,
    STATE(113), 1,
      sym_boolean,
  [1909] = 4,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      sym_string,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1924] = 4,
    ACTIONS(306), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(309), 1,
      sym_TEXT,
    ACTIONS(312), 1,
      sym_NEWLINE,
    STATE(86), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1939] = 4,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      sym_string,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1954] = 2,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(316), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1965] = 5,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_NAME,
    ACTIONS(320), 1,
      anon_sym_,
    ACTIONS(322), 1,
      sym_NEWLINE,
    STATE(103), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [1982] = 4,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      sym_TEXT,
    ACTIONS(324), 1,
      sym_NEWLINE,
    STATE(86), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1997] = 2,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(326), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2008] = 4,
    ACTIONS(296), 1,
      sym_NEWLINE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    STATE(97), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2022] = 4,
    ACTIONS(322), 1,
      sym_NEWLINE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    STATE(103), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2036] = 1,
    ACTIONS(334), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2044] = 3,
    STATE(128), 1,
      sym_string,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2056] = 4,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    ACTIONS(336), 1,
      sym_NEWLINE,
    STATE(104), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2070] = 4,
    ACTIONS(322), 1,
      sym_NEWLINE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    STATE(104), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2084] = 3,
    STATE(132), 1,
      sym_string,
    ACTIONS(64), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(66), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2096] = 4,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    ACTIONS(338), 1,
      sym_NEWLINE,
    STATE(104), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2110] = 4,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    ACTIONS(338), 1,
      sym_NEWLINE,
    STATE(96), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2124] = 4,
    ACTIONS(296), 1,
      sym_NEWLINE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    STATE(104), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2138] = 4,
    ACTIONS(292), 1,
      sym_NEWLINE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    STATE(99), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2152] = 4,
    ACTIONS(292), 1,
      sym_NEWLINE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_NAME,
    STATE(104), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2166] = 4,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      sym_NAME,
    ACTIONS(346), 1,
      sym_NEWLINE,
    STATE(104), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
  [2180] = 1,
    ACTIONS(348), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2188] = 2,
    ACTIONS(350), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
    ACTIONS(352), 2,
      sym_DEDENT,
      sym_NEWLINE,
  [2197] = 2,
    ACTIONS(354), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
    ACTIONS(356), 2,
      sym_DEDENT,
      sym_NEWLINE,
  [2206] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(60), 1,
      sym_comment,
    STATE(73), 1,
      sym_eol,
  [2219] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(60), 1,
      sym_comment,
    STATE(65), 1,
      sym_eol,
  [2232] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(56), 1,
      sym_eol,
    STATE(60), 1,
      sym_comment,
  [2245] = 2,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2254] = 2,
    ACTIONS(362), 1,
      anon_sym_shell,
    ACTIONS(360), 3,
      anon_sym_export,
      anon_sym_dotenv_DASHload,
      anon_sym_positional_DASHarguments,
  [2263] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(60), 1,
      sym_comment,
    STATE(63), 1,
      sym_eol,
  [2276] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(60), 1,
      sym_comment,
    STATE(70), 1,
      sym_eol,
  [2289] = 1,
    ACTIONS(364), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2295] = 1,
    ACTIONS(135), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2301] = 1,
    ACTIONS(115), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2307] = 3,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_setting_repeat1,
  [2317] = 3,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_setting_repeat1,
  [2327] = 1,
    ACTIONS(145), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2333] = 3,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      sym_NAME,
    STATE(149), 1,
      sym_parameter,
  [2343] = 1,
    ACTIONS(373), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2349] = 2,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_RBRACE_RBRACE,
  [2357] = 1,
    ACTIONS(117), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2363] = 2,
    ACTIONS(379), 1,
      sym_NEWLINE,
    ACTIONS(377), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2371] = 2,
    ACTIONS(383), 1,
      sym_NEWLINE,
    ACTIONS(381), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2379] = 2,
    ACTIONS(385), 1,
      anon_sym_PLUS,
    ACTIONS(153), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2387] = 3,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_setting_repeat1,
  [2397] = 2,
    ACTIONS(393), 1,
      sym_NEWLINE,
    ACTIONS(391), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2405] = 1,
    ACTIONS(395), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2411] = 1,
    ACTIONS(397), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2416] = 1,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2421] = 2,
    ACTIONS(153), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(399), 1,
      anon_sym_PLUS,
  [2428] = 1,
    ACTIONS(44), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2433] = 1,
    ACTIONS(401), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2438] = 2,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2445] = 1,
    ACTIONS(407), 2,
      anon_sym_true,
      anon_sym_false,
  [2450] = 1,
    ACTIONS(48), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2455] = 2,
    ACTIONS(409), 1,
      sym_NAME,
    STATE(57), 1,
      sym_assignment,
  [2462] = 1,
    ACTIONS(411), 1,
      aux_sym_comment_token1,
  [2466] = 1,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [2470] = 1,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [2474] = 1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [2478] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [2482] = 1,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
  [2486] = 1,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
  [2490] = 1,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [2494] = 1,
    ACTIONS(425), 1,
      sym_NAME,
  [2498] = 1,
    ACTIONS(427), 1,
      anon_sym_COLON,
  [2502] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [2506] = 1,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
  [2510] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [2514] = 1,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
  [2518] = 1,
    ACTIONS(44), 1,
      anon_sym_RBRACE_RBRACE,
  [2522] = 1,
    ACTIONS(435), 1,
      anon_sym_RBRACE_RBRACE,
  [2526] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACE_RBRACE,
  [2530] = 1,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
  [2534] = 1,
    ACTIONS(439), 1,
      sym_NAME,
  [2538] = 1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [2542] = 1,
    ACTIONS(228), 1,
      anon_sym_COLON,
  [2546] = 1,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
  [2550] = 1,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
  [2554] = 1,
    ACTIONS(445), 1,
      sym_NAME,
  [2558] = 1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [2562] = 1,
    ACTIONS(447), 1,
      anon_sym_else,
  [2566] = 1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [2570] = 1,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
  [2574] = 1,
    ACTIONS(453), 1,
      anon_sym_COLON_EQ,
  [2578] = 1,
    ACTIONS(202), 1,
      anon_sym_COLON_EQ,
  [2582] = 1,
    ACTIONS(455), 1,
      anon_sym_COLON_EQ,
  [2586] = 1,
    ACTIONS(457), 1,
      sym_NEWLINE,
  [2590] = 1,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
  [2594] = 1,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
  [2598] = 1,
    ACTIONS(463), 1,
      anon_sym_else,
  [2602] = 1,
    ACTIONS(465), 1,
      anon_sym_else,
  [2606] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [2610] = 1,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
  [2614] = 1,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
  [2618] = 1,
    ACTIONS(473), 1,
      sym_NAME,
  [2622] = 1,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
  [2626] = 1,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
  [2630] = 1,
    ACTIONS(479), 1,
      sym_NEWLINE,
  [2634] = 1,
    ACTIONS(481), 1,
      sym_NAME,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 545,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 611,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 692,
  [SMALL_STATE(24)] = 725,
  [SMALL_STATE(25)] = 742,
  [SMALL_STATE(26)] = 775,
  [SMALL_STATE(27)] = 808,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 842,
  [SMALL_STATE(30)] = 875,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 941,
  [SMALL_STATE(33)] = 974,
  [SMALL_STATE(34)] = 1007,
  [SMALL_STATE(35)] = 1024,
  [SMALL_STATE(36)] = 1057,
  [SMALL_STATE(37)] = 1090,
  [SMALL_STATE(38)] = 1123,
  [SMALL_STATE(39)] = 1139,
  [SMALL_STATE(40)] = 1153,
  [SMALL_STATE(41)] = 1167,
  [SMALL_STATE(42)] = 1181,
  [SMALL_STATE(43)] = 1199,
  [SMALL_STATE(44)] = 1218,
  [SMALL_STATE(45)] = 1237,
  [SMALL_STATE(46)] = 1264,
  [SMALL_STATE(47)] = 1289,
  [SMALL_STATE(48)] = 1316,
  [SMALL_STATE(49)] = 1335,
  [SMALL_STATE(50)] = 1354,
  [SMALL_STATE(51)] = 1373,
  [SMALL_STATE(52)] = 1392,
  [SMALL_STATE(53)] = 1414,
  [SMALL_STATE(54)] = 1438,
  [SMALL_STATE(55)] = 1460,
  [SMALL_STATE(56)] = 1482,
  [SMALL_STATE(57)] = 1495,
  [SMALL_STATE(58)] = 1508,
  [SMALL_STATE(59)] = 1521,
  [SMALL_STATE(60)] = 1542,
  [SMALL_STATE(61)] = 1555,
  [SMALL_STATE(62)] = 1574,
  [SMALL_STATE(63)] = 1587,
  [SMALL_STATE(64)] = 1600,
  [SMALL_STATE(65)] = 1613,
  [SMALL_STATE(66)] = 1626,
  [SMALL_STATE(67)] = 1639,
  [SMALL_STATE(68)] = 1652,
  [SMALL_STATE(69)] = 1665,
  [SMALL_STATE(70)] = 1678,
  [SMALL_STATE(71)] = 1691,
  [SMALL_STATE(72)] = 1704,
  [SMALL_STATE(73)] = 1717,
  [SMALL_STATE(74)] = 1730,
  [SMALL_STATE(75)] = 1743,
  [SMALL_STATE(76)] = 1756,
  [SMALL_STATE(77)] = 1769,
  [SMALL_STATE(78)] = 1790,
  [SMALL_STATE(79)] = 1811,
  [SMALL_STATE(80)] = 1827,
  [SMALL_STATE(81)] = 1839,
  [SMALL_STATE(82)] = 1856,
  [SMALL_STATE(83)] = 1873,
  [SMALL_STATE(84)] = 1890,
  [SMALL_STATE(85)] = 1909,
  [SMALL_STATE(86)] = 1924,
  [SMALL_STATE(87)] = 1939,
  [SMALL_STATE(88)] = 1954,
  [SMALL_STATE(89)] = 1965,
  [SMALL_STATE(90)] = 1982,
  [SMALL_STATE(91)] = 1997,
  [SMALL_STATE(92)] = 2008,
  [SMALL_STATE(93)] = 2022,
  [SMALL_STATE(94)] = 2036,
  [SMALL_STATE(95)] = 2044,
  [SMALL_STATE(96)] = 2056,
  [SMALL_STATE(97)] = 2070,
  [SMALL_STATE(98)] = 2084,
  [SMALL_STATE(99)] = 2096,
  [SMALL_STATE(100)] = 2110,
  [SMALL_STATE(101)] = 2124,
  [SMALL_STATE(102)] = 2138,
  [SMALL_STATE(103)] = 2152,
  [SMALL_STATE(104)] = 2166,
  [SMALL_STATE(105)] = 2180,
  [SMALL_STATE(106)] = 2188,
  [SMALL_STATE(107)] = 2197,
  [SMALL_STATE(108)] = 2206,
  [SMALL_STATE(109)] = 2219,
  [SMALL_STATE(110)] = 2232,
  [SMALL_STATE(111)] = 2245,
  [SMALL_STATE(112)] = 2254,
  [SMALL_STATE(113)] = 2263,
  [SMALL_STATE(114)] = 2276,
  [SMALL_STATE(115)] = 2289,
  [SMALL_STATE(116)] = 2295,
  [SMALL_STATE(117)] = 2301,
  [SMALL_STATE(118)] = 2307,
  [SMALL_STATE(119)] = 2317,
  [SMALL_STATE(120)] = 2327,
  [SMALL_STATE(121)] = 2333,
  [SMALL_STATE(122)] = 2343,
  [SMALL_STATE(123)] = 2349,
  [SMALL_STATE(124)] = 2357,
  [SMALL_STATE(125)] = 2363,
  [SMALL_STATE(126)] = 2371,
  [SMALL_STATE(127)] = 2379,
  [SMALL_STATE(128)] = 2387,
  [SMALL_STATE(129)] = 2397,
  [SMALL_STATE(130)] = 2405,
  [SMALL_STATE(131)] = 2411,
  [SMALL_STATE(132)] = 2416,
  [SMALL_STATE(133)] = 2421,
  [SMALL_STATE(134)] = 2428,
  [SMALL_STATE(135)] = 2433,
  [SMALL_STATE(136)] = 2438,
  [SMALL_STATE(137)] = 2445,
  [SMALL_STATE(138)] = 2450,
  [SMALL_STATE(139)] = 2455,
  [SMALL_STATE(140)] = 2462,
  [SMALL_STATE(141)] = 2466,
  [SMALL_STATE(142)] = 2470,
  [SMALL_STATE(143)] = 2474,
  [SMALL_STATE(144)] = 2478,
  [SMALL_STATE(145)] = 2482,
  [SMALL_STATE(146)] = 2486,
  [SMALL_STATE(147)] = 2490,
  [SMALL_STATE(148)] = 2494,
  [SMALL_STATE(149)] = 2498,
  [SMALL_STATE(150)] = 2502,
  [SMALL_STATE(151)] = 2506,
  [SMALL_STATE(152)] = 2510,
  [SMALL_STATE(153)] = 2514,
  [SMALL_STATE(154)] = 2518,
  [SMALL_STATE(155)] = 2522,
  [SMALL_STATE(156)] = 2526,
  [SMALL_STATE(157)] = 2530,
  [SMALL_STATE(158)] = 2534,
  [SMALL_STATE(159)] = 2538,
  [SMALL_STATE(160)] = 2542,
  [SMALL_STATE(161)] = 2546,
  [SMALL_STATE(162)] = 2550,
  [SMALL_STATE(163)] = 2554,
  [SMALL_STATE(164)] = 2558,
  [SMALL_STATE(165)] = 2562,
  [SMALL_STATE(166)] = 2566,
  [SMALL_STATE(167)] = 2570,
  [SMALL_STATE(168)] = 2574,
  [SMALL_STATE(169)] = 2578,
  [SMALL_STATE(170)] = 2582,
  [SMALL_STATE(171)] = 2586,
  [SMALL_STATE(172)] = 2590,
  [SMALL_STATE(173)] = 2594,
  [SMALL_STATE(174)] = 2598,
  [SMALL_STATE(175)] = 2602,
  [SMALL_STATE(176)] = 2606,
  [SMALL_STATE(177)] = 2610,
  [SMALL_STATE(178)] = 2614,
  [SMALL_STATE(179)] = 2618,
  [SMALL_STATE(180)] = 2622,
  [SMALL_STATE(181)] = 2626,
  [SMALL_STATE(182)] = 2630,
  [SMALL_STATE(183)] = 2634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(14),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(24),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(24),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(38),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(34),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(34),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(26),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(129),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(106),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 9),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 9),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(163),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(91),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(26),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(129),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(148),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(115),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(98),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_just_external_scanner_create(void);
void tree_sitter_just_external_scanner_destroy(void *);
bool tree_sitter_just_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_just_external_scanner_serialize(void *, char *);
void tree_sitter_just_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_just(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_just_external_scanner_create,
      tree_sitter_just_external_scanner_destroy,
      tree_sitter_just_external_scanner_scan,
      tree_sitter_just_external_scanner_serialize,
      tree_sitter_just_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
