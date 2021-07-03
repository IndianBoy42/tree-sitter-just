#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_alias = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_export = 3,
  anon_sym_set = 4,
  anon_sym_dotenv_DASHload = 5,
  anon_sym_positional_DASHarguments = 6,
  anon_sym_shell = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  anon_sym_if = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_else = 16,
  anon_sym_expression = 17,
  anon_sym_PLUS = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_AT = 23,
  anon_sym_COLON = 24,
  anon_sym_DOLLAR = 25,
  anon_sym_EQ = 26,
  anon_sym_STAR = 27,
  anon_sym_LBRACE_LBRACE = 28,
  anon_sym_RBRACE_RBRACE = 29,
  sym_BACKTICK = 30,
  sym_INDENTED_BACKTICK = 31,
  sym_COMMENT = 32,
  sym_INDENT = 33,
  aux_sym_NAME_token1 = 34,
  sym_NEWLINE = 35,
  sym_RAW_STRING = 36,
  sym_INDENTED_RAW_STRING = 37,
  sym_DEDENT = 38,
  sym_LINE = 39,
  sym_STRING = 40,
  sym_INDENTED_STRING = 41,
  sym_source_file = 42,
  sym_item = 43,
  sym_eol = 44,
  sym_alias = 45,
  sym_assignment = 46,
  sym_export = 47,
  sym_setting = 48,
  sym_boolean = 49,
  sym_expression = 50,
  sym_condition = 51,
  sym_value = 52,
  sym_string = 53,
  sym_sequence = 54,
  sym_recipe = 55,
  sym_parameter = 56,
  sym_variadic_parameters = 57,
  sym_dependency = 58,
  sym_body = 59,
  sym_line = 60,
  sym_interpolation = 61,
  sym_NAME = 62,
  sym_TEXT = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_setting_repeat1 = 65,
  aux_sym_recipe_repeat1 = 66,
  aux_sym_recipe_repeat2 = 67,
  aux_sym_dependency_repeat1 = 68,
  aux_sym_body_repeat1 = 69,
  aux_sym_line_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_expression] = "expression",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_BACKTICK] = "BACKTICK",
  [sym_INDENTED_BACKTICK] = "INDENTED_BACKTICK",
  [sym_COMMENT] = "COMMENT",
  [sym_INDENT] = "INDENT",
  [aux_sym_NAME_token1] = "NAME_token1",
  [sym_NEWLINE] = "NEWLINE",
  [sym_RAW_STRING] = "RAW_STRING",
  [sym_INDENTED_RAW_STRING] = "INDENTED_RAW_STRING",
  [sym_DEDENT] = "DEDENT",
  [sym_LINE] = "LINE",
  [sym_STRING] = "STRING",
  [sym_INDENTED_STRING] = "INDENTED_STRING",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_eol] = "eol",
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
  [sym_line] = "line",
  [sym_interpolation] = "interpolation",
  [sym_NAME] = "NAME",
  [sym_TEXT] = "TEXT",
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
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_BACKTICK] = sym_BACKTICK,
  [sym_INDENTED_BACKTICK] = sym_INDENTED_BACKTICK,
  [sym_COMMENT] = sym_COMMENT,
  [sym_INDENT] = sym_INDENT,
  [aux_sym_NAME_token1] = aux_sym_NAME_token1,
  [sym_NEWLINE] = sym_NEWLINE,
  [sym_RAW_STRING] = sym_RAW_STRING,
  [sym_INDENTED_RAW_STRING] = sym_INDENTED_RAW_STRING,
  [sym_DEDENT] = sym_DEDENT,
  [sym_LINE] = sym_LINE,
  [sym_STRING] = sym_STRING,
  [sym_INDENTED_STRING] = sym_INDENTED_STRING,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_eol] = sym_eol,
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
  [sym_line] = sym_line,
  [sym_interpolation] = sym_interpolation,
  [sym_NAME] = sym_NAME,
  [sym_TEXT] = sym_TEXT,
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
  [anon_sym_expression] = {
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
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_INDENT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_NAME_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_NEWLINE] = {
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
  [sym_DEDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_LINE] = {
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
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_NAME] = {
    .visible = true,
    .named = true,
  },
  [sym_TEXT] = {
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
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(155);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(155);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(160);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(130);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(129);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(131);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 89:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(155);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_INDENT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_NAME_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_NEWLINE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(13);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_LINE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_LINE);
      if (lookahead == '\n') ADVANCE(148);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_LINE);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_LINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 89},
  [4] = {.lex_state = 91},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 91},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 90},
  [19] = {.lex_state = 90},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 90},
  [22] = {.lex_state = 90},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 91},
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 91},
  [32] = {.lex_state = 91},
  [33] = {.lex_state = 91},
  [34] = {.lex_state = 91},
  [35] = {.lex_state = 91},
  [36] = {.lex_state = 91},
  [37] = {.lex_state = 90},
  [38] = {.lex_state = 91},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 91},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 91},
  [53] = {.lex_state = 90},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 90},
  [58] = {.lex_state = 90},
  [59] = {.lex_state = 90},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 89},
  [65] = {.lex_state = 89},
  [66] = {.lex_state = 89},
  [67] = {.lex_state = 89},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 89},
  [72] = {.lex_state = 89},
  [73] = {.lex_state = 89},
  [74] = {.lex_state = 89},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 89},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 89},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 91},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 91},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 91},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 89},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 89},
  [101] = {.lex_state = 89},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 91},
  [105] = {.lex_state = 89},
  [106] = {.lex_state = 91},
  [107] = {.lex_state = 89},
  [108] = {.lex_state = 89},
  [109] = {.lex_state = 89},
  [110] = {.lex_state = 89},
  [111] = {.lex_state = 91},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 91},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 89},
  [117] = {.lex_state = 89},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 91},
  [124] = {.lex_state = 91},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 31},
  [127] = {.lex_state = 91},
  [128] = {.lex_state = 91},
  [129] = {.lex_state = 91},
  [130] = {.lex_state = 91},
  [131] = {.lex_state = 91},
  [132] = {.lex_state = 91},
  [133] = {.lex_state = 91},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 91},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 91},
  [140] = {.lex_state = 89},
  [141] = {.lex_state = 91},
  [142] = {.lex_state = 91},
  [143] = {.lex_state = 91},
  [144] = {.lex_state = 91},
  [145] = {.lex_state = 91},
  [146] = {.lex_state = 91},
  [147] = {.lex_state = 91},
  [148] = {.lex_state = 91},
  [149] = {.lex_state = 91},
  [150] = {.lex_state = 31},
  [151] = {.lex_state = 91},
  [152] = {.lex_state = 31},
  [153] = {.lex_state = 91},
  [154] = {.lex_state = 91},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 91},
  [158] = {.lex_state = 91},
  [159] = {.lex_state = 91},
  [160] = {.lex_state = 91},
  [161] = {.lex_state = 91},
  [162] = {.lex_state = 91},
  [163] = {.lex_state = 91},
  [164] = {.lex_state = 91},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_expression] = ACTIONS(1),
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
    [sym_COMMENT] = ACTIONS(1),
    [sym_NEWLINE] = ACTIONS(1),
    [sym_RAW_STRING] = ACTIONS(1),
    [sym_INDENTED_RAW_STRING] = ACTIONS(1),
    [sym_DEDENT] = ACTIONS(1),
    [sym_LINE] = ACTIONS(3),
    [sym_STRING] = ACTIONS(1),
    [sym_INDENTED_STRING] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(128),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(74),
    [sym_alias] = STATE(74),
    [sym_assignment] = STATE(74),
    [sym_export] = STATE(74),
    [sym_setting] = STATE(74),
    [sym_recipe] = STATE(74),
    [sym_NAME] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_COMMENT] = ACTIONS(15),
    [aux_sym_NAME_token1] = ACTIONS(17),
    [sym_NEWLINE] = ACTIONS(19),
    [sym_LINE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_alias,
    ACTIONS(26), 1,
      anon_sym_export,
    ACTIONS(29), 1,
      anon_sym_set,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_COMMENT,
    ACTIONS(38), 1,
      aux_sym_NAME_token1,
    ACTIONS(41), 1,
      sym_NEWLINE,
    STATE(56), 1,
      sym_NAME,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(74), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [43] = 12,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(7), 1,
      anon_sym_alias,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_NAME,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(74), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [86] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(48), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(46), 10,
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
  [109] = 14,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
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
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(114), 1,
      sym_expression,
    STATE(141), 1,
      sym_sequence,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [154] = 13,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      sym_BACKTICK,
    ACTIONS(72), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(74), 1,
      aux_sym_NAME_token1,
    STATE(45), 1,
      sym_string,
    STATE(46), 1,
      sym_value,
    STATE(52), 1,
      sym_NAME,
    ACTIONS(76), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(78), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(11), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [197] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(82), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(80), 10,
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
  [220] = 13,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(84), 1,
      anon_sym_if,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      sym_BACKTICK,
    ACTIONS(95), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(98), 1,
      aux_sym_NAME_token1,
    STATE(45), 1,
      sym_string,
    STATE(46), 1,
      sym_value,
    STATE(52), 1,
      sym_NAME,
    ACTIONS(101), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [263] = 14,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(114), 1,
      sym_expression,
    STATE(135), 1,
      sym_sequence,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [308] = 14,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(114), 1,
      sym_expression,
    STATE(147), 1,
      sym_sequence,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [353] = 13,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_BACKTICK,
    ACTIONS(72), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(74), 1,
      aux_sym_NAME_token1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_string,
    STATE(46), 1,
      sym_value,
    STATE(52), 1,
      sym_NAME,
    ACTIONS(76), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(78), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [396] = 14,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(114), 1,
      sym_expression,
    STATE(159), 1,
      sym_sequence,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [441] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(117), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(115), 12,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      aux_sym_NAME_token1,
  [463] = 13,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(124), 1,
      sym_expression,
    STATE(162), 1,
      sym_condition,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [505] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(70), 1,
      sym_body,
    STATE(37), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(121), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [537] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(71), 1,
      sym_body,
    STATE(15), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(129), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [569] = 13,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(124), 1,
      sym_expression,
    STATE(161), 1,
      sym_condition,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [611] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(63), 1,
      sym_body,
    STATE(37), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(133), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [643] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(79), 1,
      sym_body,
    STATE(37), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(137), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [675] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(79), 1,
      sym_body,
    STATE(22), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(137), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [707] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(63), 1,
      sym_body,
    STATE(19), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(133), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [739] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(71), 1,
      sym_body,
    STATE(37), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(129), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [771] = 8,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_INDENT,
    STATE(57), 1,
      sym_NAME,
    STATE(64), 1,
      sym_body,
    STATE(18), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(141), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [803] = 13,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(124), 1,
      sym_expression,
    STATE(164), 1,
      sym_condition,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [845] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(7), 1,
      sym_expression,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [884] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [923] = 12,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_BACKTICK,
    ACTIONS(72), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(74), 1,
      aux_sym_NAME_token1,
    ACTIONS(143), 1,
      anon_sym_if,
    STATE(45), 1,
      sym_string,
    STATE(102), 1,
      sym_NAME,
    STATE(113), 1,
      sym_value,
    STATE(138), 1,
      sym_expression,
    ACTIONS(76), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(78), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [962] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(157), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1001] = 12,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_BACKTICK,
    ACTIONS(151), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(153), 1,
      aux_sym_NAME_token1,
    STATE(97), 1,
      sym_NAME,
    STATE(101), 1,
      sym_value,
    STATE(109), 1,
      sym_string,
    STATE(117), 1,
      sym_expression,
    ACTIONS(155), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(157), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1040] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(145), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1079] = 12,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(145), 1,
      anon_sym_if,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_BACKTICK,
    ACTIONS(151), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(153), 1,
      aux_sym_NAME_token1,
    STATE(97), 1,
      sym_NAME,
    STATE(100), 1,
      sym_expression,
    STATE(101), 1,
      sym_value,
    STATE(109), 1,
      sym_string,
    ACTIONS(155), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(157), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1118] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(139), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1157] = 12,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_BACKTICK,
    ACTIONS(72), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(74), 1,
      aux_sym_NAME_token1,
    ACTIONS(143), 1,
      anon_sym_if,
    STATE(45), 1,
      sym_string,
    STATE(102), 1,
      sym_NAME,
    STATE(113), 1,
      sym_value,
    STATE(134), 1,
      sym_expression,
    ACTIONS(76), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(78), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1196] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1235] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(149), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1274] = 12,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_BACKTICK,
    ACTIONS(72), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(74), 1,
      aux_sym_NAME_token1,
    STATE(7), 1,
      sym_expression,
    STATE(45), 1,
      sym_string,
    STATE(46), 1,
      sym_value,
    STATE(52), 1,
      sym_NAME,
    ACTIONS(76), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(78), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1313] = 7,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      aux_sym_NAME_token1,
    STATE(57), 1,
      sym_NAME,
    STATE(37), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(161), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NEWLINE,
  [1342] = 12,
    ACTIONS(17), 1,
      aux_sym_NAME_token1,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(163), 1,
      sym_expression,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1381] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 11,
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
      aux_sym_NAME_token1,
  [1401] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(117), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
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
  [1421] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(173), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(175), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1441] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(177), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(179), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1461] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(181), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(183), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1481] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(183), 12,
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
      aux_sym_NAME_token1,
  [1499] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(185), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(169), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1519] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(187), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(191), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1540] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(175), 11,
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
      aux_sym_NAME_token1,
  [1557] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(179), 11,
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
      aux_sym_NAME_token1,
  [1574] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(169), 11,
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
      aux_sym_NAME_token1,
  [1591] = 10,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(89), 1,
      sym_value,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1624] = 10,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_BACKTICK,
    ACTIONS(60), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    STATE(39), 1,
      sym_NAME,
    STATE(49), 1,
      sym_string,
    STATE(90), 1,
      sym_value,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1657] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(185), 5,
      anon_sym_if,
      sym_BACKTICK,
      aux_sym_NAME_token1,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(169), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1676] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(117), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [1694] = 5,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(199), 1,
      anon_sym_COLON_EQ,
    STATE(75), 1,
      sym_boolean,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(197), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1716] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(117), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
  [1734] = 9,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    ACTIONS(201), 1,
      anon_sym_COLON_EQ,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_NAME,
    STATE(144), 1,
      sym_variadic_parameters,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(61), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1764] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(211), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [1782] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(215), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [1800] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(219), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [1818] = 8,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_NAME,
    STATE(129), 1,
      sym_variadic_parameters,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(80), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1845] = 8,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_NAME,
    STATE(131), 1,
      sym_variadic_parameters,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(80), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1872] = 8,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_NAME,
    STATE(131), 1,
      sym_variadic_parameters,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(60), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1899] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(137), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1915] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(133), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1931] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(227), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(231), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(233), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(235), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1979] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(239), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [1995] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(243), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2011] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(245), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(247), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(121), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(251), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(253), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(255), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(259), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2091] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(263), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2107] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(267), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2123] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(269), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(271), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2139] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(275), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2155] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(129), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      aux_sym_NAME_token1,
  [2171] = 6,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      aux_sym_NAME_token1,
    STATE(86), 1,
      sym_NAME,
    STATE(80), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [2193] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(191), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [2208] = 5,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(287), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(290), 1,
      aux_sym_NAME_token1,
    ACTIONS(293), 1,
      sym_NEWLINE,
    STATE(82), 3,
      sym_interpolation,
      sym_TEXT,
      aux_sym_line_repeat1,
  [2226] = 5,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(295), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(297), 1,
      aux_sym_NAME_token1,
    ACTIONS(299), 1,
      sym_NEWLINE,
    STATE(82), 3,
      sym_interpolation,
      sym_TEXT,
      aux_sym_line_repeat1,
  [2244] = 5,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_string,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2262] = 5,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_string,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2280] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(305), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      aux_sym_NAME_token1,
  [2294] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(311), 1,
      anon_sym_EQ,
    ACTIONS(309), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      aux_sym_NAME_token1,
  [2308] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    STATE(123), 1,
      sym_string,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2323] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(313), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      aux_sym_NAME_token1,
  [2334] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(315), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      aux_sym_NAME_token1,
  [2345] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(295), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(297), 1,
      aux_sym_NAME_token1,
    STATE(83), 3,
      sym_interpolation,
      sym_TEXT,
      aux_sym_line_repeat1,
  [2360] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    STATE(104), 1,
      sym_string,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2375] = 5,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_NAME,
    STATE(127), 1,
      sym_parameter,
  [2391] = 4,
    ACTIONS(317), 1,
      sym_NEWLINE,
    ACTIONS(320), 1,
      sym_DEDENT,
    ACTIONS(322), 1,
      sym_LINE,
    STATE(94), 2,
      sym_line,
      aux_sym_body_repeat1,
  [2405] = 4,
    ACTIONS(325), 1,
      sym_NEWLINE,
    ACTIONS(327), 1,
      sym_DEDENT,
    ACTIONS(329), 1,
      sym_LINE,
    STATE(94), 2,
      sym_line,
      aux_sym_body_repeat1,
  [2419] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(333), 1,
      anon_sym_shell,
    ACTIONS(331), 3,
      anon_sym_export,
      anon_sym_dotenv_DASHload,
      anon_sym_positional_DASHarguments,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(337), 3,
      anon_sym_LBRACE_LBRACE,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(339), 3,
      anon_sym_LBRACE_LBRACE,
      aux_sym_NAME_token1,
      sym_NEWLINE,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(73), 1,
      sym_eol,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2485] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_RBRACE_RBRACE,
  [2496] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    STATE(68), 1,
      sym_assignment,
    STATE(143), 1,
      sym_NAME,
  [2509] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_setting_repeat1,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(175), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2531] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_setting_repeat1,
  [2544] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(179), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2553] = 3,
    ACTIONS(325), 1,
      sym_NEWLINE,
    ACTIONS(329), 1,
      sym_LINE,
    STATE(95), 2,
      sym_line,
      aux_sym_body_repeat1,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(169), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2573] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(183), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2582] = 4,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_setting_repeat1,
  [2595] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    STATE(62), 1,
      sym_NAME,
  [2605] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(191), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(356), 1,
      anon_sym_PLUS,
  [2615] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [2625] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(362), 1,
      aux_sym_NAME_token1,
    STATE(65), 1,
      sym_NAME,
  [2635] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(46), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2643] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(80), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2651] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    STATE(146), 1,
      sym_NAME,
  [2661] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(364), 1,
      aux_sym_NAME_token1,
    STATE(6), 1,
      sym_NAME,
  [2671] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(366), 2,
      anon_sym_true,
      anon_sym_false,
  [2679] = 3,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(193), 1,
      aux_sym_NAME_token1,
    STATE(87), 1,
      sym_NAME,
  [2689] = 2,
    ACTIONS(368), 1,
      sym_NEWLINE,
    ACTIONS(370), 2,
      sym_DEDENT,
      sym_LINE,
  [2697] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2705] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(372), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2713] = 2,
    ACTIONS(374), 1,
      sym_NEWLINE,
    ACTIONS(376), 2,
      sym_DEDENT,
      sym_LINE,
  [2721] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(378), 1,
      anon_sym_expression,
  [2728] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [2735] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
  [2742] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(384), 1,
      anon_sym_COLON,
  [2749] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
  [2756] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [2763] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
  [2770] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
  [2777] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(80), 1,
      anon_sym_RBRACE_RBRACE,
  [2784] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [2791] = 2,
    ACTIONS(46), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(50), 1,
      sym_LINE,
  [2798] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(394), 1,
      anon_sym_else,
  [2805] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(396), 1,
      anon_sym_RBRACE_RBRACE,
  [2812] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
  [2819] = 2,
    ACTIONS(3), 1,
      sym_LINE,
    ACTIONS(398), 1,
      sym_NEWLINE,
  [2826] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [2833] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
  [2840] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(201), 1,
      anon_sym_COLON_EQ,
  [2847] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [2854] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [2861] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(404), 1,
      anon_sym_COLON_EQ,
  [2868] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
  [2875] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
  [2882] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
  [2889] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(412), 1,
      anon_sym_expression,
  [2896] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [2903] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(416), 1,
      anon_sym_expression,
  [2910] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
  [2917] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
  [2924] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(422), 1,
      anon_sym_else,
  [2931] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(424), 1,
      anon_sym_else,
  [2938] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
  [2945] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [2952] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2959] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(432), 1,
      anon_sym_COLON_EQ,
  [2966] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [2973] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [2980] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [2987] = 2,
    ACTIONS(50), 1,
      sym_LINE,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 441,
  [SMALL_STATE(14)] = 463,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 537,
  [SMALL_STATE(17)] = 569,
  [SMALL_STATE(18)] = 611,
  [SMALL_STATE(19)] = 643,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 739,
  [SMALL_STATE(23)] = 771,
  [SMALL_STATE(24)] = 803,
  [SMALL_STATE(25)] = 845,
  [SMALL_STATE(26)] = 884,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 962,
  [SMALL_STATE(29)] = 1001,
  [SMALL_STATE(30)] = 1040,
  [SMALL_STATE(31)] = 1079,
  [SMALL_STATE(32)] = 1118,
  [SMALL_STATE(33)] = 1157,
  [SMALL_STATE(34)] = 1196,
  [SMALL_STATE(35)] = 1235,
  [SMALL_STATE(36)] = 1274,
  [SMALL_STATE(37)] = 1313,
  [SMALL_STATE(38)] = 1342,
  [SMALL_STATE(39)] = 1381,
  [SMALL_STATE(40)] = 1401,
  [SMALL_STATE(41)] = 1421,
  [SMALL_STATE(42)] = 1441,
  [SMALL_STATE(43)] = 1461,
  [SMALL_STATE(44)] = 1481,
  [SMALL_STATE(45)] = 1499,
  [SMALL_STATE(46)] = 1519,
  [SMALL_STATE(47)] = 1540,
  [SMALL_STATE(48)] = 1557,
  [SMALL_STATE(49)] = 1574,
  [SMALL_STATE(50)] = 1591,
  [SMALL_STATE(51)] = 1624,
  [SMALL_STATE(52)] = 1657,
  [SMALL_STATE(53)] = 1676,
  [SMALL_STATE(54)] = 1694,
  [SMALL_STATE(55)] = 1716,
  [SMALL_STATE(56)] = 1734,
  [SMALL_STATE(57)] = 1764,
  [SMALL_STATE(58)] = 1782,
  [SMALL_STATE(59)] = 1800,
  [SMALL_STATE(60)] = 1818,
  [SMALL_STATE(61)] = 1845,
  [SMALL_STATE(62)] = 1872,
  [SMALL_STATE(63)] = 1899,
  [SMALL_STATE(64)] = 1915,
  [SMALL_STATE(65)] = 1931,
  [SMALL_STATE(66)] = 1947,
  [SMALL_STATE(67)] = 1963,
  [SMALL_STATE(68)] = 1979,
  [SMALL_STATE(69)] = 1995,
  [SMALL_STATE(70)] = 2011,
  [SMALL_STATE(71)] = 2027,
  [SMALL_STATE(72)] = 2043,
  [SMALL_STATE(73)] = 2059,
  [SMALL_STATE(74)] = 2075,
  [SMALL_STATE(75)] = 2091,
  [SMALL_STATE(76)] = 2107,
  [SMALL_STATE(77)] = 2123,
  [SMALL_STATE(78)] = 2139,
  [SMALL_STATE(79)] = 2155,
  [SMALL_STATE(80)] = 2171,
  [SMALL_STATE(81)] = 2193,
  [SMALL_STATE(82)] = 2208,
  [SMALL_STATE(83)] = 2226,
  [SMALL_STATE(84)] = 2244,
  [SMALL_STATE(85)] = 2262,
  [SMALL_STATE(86)] = 2280,
  [SMALL_STATE(87)] = 2294,
  [SMALL_STATE(88)] = 2308,
  [SMALL_STATE(89)] = 2323,
  [SMALL_STATE(90)] = 2334,
  [SMALL_STATE(91)] = 2345,
  [SMALL_STATE(92)] = 2360,
  [SMALL_STATE(93)] = 2375,
  [SMALL_STATE(94)] = 2391,
  [SMALL_STATE(95)] = 2405,
  [SMALL_STATE(96)] = 2419,
  [SMALL_STATE(97)] = 2431,
  [SMALL_STATE(98)] = 2443,
  [SMALL_STATE(99)] = 2452,
  [SMALL_STATE(100)] = 2461,
  [SMALL_STATE(101)] = 2474,
  [SMALL_STATE(102)] = 2485,
  [SMALL_STATE(103)] = 2496,
  [SMALL_STATE(104)] = 2509,
  [SMALL_STATE(105)] = 2522,
  [SMALL_STATE(106)] = 2531,
  [SMALL_STATE(107)] = 2544,
  [SMALL_STATE(108)] = 2553,
  [SMALL_STATE(109)] = 2564,
  [SMALL_STATE(110)] = 2573,
  [SMALL_STATE(111)] = 2582,
  [SMALL_STATE(112)] = 2595,
  [SMALL_STATE(113)] = 2605,
  [SMALL_STATE(114)] = 2615,
  [SMALL_STATE(115)] = 2625,
  [SMALL_STATE(116)] = 2635,
  [SMALL_STATE(117)] = 2643,
  [SMALL_STATE(118)] = 2651,
  [SMALL_STATE(119)] = 2661,
  [SMALL_STATE(120)] = 2671,
  [SMALL_STATE(121)] = 2679,
  [SMALL_STATE(122)] = 2689,
  [SMALL_STATE(123)] = 2697,
  [SMALL_STATE(124)] = 2705,
  [SMALL_STATE(125)] = 2713,
  [SMALL_STATE(126)] = 2721,
  [SMALL_STATE(127)] = 2728,
  [SMALL_STATE(128)] = 2735,
  [SMALL_STATE(129)] = 2742,
  [SMALL_STATE(130)] = 2749,
  [SMALL_STATE(131)] = 2756,
  [SMALL_STATE(132)] = 2763,
  [SMALL_STATE(133)] = 2770,
  [SMALL_STATE(134)] = 2777,
  [SMALL_STATE(135)] = 2784,
  [SMALL_STATE(136)] = 2791,
  [SMALL_STATE(137)] = 2798,
  [SMALL_STATE(138)] = 2805,
  [SMALL_STATE(139)] = 2812,
  [SMALL_STATE(140)] = 2819,
  [SMALL_STATE(141)] = 2826,
  [SMALL_STATE(142)] = 2833,
  [SMALL_STATE(143)] = 2840,
  [SMALL_STATE(144)] = 2847,
  [SMALL_STATE(145)] = 2854,
  [SMALL_STATE(146)] = 2861,
  [SMALL_STATE(147)] = 2868,
  [SMALL_STATE(148)] = 2875,
  [SMALL_STATE(149)] = 2882,
  [SMALL_STATE(150)] = 2889,
  [SMALL_STATE(151)] = 2896,
  [SMALL_STATE(152)] = 2903,
  [SMALL_STATE(153)] = 2910,
  [SMALL_STATE(154)] = 2917,
  [SMALL_STATE(155)] = 2924,
  [SMALL_STATE(156)] = 2931,
  [SMALL_STATE(157)] = 2938,
  [SMALL_STATE(158)] = 2945,
  [SMALL_STATE(159)] = 2952,
  [SMALL_STATE(160)] = 2959,
  [SMALL_STATE(161)] = 2966,
  [SMALL_STATE(162)] = 2973,
  [SMALL_STATE(163)] = 2980,
  [SMALL_STATE(164)] = 2987,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(45),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(45),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(40),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(43),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NAME, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NAME, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(119),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(53),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(121),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(13),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(27),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(99),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(122),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(91),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXT, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(88),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [382] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
