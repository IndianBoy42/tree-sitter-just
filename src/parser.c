#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
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
  anon_sym_PLUS = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_AT = 22,
  anon_sym_COLON = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_EQ = 25,
  anon_sym_STAR = 26,
  anon_sym_LBRACE_LBRACE = 27,
  anon_sym_RBRACE_RBRACE = 28,
  sym_BACKTICK = 29,
  sym_INDENTED_BACKTICK = 30,
  sym_COMMENT = 31,
  sym_INDENT = 32,
  sym_NAME = 33,
  sym_NEWLINE = 34,
  sym_RAW_STRING = 35,
  sym_INDENTED_RAW_STRING = 36,
  sym_DEDENT = 37,
  sym_SPACE = 38,
  sym_STRING = 39,
  sym_INDENTED_STRING = 40,
  sym_TEXT = 41,
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
  sym_text = 61,
  sym_interpolation = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_setting_repeat1 = 64,
  aux_sym_recipe_repeat1 = 65,
  aux_sym_recipe_repeat2 = 66,
  aux_sym_dependency_repeat1 = 67,
  aux_sym_body_repeat1 = 68,
  aux_sym_line_repeat1 = 69,
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
  [sym_NAME] = "NAME",
  [sym_NEWLINE] = "NEWLINE",
  [sym_RAW_STRING] = "RAW_STRING",
  [sym_INDENTED_RAW_STRING] = "INDENTED_RAW_STRING",
  [sym_DEDENT] = "DEDENT",
  [sym_SPACE] = "SPACE",
  [sym_STRING] = "STRING",
  [sym_INDENTED_STRING] = "INDENTED_STRING",
  [sym_TEXT] = "TEXT",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_BACKTICK] = sym_BACKTICK,
  [sym_INDENTED_BACKTICK] = sym_INDENTED_BACKTICK,
  [sym_COMMENT] = sym_COMMENT,
  [sym_INDENT] = sym_INDENT,
  [sym_NAME] = sym_NAME,
  [sym_NEWLINE] = sym_NEWLINE,
  [sym_RAW_STRING] = sym_RAW_STRING,
  [sym_INDENTED_RAW_STRING] = sym_INDENTED_RAW_STRING,
  [sym_DEDENT] = sym_DEDENT,
  [sym_SPACE] = sym_SPACE,
  [sym_STRING] = sym_STRING,
  [sym_INDENTED_STRING] = sym_INDENTED_STRING,
  [sym_TEXT] = sym_TEXT,
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
  [sym_NAME] = {
    .visible = true,
    .named = true,
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
  [sym_SPACE] = {
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
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(183);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(182);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(184);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == '`') ADVANCE(118);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(117);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 71:
      if (lookahead == '}') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(193);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(22);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_INDENT);
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
      if (lookahead == 'd') ADVANCE(84);
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
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(95);
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
      if (lookahead == 'f') ADVANCE(96);
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
      if (lookahead == 'l') ADVANCE(88);
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
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(86);
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
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(81);
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
      ACCEPT_TOKEN(sym_NEWLINE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_SPACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_SPACE);
      if (lookahead == '\n') ADVANCE(179);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_SPACE);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_SPACE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(193);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 75},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 76},
  [26] = {.lex_state = 75},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 75},
  [54] = {.lex_state = 75},
  [55] = {.lex_state = 75},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 74},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 74},
  [76] = {.lex_state = 74},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 74},
  [80] = {.lex_state = 74},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 74},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 74},
  [98] = {.lex_state = 74},
  [99] = {.lex_state = 74},
  [100] = {.lex_state = 74},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 74},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 74},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 74},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 74},
  [112] = {.lex_state = 74},
  [113] = {.lex_state = 74},
  [114] = {.lex_state = 74},
  [115] = {.lex_state = 74},
  [116] = {.lex_state = 76},
  [117] = {.lex_state = 76},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 74},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 76},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 74},
  [124] = {.lex_state = 76},
  [125] = {.lex_state = 76},
  [126] = {.lex_state = 76},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 76},
  [129] = {.lex_state = 76},
  [130] = {.lex_state = 76},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 76},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 76},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 76},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 76},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 76},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 76},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 76},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 76},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 76},
  [151] = {.lex_state = 76},
  [152] = {.lex_state = 76},
  [153] = {.lex_state = 76},
  [154] = {.lex_state = 76},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 76},
  [160] = {.lex_state = 74},
  [161] = {.lex_state = 76},
  [162] = {.lex_state = 76},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 76},
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
    [sym_NAME] = ACTIONS(1),
    [sym_NEWLINE] = ACTIONS(1),
    [sym_RAW_STRING] = ACTIONS(1),
    [sym_INDENTED_RAW_STRING] = ACTIONS(1),
    [sym_DEDENT] = ACTIONS(1),
    [sym_SPACE] = ACTIONS(3),
    [sym_STRING] = ACTIONS(1),
    [sym_INDENTED_STRING] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(159),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(76),
    [sym_alias] = STATE(76),
    [sym_assignment] = STATE(76),
    [sym_export] = STATE(76),
    [sym_setting] = STATE(76),
    [sym_recipe] = STATE(76),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_COMMENT] = ACTIONS(15),
    [sym_NAME] = ACTIONS(17),
    [sym_NEWLINE] = ACTIONS(19),
    [sym_SPACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
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
      sym_NAME,
    ACTIONS(41), 1,
      sym_NEWLINE,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(76), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [40] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
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
      sym_NAME,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(76), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [80] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(48), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(46), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [103] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(54), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(52), 10,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [126] = 13,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(147), 1,
      sym_sequence,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [168] = 12,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(72), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(49), 1,
      sym_value,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(92), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(7), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [208] = 12,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(103), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(49), 1,
      sym_value,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(12), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [248] = 13,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(142), 1,
      sym_sequence,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [290] = 13,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(138), 1,
      sym_sequence,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [332] = 13,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(124), 1,
      sym_sequence,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [374] = 12,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(103), 1,
      sym_NAME,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_string,
    STATE(49), 1,
      sym_value,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(7), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [414] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(68), 1,
      sym_body,
    STATE(26), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(119), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [443] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(75), 1,
      sym_body,
    STATE(18), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(127), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [472] = 12,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(162), 1,
      sym_condition,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [511] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(72), 1,
      sym_body,
    STATE(26), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(131), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [540] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(79), 1,
      sym_body,
    STATE(16), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(135), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [569] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(79), 1,
      sym_body,
    STATE(26), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(135), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [598] = 12,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(129), 1,
      sym_condition,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [637] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(75), 1,
      sym_body,
    STATE(26), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(127), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [666] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(64), 1,
      sym_body,
    STATE(13), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(139), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [695] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_INDENT,
    STATE(68), 1,
      sym_body,
    STATE(20), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(119), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [724] = 12,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(161), 1,
      sym_condition,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [763] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(143), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [799] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(149), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [835] = 6,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      sym_NAME,
    STATE(26), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(147), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NEWLINE,
  [861] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(135), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [897] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(155), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(157), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [917] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(157), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [953] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(159), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(161), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [973] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(103), 1,
      sym_NAME,
    STATE(5), 1,
      sym_expression,
    STATE(39), 1,
      sym_string,
    STATE(49), 1,
      sym_value,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1009] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1045] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(163), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(165), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1065] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1101] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(5), 1,
      sym_expression,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1137] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(128), 1,
      sym_expression,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1173] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(165), 12,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [1191] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(167), 1,
      anon_sym_if,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      sym_BACKTICK,
    ACTIONS(173), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(175), 1,
      sym_NAME,
    STATE(98), 1,
      sym_value,
    STATE(102), 1,
      sym_expression,
    STATE(109), 1,
      sym_string,
    ACTIONS(177), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(179), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1227] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(181), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(183), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1247] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(140), 1,
      sym_expression,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1283] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(164), 1,
      sym_expression,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1319] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(148), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1355] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1391] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(167), 1,
      anon_sym_if,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      sym_BACKTICK,
    ACTIONS(173), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(175), 1,
      sym_NAME,
    STATE(98), 1,
      sym_value,
    STATE(109), 1,
      sym_string,
    STATE(123), 1,
      sym_expression,
    ACTIONS(177), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(179), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1427] = 11,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(56), 1,
      anon_sym_if,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(82), 1,
      sym_value,
    STATE(125), 1,
      sym_expression,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1463] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [1483] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(157), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [1500] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(181), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(183), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1519] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(187), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
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
      sym_SPACE,
    ACTIONS(161), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [1557] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(183), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [1574] = 9,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(193), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(92), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1604] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(197), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [1622] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(201), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
      sym_INDENT,
    ACTIONS(205), 5,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
      sym_NEWLINE,
  [1658] = 9,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(193), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(93), 1,
      sym_value,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1688] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(207), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(210), 1,
      sym_NEWLINE,
    ACTIONS(213), 1,
      sym_DEDENT,
    ACTIONS(215), 1,
      sym_TEXT,
    STATE(57), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1713] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(218), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(220), 1,
      sym_NEWLINE,
    ACTIONS(222), 1,
      sym_DEDENT,
    ACTIONS(224), 1,
      sym_TEXT,
    STATE(57), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1738] = 8,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(226), 1,
      anon_sym_COLON_EQ,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      sym_NAME,
    STATE(144), 1,
      sym_variadic_parameters,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(74), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(238), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1781] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(242), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1797] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(246), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(248), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(250), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1829] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(119), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1845] = 7,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      sym_NAME,
    ACTIONS(252), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_variadic_parameters,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(69), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1869] = 6,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(218), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(220), 1,
      sym_NEWLINE,
    ACTIONS(224), 1,
      sym_TEXT,
    STATE(58), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1891] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(254), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(256), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1907] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(127), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1923] = 7,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      sym_NAME,
    ACTIONS(258), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_variadic_parameters,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(81), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(262), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(266), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1979] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(270), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1995] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(272), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(274), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2011] = 7,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      sym_NAME,
    ACTIONS(252), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_variadic_parameters,
    ACTIONS(228), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(81), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [2035] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(135), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2051] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(278), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(282), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(286), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(131), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2115] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
      sym_NEWLINE,
    ACTIONS(290), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2131] = 5,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_NAME,
    STATE(81), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
    ACTIONS(292), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [2150] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(191), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [2165] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 1,
      sym_NEWLINE,
    ACTIONS(307), 1,
      sym_TEXT,
    STATE(83), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [2183] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(218), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_TEXT,
    ACTIONS(310), 1,
      sym_NEWLINE,
    STATE(83), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [2201] = 5,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_string,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2219] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(316), 1,
      anon_sym_EQ,
    ACTIONS(314), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2233] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(318), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2247] = 5,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_string,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2265] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    STATE(121), 1,
      sym_string,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2280] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    STATE(106), 1,
      sym_string,
    ACTIONS(68), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(70), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2295] = 6,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(324), 1,
      anon_sym_COLON_EQ,
    STATE(61), 1,
      sym_eol,
    STATE(111), 1,
      sym_boolean,
  [2314] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(326), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2325] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(328), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2336] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(332), 1,
      anon_sym_shell,
    ACTIONS(330), 3,
      anon_sym_export,
      anon_sym_dotenv_DASHload,
      anon_sym_positional_DASHarguments,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(336), 1,
      sym_NEWLINE,
    ACTIONS(334), 3,
      anon_sym_LBRACE_LBRACE,
      sym_DEDENT,
      sym_TEXT,
  [2360] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(340), 1,
      sym_NEWLINE,
    ACTIONS(338), 3,
      anon_sym_LBRACE_LBRACE,
      sym_DEDENT,
      sym_TEXT,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(344), 1,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(161), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(157), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2413] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_setting_repeat1,
  [2426] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(77), 1,
      sym_eol,
  [2439] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(350), 1,
      sym_NEWLINE,
    ACTIONS(348), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(80), 1,
      sym_eol,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(354), 1,
      sym_NEWLINE,
    ACTIONS(352), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2474] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_setting_repeat1,
  [2487] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      sym_NAME,
    STATE(132), 1,
      sym_parameter,
  [2500] = 4,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_setting_repeat1,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(183), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2522] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_PLUS,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(71), 1,
      sym_eol,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      sym_COMMENT,
      sym_NEWLINE,
  [2555] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(70), 1,
      sym_eol,
  [2568] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(78), 1,
      sym_eol,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(367), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2589] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [2599] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(373), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2607] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(375), 2,
      anon_sym_true,
      anon_sym_false,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(46), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2623] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(377), 1,
      sym_NAME,
    STATE(67), 1,
      sym_assignment,
  [2633] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2641] = 3,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      anon_sym_PLUS,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(52), 2,
      sym_COMMENT,
      sym_NEWLINE,
  [2659] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [2666] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
  [2673] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
  [2680] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
  [2687] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [2694] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
  [2701] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [2708] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(391), 1,
      sym_NAME,
  [2715] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [2722] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [2729] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
  [2736] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
  [2743] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(397), 1,
      anon_sym_RBRACE_RBRACE,
  [2750] = 2,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      sym_SPACE,
  [2757] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [2764] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(401), 1,
      anon_sym_else,
  [2771] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [2778] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(403), 1,
      sym_NAME,
  [2785] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2792] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
  [2799] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [2806] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(409), 1,
      sym_NAME,
  [2813] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(411), 1,
      sym_NAME,
  [2820] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [2827] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
  [2834] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
  [2841] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(419), 1,
      anon_sym_COLON_EQ,
  [2848] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(226), 1,
      anon_sym_COLON_EQ,
  [2855] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(421), 1,
      anon_sym_COLON_EQ,
  [2862] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [2869] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [2876] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(427), 1,
      anon_sym_else,
  [2883] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(429), 1,
      anon_sym_else,
  [2890] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
  [2897] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
  [2904] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(437), 1,
      sym_NEWLINE,
  [2918] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [2925] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
  [2932] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(443), 1,
      sym_NAME,
  [2939] = 2,
    ACTIONS(50), 1,
      sym_SPACE,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 511,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 569,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 637,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 763,
  [SMALL_STATE(25)] = 799,
  [SMALL_STATE(26)] = 835,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 897,
  [SMALL_STATE(29)] = 917,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 973,
  [SMALL_STATE(32)] = 1009,
  [SMALL_STATE(33)] = 1045,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1101,
  [SMALL_STATE(36)] = 1137,
  [SMALL_STATE(37)] = 1173,
  [SMALL_STATE(38)] = 1191,
  [SMALL_STATE(39)] = 1227,
  [SMALL_STATE(40)] = 1247,
  [SMALL_STATE(41)] = 1283,
  [SMALL_STATE(42)] = 1319,
  [SMALL_STATE(43)] = 1355,
  [SMALL_STATE(44)] = 1391,
  [SMALL_STATE(45)] = 1427,
  [SMALL_STATE(46)] = 1463,
  [SMALL_STATE(47)] = 1483,
  [SMALL_STATE(48)] = 1500,
  [SMALL_STATE(49)] = 1519,
  [SMALL_STATE(50)] = 1540,
  [SMALL_STATE(51)] = 1557,
  [SMALL_STATE(52)] = 1574,
  [SMALL_STATE(53)] = 1604,
  [SMALL_STATE(54)] = 1622,
  [SMALL_STATE(55)] = 1640,
  [SMALL_STATE(56)] = 1658,
  [SMALL_STATE(57)] = 1688,
  [SMALL_STATE(58)] = 1713,
  [SMALL_STATE(59)] = 1738,
  [SMALL_STATE(60)] = 1765,
  [SMALL_STATE(61)] = 1781,
  [SMALL_STATE(62)] = 1797,
  [SMALL_STATE(63)] = 1813,
  [SMALL_STATE(64)] = 1829,
  [SMALL_STATE(65)] = 1845,
  [SMALL_STATE(66)] = 1869,
  [SMALL_STATE(67)] = 1891,
  [SMALL_STATE(68)] = 1907,
  [SMALL_STATE(69)] = 1923,
  [SMALL_STATE(70)] = 1947,
  [SMALL_STATE(71)] = 1963,
  [SMALL_STATE(72)] = 1979,
  [SMALL_STATE(73)] = 1995,
  [SMALL_STATE(74)] = 2011,
  [SMALL_STATE(75)] = 2035,
  [SMALL_STATE(76)] = 2051,
  [SMALL_STATE(77)] = 2067,
  [SMALL_STATE(78)] = 2083,
  [SMALL_STATE(79)] = 2099,
  [SMALL_STATE(80)] = 2115,
  [SMALL_STATE(81)] = 2131,
  [SMALL_STATE(82)] = 2150,
  [SMALL_STATE(83)] = 2165,
  [SMALL_STATE(84)] = 2183,
  [SMALL_STATE(85)] = 2201,
  [SMALL_STATE(86)] = 2219,
  [SMALL_STATE(87)] = 2233,
  [SMALL_STATE(88)] = 2247,
  [SMALL_STATE(89)] = 2265,
  [SMALL_STATE(90)] = 2280,
  [SMALL_STATE(91)] = 2295,
  [SMALL_STATE(92)] = 2314,
  [SMALL_STATE(93)] = 2325,
  [SMALL_STATE(94)] = 2336,
  [SMALL_STATE(95)] = 2348,
  [SMALL_STATE(96)] = 2360,
  [SMALL_STATE(97)] = 2372,
  [SMALL_STATE(98)] = 2384,
  [SMALL_STATE(99)] = 2395,
  [SMALL_STATE(100)] = 2404,
  [SMALL_STATE(101)] = 2413,
  [SMALL_STATE(102)] = 2426,
  [SMALL_STATE(103)] = 2439,
  [SMALL_STATE(104)] = 2450,
  [SMALL_STATE(105)] = 2463,
  [SMALL_STATE(106)] = 2474,
  [SMALL_STATE(107)] = 2487,
  [SMALL_STATE(108)] = 2500,
  [SMALL_STATE(109)] = 2513,
  [SMALL_STATE(110)] = 2522,
  [SMALL_STATE(111)] = 2533,
  [SMALL_STATE(112)] = 2546,
  [SMALL_STATE(113)] = 2555,
  [SMALL_STATE(114)] = 2568,
  [SMALL_STATE(115)] = 2581,
  [SMALL_STATE(116)] = 2589,
  [SMALL_STATE(117)] = 2599,
  [SMALL_STATE(118)] = 2607,
  [SMALL_STATE(119)] = 2615,
  [SMALL_STATE(120)] = 2623,
  [SMALL_STATE(121)] = 2633,
  [SMALL_STATE(122)] = 2641,
  [SMALL_STATE(123)] = 2651,
  [SMALL_STATE(124)] = 2659,
  [SMALL_STATE(125)] = 2666,
  [SMALL_STATE(126)] = 2673,
  [SMALL_STATE(127)] = 2680,
  [SMALL_STATE(128)] = 2687,
  [SMALL_STATE(129)] = 2694,
  [SMALL_STATE(130)] = 2701,
  [SMALL_STATE(131)] = 2708,
  [SMALL_STATE(132)] = 2715,
  [SMALL_STATE(133)] = 2722,
  [SMALL_STATE(134)] = 2729,
  [SMALL_STATE(135)] = 2736,
  [SMALL_STATE(136)] = 2743,
  [SMALL_STATE(137)] = 2750,
  [SMALL_STATE(138)] = 2757,
  [SMALL_STATE(139)] = 2764,
  [SMALL_STATE(140)] = 2771,
  [SMALL_STATE(141)] = 2778,
  [SMALL_STATE(142)] = 2785,
  [SMALL_STATE(143)] = 2792,
  [SMALL_STATE(144)] = 2799,
  [SMALL_STATE(145)] = 2806,
  [SMALL_STATE(146)] = 2813,
  [SMALL_STATE(147)] = 2820,
  [SMALL_STATE(148)] = 2827,
  [SMALL_STATE(149)] = 2834,
  [SMALL_STATE(150)] = 2841,
  [SMALL_STATE(151)] = 2848,
  [SMALL_STATE(152)] = 2855,
  [SMALL_STATE(153)] = 2862,
  [SMALL_STATE(154)] = 2869,
  [SMALL_STATE(155)] = 2876,
  [SMALL_STATE(156)] = 2883,
  [SMALL_STATE(157)] = 2890,
  [SMALL_STATE(158)] = 2897,
  [SMALL_STATE(159)] = 2904,
  [SMALL_STATE(160)] = 2911,
  [SMALL_STATE(161)] = 2918,
  [SMALL_STATE(162)] = 2925,
  [SMALL_STATE(163)] = 2932,
  [SMALL_STATE(164)] = 2939,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(23),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(45),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(39),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(39),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(48),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(33),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(131),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(53),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 3),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(34),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(96),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(105),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(146),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(87),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(34),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(105),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(89),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [435] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
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
