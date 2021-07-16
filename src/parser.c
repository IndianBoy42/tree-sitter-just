#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 169
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_alias = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_export = 5,
  anon_sym_set = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_if = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_else = 15,
  anon_sym_PLUS = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_AT = 21,
  anon_sym_COLON = 22,
  anon_sym_ = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_EQ = 25,
  anon_sym_STAR = 26,
  anon_sym_POUND_BANG = 27,
  anon_sym_LBRACE_LBRACE = 28,
  anon_sym_RBRACE_RBRACE = 29,
  sym_BACKTICK = 30,
  sym_INDENTED_BACKTICK = 31,
  sym_NAME = 32,
  sym_RAW_STRING = 33,
  sym_INDENTED_RAW_STRING = 34,
  sym_STRING = 35,
  sym_INDENTED_STRING = 36,
  sym_TEXT = 37,
  sym_INDENT = 38,
  sym_DEDENT = 39,
  sym_NEWLINE = 40,
  sym_LINE = 41,
  sym_source_file = 42,
  sym_item = 43,
  sym_eol = 44,
  sym_comment = 45,
  sym_alias = 46,
  sym_assignment = 47,
  sym_export = 48,
  sym_setting = 49,
  sym_boolean = 50,
  sym_settinglist = 51,
  sym_stringlist = 52,
  sym_expression = 53,
  sym_condition = 54,
  sym_value = 55,
  sym_call = 56,
  sym_cmd = 57,
  sym_string = 58,
  sym_sequence = 59,
  sym_recipe = 60,
  sym_recipeheader = 61,
  sym_parameters = 62,
  sym_parameter = 63,
  sym_variadic_parameters = 64,
  sym_dependencies = 65,
  sym_dependency = 66,
  sym_depcall = 67,
  sym_body = 68,
  sym_shebang = 69,
  sym_line = 70,
  sym_text = 71,
  sym_interpolation = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_stringlist_repeat1 = 74,
  aux_sym_parameters_repeat1 = 75,
  aux_sym_dependencies_repeat1 = 76,
  aux_sym_depcall_repeat1 = 77,
  aux_sym_body_repeat1 = 78,
  aux_sym_line_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [anon_sym_set] = "set",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
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
  [sym_settinglist] = "settinglist",
  [sym_stringlist] = "stringlist",
  [sym_expression] = "expression",
  [sym_condition] = "condition",
  [sym_value] = "value",
  [sym_call] = "call",
  [sym_cmd] = "cmd",
  [sym_string] = "string",
  [sym_sequence] = "sequence",
  [sym_recipe] = "recipe",
  [sym_recipeheader] = "recipeheader",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_variadic_parameters] = "variadic_parameters",
  [sym_dependencies] = "dependencies",
  [sym_dependency] = "dependency",
  [sym_depcall] = "depcall",
  [sym_body] = "body",
  [sym_shebang] = "shebang",
  [sym_line] = "line",
  [sym_text] = "text",
  [sym_interpolation] = "interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_stringlist_repeat1] = "stringlist_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_dependencies_repeat1] = "dependencies_repeat1",
  [aux_sym_depcall_repeat1] = "depcall_repeat1",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_settinglist] = sym_settinglist,
  [sym_stringlist] = sym_stringlist,
  [sym_expression] = sym_expression,
  [sym_condition] = sym_condition,
  [sym_value] = sym_value,
  [sym_call] = sym_call,
  [sym_cmd] = sym_cmd,
  [sym_string] = sym_string,
  [sym_sequence] = sym_sequence,
  [sym_recipe] = sym_recipe,
  [sym_recipeheader] = sym_recipeheader,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_variadic_parameters] = sym_variadic_parameters,
  [sym_dependencies] = sym_dependencies,
  [sym_dependency] = sym_dependency,
  [sym_depcall] = sym_depcall,
  [sym_body] = sym_body,
  [sym_shebang] = sym_shebang,
  [sym_line] = sym_line,
  [sym_text] = sym_text,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_stringlist_repeat1] = aux_sym_stringlist_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_dependencies_repeat1] = aux_sym_dependencies_repeat1,
  [aux_sym_depcall_repeat1] = aux_sym_depcall_repeat1,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_settinglist] = {
    .visible = true,
    .named = true,
  },
  [sym_stringlist] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
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
  [sym_recipeheader] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
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
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_depcall] = {
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
  [aux_sym_stringlist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependencies_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_depcall_repeat1] = {
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

enum {
  field_else = 1,
  field_if = 2,
  field_left = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_else] = "else",
  [field_if] = "if",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 1},
    {field_right, 3},
  [2] =
    {field_right, 2},
    {field_right, 3},
  [4] =
    {field_else, 7},
    {field_if, 3},
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
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '`') ADVANCE(77);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(76);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(75);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(22);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '!') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 37, .external_lex_state = 2},
  [2] = {.lex_state = 37, .external_lex_state = 2},
  [3] = {.lex_state = 37, .external_lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 37, .external_lex_state = 3},
  [50] = {.lex_state = 10, .external_lex_state = 2},
  [51] = {.lex_state = 35, .external_lex_state = 4},
  [52] = {.lex_state = 35, .external_lex_state = 4},
  [53] = {.lex_state = 35, .external_lex_state = 4},
  [54] = {.lex_state = 37, .external_lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 37, .external_lex_state = 2},
  [57] = {.lex_state = 37, .external_lex_state = 2},
  [58] = {.lex_state = 37, .external_lex_state = 2},
  [59] = {.lex_state = 37, .external_lex_state = 2},
  [60] = {.lex_state = 37, .external_lex_state = 2},
  [61] = {.lex_state = 37, .external_lex_state = 2},
  [62] = {.lex_state = 37, .external_lex_state = 2},
  [63] = {.lex_state = 37, .external_lex_state = 2},
  [64] = {.lex_state = 37, .external_lex_state = 2},
  [65] = {.lex_state = 37, .external_lex_state = 2},
  [66] = {.lex_state = 35, .external_lex_state = 2},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2, .external_lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 35, .external_lex_state = 2},
  [80] = {.lex_state = 2, .external_lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 2, .external_lex_state = 2},
  [84] = {.lex_state = 35, .external_lex_state = 2},
  [85] = {.lex_state = 2, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 2, .external_lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 35, .external_lex_state = 4},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 35, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 35, .external_lex_state = 2},
  [98] = {.lex_state = 35, .external_lex_state = 2},
  [99] = {.lex_state = 2, .external_lex_state = 2},
  [100] = {.lex_state = 2, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 35, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 40},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 40},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 37},
  [166] = {.lex_state = 37},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 2},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(156),
    [sym_item] = STATE(2),
    [sym_eol] = STATE(59),
    [sym_comment] = STATE(56),
    [sym_alias] = STATE(59),
    [sym_assignment] = STATE(59),
    [sym_export] = STATE(59),
    [sym_setting] = STATE(59),
    [sym_recipe] = STATE(59),
    [sym_recipeheader] = STATE(155),
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
  [0] = 12,
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
    STATE(56), 1,
      sym_comment,
    STATE(155), 1,
      sym_recipeheader,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(59), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [43] = 12,
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
    STATE(56), 1,
      sym_comment,
    STATE(155), 1,
      sym_recipeheader,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(59), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [86] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(54), 1,
      sym_NAME,
    STATE(44), 1,
      sym_value,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [125] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(54), 1,
      sym_NAME,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_value,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(4), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [164] = 12,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(115), 1,
      sym_expression,
    STATE(122), 1,
      sym_sequence,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [205] = 12,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_value,
    STATE(115), 1,
      sym_expression,
    STATE(124), 1,
      sym_sequence,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [246] = 11,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      sym_BACKTICK,
    ACTIONS(89), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(92), 1,
      sym_NAME,
    STATE(44), 1,
      sym_value,
    ACTIONS(95), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(98), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [285] = 2,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(101), 14,
      anon_sym_RBRACK,
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
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [306] = 12,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_value,
    STATE(115), 1,
      sym_expression,
    STATE(151), 1,
      sym_sequence,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [347] = 12,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_value,
    STATE(115), 1,
      sym_expression,
    STATE(146), 1,
      sym_sequence,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [388] = 2,
    ACTIONS(111), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(109), 10,
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
  [408] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(112), 1,
      sym_expression,
    STATE(166), 1,
      sym_condition,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [446] = 2,
    ACTIONS(115), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(113), 10,
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
  [466] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(112), 1,
      sym_expression,
    STATE(142), 1,
      sym_condition,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [504] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(112), 1,
      sym_expression,
    STATE(165), 1,
      sym_condition,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [542] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(162), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [577] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(148), 1,
      sym_expression,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [612] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(139), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [647] = 10,
    ACTIONS(121), 1,
      anon_sym_if,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_BACKTICK,
    ACTIONS(127), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(129), 1,
      sym_NAME,
    STATE(96), 1,
      sym_expression,
    STATE(105), 1,
      sym_value,
    ACTIONS(131), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(133), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(110), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [682] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(149), 1,
      sym_expression,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [717] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(126), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [752] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(147), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [787] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(140), 1,
      sym_expression,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [822] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(145), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [857] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(167), 1,
      sym_expression,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [892] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(12), 1,
      sym_expression,
    STATE(67), 1,
      sym_value,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [927] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(54), 1,
      sym_NAME,
    STATE(12), 1,
      sym_expression,
    STATE(44), 1,
      sym_value,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [962] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(152), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [997] = 10,
    ACTIONS(121), 1,
      anon_sym_if,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_BACKTICK,
    ACTIONS(127), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(129), 1,
      sym_NAME,
    STATE(105), 1,
      sym_value,
    STATE(118), 1,
      sym_expression,
    ACTIONS(131), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(133), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(110), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1032] = 10,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      sym_NAME,
    STATE(111), 1,
      sym_value,
    STATE(161), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1067] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(70), 1,
      sym_NAME,
    STATE(67), 1,
      sym_value,
    STATE(144), 1,
      sym_expression,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1102] = 2,
    ACTIONS(135), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(137), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1119] = 2,
    ACTIONS(103), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(101), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1136] = 8,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(89), 1,
      sym_value,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1165] = 2,
    ACTIONS(141), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(143), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1182] = 2,
    ACTIONS(145), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(147), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1199] = 2,
    ACTIONS(149), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(151), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1216] = 8,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(68), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(91), 1,
      sym_value,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(42), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1245] = 2,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 11,
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
  [1262] = 2,
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
  [1279] = 1,
    ACTIONS(147), 11,
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
  [1293] = 1,
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
  [1307] = 3,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(159), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(163), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1325] = 1,
    ACTIONS(151), 11,
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
  [1339] = 1,
    ACTIONS(143), 11,
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
  [1353] = 1,
    ACTIONS(137), 11,
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
  [1367] = 2,
    ACTIONS(145), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(147), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1383] = 4,
    ACTIONS(169), 1,
      sym_INDENT,
    STATE(63), 1,
      sym_body,
    ACTIONS(165), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(167), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1402] = 7,
    ACTIONS(171), 1,
      anon_sym_POUND_BANG,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      sym_TEXT,
    ACTIONS(177), 1,
      sym_NEWLINE,
    STATE(66), 1,
      sym_shebang,
    STATE(51), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(79), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1427] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      sym_TEXT,
    ACTIONS(177), 1,
      sym_NEWLINE,
    ACTIONS(179), 1,
      sym_DEDENT,
    STATE(53), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(79), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1449] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      sym_TEXT,
    ACTIONS(177), 1,
      sym_NEWLINE,
    ACTIONS(181), 1,
      sym_DEDENT,
    STATE(53), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(79), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1471] = 6,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(186), 1,
      sym_TEXT,
    ACTIONS(189), 1,
      sym_DEDENT,
    ACTIONS(191), 1,
      sym_NEWLINE,
    STATE(53), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(79), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1493] = 2,
    ACTIONS(194), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(196), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1506] = 6,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_NAME,
    STATE(127), 1,
      sym_variadic_parameters,
    ACTIONS(198), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(69), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1527] = 2,
    ACTIONS(206), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(208), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1540] = 2,
    ACTIONS(210), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(212), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1553] = 2,
    ACTIONS(214), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(216), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1566] = 2,
    ACTIONS(218), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(220), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1579] = 2,
    ACTIONS(222), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(224), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1592] = 2,
    ACTIONS(226), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(228), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1605] = 2,
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
  [1618] = 2,
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
  [1631] = 2,
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
  [1644] = 2,
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
  [1657] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      sym_TEXT,
    ACTIONS(177), 1,
      sym_NEWLINE,
    STATE(52), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(79), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1676] = 2,
    ACTIONS(246), 1,
      anon_sym_PLUS,
    ACTIONS(163), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [1688] = 6,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(254), 1,
      sym_NEWLINE,
    STATE(120), 1,
      sym_dependencies,
    STATE(88), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1708] = 4,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      sym_NAME,
    STATE(69), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(256), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1724] = 5,
    STATE(75), 1,
      aux_sym_stringlist_repeat1,
    STATE(81), 1,
      sym_string,
    STATE(136), 1,
      sym_stringlist,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1742] = 6,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(266), 1,
      sym_NEWLINE,
    STATE(131), 1,
      sym_dependencies,
    STATE(88), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1762] = 6,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(270), 1,
      sym_NEWLINE,
    STATE(130), 1,
      sym_dependencies,
    STATE(88), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1782] = 5,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_stringlist_repeat1,
    STATE(81), 1,
      sym_string,
    ACTIONS(274), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(277), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1800] = 6,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_NAME,
    ACTIONS(280), 1,
      anon_sym_COLON_EQ,
    ACTIONS(282), 1,
      anon_sym_COLON,
    STATE(138), 1,
      sym_parameters,
    STATE(55), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1820] = 5,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_stringlist_repeat1,
    STATE(81), 1,
      sym_string,
    ACTIONS(72), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1838] = 5,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_NAME,
    ACTIONS(290), 1,
      sym_NEWLINE,
    STATE(133), 1,
      sym_dependencies,
    STATE(88), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1855] = 5,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_NAME,
    ACTIONS(292), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_parameters,
    STATE(55), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1872] = 2,
    ACTIONS(296), 1,
      anon_sym_EQ,
    ACTIONS(294), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1883] = 4,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      sym_TEXT,
    ACTIONS(298), 1,
      sym_NEWLINE,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1898] = 5,
    ACTIONS(254), 1,
      sym_NEWLINE,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_NAME,
    STATE(120), 1,
      sym_dependencies,
    STATE(88), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1915] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(300), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1928] = 2,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(306), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1939] = 5,
    ACTIONS(266), 1,
      sym_NEWLINE,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_NAME,
    STATE(131), 1,
      sym_dependencies,
    STATE(88), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1956] = 4,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_TEXT,
    ACTIONS(316), 1,
      sym_NEWLINE,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1971] = 4,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      sym_NAME,
    ACTIONS(324), 1,
      sym_NEWLINE,
    STATE(85), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1985] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(326), 1,
      anon_sym_COLON_EQ,
    STATE(56), 1,
      sym_comment,
    STATE(65), 1,
      sym_eol,
  [2001] = 3,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
      sym_boolean,
      sym_settinglist,
  [2013] = 4,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_NAME,
    ACTIONS(332), 1,
      sym_NEWLINE,
    STATE(85), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2027] = 1,
    ACTIONS(334), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2035] = 2,
    ACTIONS(336), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(272), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2045] = 1,
    ACTIONS(338), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2053] = 2,
    ACTIONS(340), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
    ACTIONS(342), 2,
      sym_DEDENT,
      sym_NEWLINE,
  [2062] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(56), 1,
      sym_comment,
    STATE(58), 1,
      sym_eol,
  [2075] = 2,
    ACTIONS(344), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
    ACTIONS(346), 2,
      sym_DEDENT,
      sym_NEWLINE,
  [2084] = 2,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2093] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(56), 1,
      sym_comment,
    STATE(64), 1,
      sym_eol,
  [2106] = 2,
    ACTIONS(352), 1,
      sym_NEWLINE,
    ACTIONS(350), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2114] = 2,
    ACTIONS(356), 1,
      sym_NEWLINE,
    ACTIONS(354), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2122] = 1,
    ACTIONS(358), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2128] = 1,
    ACTIONS(360), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2134] = 1,
    ACTIONS(151), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2140] = 1,
    ACTIONS(101), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2146] = 2,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_PLUS,
  [2154] = 2,
    ACTIONS(366), 1,
      sym_NEWLINE,
    ACTIONS(364), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2162] = 2,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2170] = 1,
    ACTIONS(137), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2176] = 1,
    ACTIONS(143), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2182] = 1,
    ACTIONS(157), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2188] = 3,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      sym_NAME,
    STATE(128), 1,
      sym_parameter,
  [2198] = 1,
    ACTIONS(147), 3,
      sym_NEWLINE,
      anon_sym_POUND,
      anon_sym_PLUS,
  [2204] = 2,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      anon_sym_PLUS,
  [2211] = 1,
    ACTIONS(372), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2216] = 2,
    ACTIONS(374), 1,
      sym_NAME,
    STATE(132), 1,
      sym_depcall,
  [2223] = 1,
    ACTIONS(376), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2228] = 2,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [2235] = 2,
    ACTIONS(382), 1,
      sym_NAME,
    STATE(57), 1,
      sym_assignment,
  [2242] = 1,
    ACTIONS(384), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2247] = 1,
    ACTIONS(109), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2252] = 1,
    ACTIONS(113), 2,
      sym_NEWLINE,
      anon_sym_POUND,
  [2257] = 1,
    ACTIONS(266), 1,
      sym_NEWLINE,
  [2261] = 1,
    ACTIONS(386), 1,
      aux_sym_comment_token1,
  [2265] = 1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [2269] = 1,
    ACTIONS(390), 1,
      anon_sym_else,
  [2273] = 1,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [2277] = 1,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [2281] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [2285] = 1,
    ACTIONS(398), 1,
      anon_sym_COLON,
  [2289] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [2293] = 1,
    ACTIONS(402), 1,
      aux_sym_comment_token1,
  [2297] = 1,
    ACTIONS(254), 1,
      sym_NEWLINE,
  [2301] = 1,
    ACTIONS(290), 1,
      sym_NEWLINE,
  [2305] = 1,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [2309] = 1,
    ACTIONS(406), 1,
      sym_NEWLINE,
  [2313] = 1,
    ACTIONS(408), 1,
      sym_NEWLINE,
  [2317] = 1,
    ACTIONS(410), 1,
      anon_sym_COLON,
  [2321] = 1,
    ACTIONS(412), 1,
      anon_sym_RBRACK,
  [2325] = 1,
    ACTIONS(414), 1,
      sym_NAME,
  [2329] = 1,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [2333] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
  [2337] = 1,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
  [2341] = 1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
  [2345] = 1,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
  [2349] = 1,
    ACTIONS(420), 1,
      sym_NAME,
  [2353] = 1,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [2357] = 1,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [2361] = 1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [2365] = 1,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [2369] = 1,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2373] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [2377] = 1,
    ACTIONS(280), 1,
      anon_sym_COLON_EQ,
  [2381] = 1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [2385] = 1,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
  [2389] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON_EQ,
  [2393] = 1,
    ACTIONS(440), 1,
      sym_NEWLINE,
  [2397] = 1,
    ACTIONS(442), 1,
      sym_NEWLINE,
  [2401] = 1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
  [2405] = 1,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
  [2409] = 1,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
  [2413] = 1,
    ACTIONS(450), 1,
      anon_sym_else,
  [2417] = 1,
    ACTIONS(452), 1,
      anon_sym_else,
  [2421] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [2425] = 1,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
  [2429] = 1,
    ACTIONS(458), 1,
      sym_NAME,
  [2433] = 1,
    ACTIONS(460), 1,
      sym_NAME,
  [2437] = 1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [2441] = 1,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [2445] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE_RBRACE,
  [2449] = 1,
    ACTIONS(468), 1,
      sym_NAME,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 347,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 446,
  [SMALL_STATE(15)] = 466,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 577,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 647,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 717,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 787,
  [SMALL_STATE(25)] = 822,
  [SMALL_STATE(26)] = 857,
  [SMALL_STATE(27)] = 892,
  [SMALL_STATE(28)] = 927,
  [SMALL_STATE(29)] = 962,
  [SMALL_STATE(30)] = 997,
  [SMALL_STATE(31)] = 1032,
  [SMALL_STATE(32)] = 1067,
  [SMALL_STATE(33)] = 1102,
  [SMALL_STATE(34)] = 1119,
  [SMALL_STATE(35)] = 1136,
  [SMALL_STATE(36)] = 1165,
  [SMALL_STATE(37)] = 1182,
  [SMALL_STATE(38)] = 1199,
  [SMALL_STATE(39)] = 1216,
  [SMALL_STATE(40)] = 1245,
  [SMALL_STATE(41)] = 1262,
  [SMALL_STATE(42)] = 1279,
  [SMALL_STATE(43)] = 1293,
  [SMALL_STATE(44)] = 1307,
  [SMALL_STATE(45)] = 1325,
  [SMALL_STATE(46)] = 1339,
  [SMALL_STATE(47)] = 1353,
  [SMALL_STATE(48)] = 1367,
  [SMALL_STATE(49)] = 1383,
  [SMALL_STATE(50)] = 1402,
  [SMALL_STATE(51)] = 1427,
  [SMALL_STATE(52)] = 1449,
  [SMALL_STATE(53)] = 1471,
  [SMALL_STATE(54)] = 1493,
  [SMALL_STATE(55)] = 1506,
  [SMALL_STATE(56)] = 1527,
  [SMALL_STATE(57)] = 1540,
  [SMALL_STATE(58)] = 1553,
  [SMALL_STATE(59)] = 1566,
  [SMALL_STATE(60)] = 1579,
  [SMALL_STATE(61)] = 1592,
  [SMALL_STATE(62)] = 1605,
  [SMALL_STATE(63)] = 1618,
  [SMALL_STATE(64)] = 1631,
  [SMALL_STATE(65)] = 1644,
  [SMALL_STATE(66)] = 1657,
  [SMALL_STATE(67)] = 1676,
  [SMALL_STATE(68)] = 1688,
  [SMALL_STATE(69)] = 1708,
  [SMALL_STATE(70)] = 1724,
  [SMALL_STATE(71)] = 1742,
  [SMALL_STATE(72)] = 1762,
  [SMALL_STATE(73)] = 1782,
  [SMALL_STATE(74)] = 1800,
  [SMALL_STATE(75)] = 1820,
  [SMALL_STATE(76)] = 1838,
  [SMALL_STATE(77)] = 1855,
  [SMALL_STATE(78)] = 1872,
  [SMALL_STATE(79)] = 1883,
  [SMALL_STATE(80)] = 1898,
  [SMALL_STATE(81)] = 1915,
  [SMALL_STATE(82)] = 1928,
  [SMALL_STATE(83)] = 1939,
  [SMALL_STATE(84)] = 1956,
  [SMALL_STATE(85)] = 1971,
  [SMALL_STATE(86)] = 1985,
  [SMALL_STATE(87)] = 2001,
  [SMALL_STATE(88)] = 2013,
  [SMALL_STATE(89)] = 2027,
  [SMALL_STATE(90)] = 2035,
  [SMALL_STATE(91)] = 2045,
  [SMALL_STATE(92)] = 2053,
  [SMALL_STATE(93)] = 2062,
  [SMALL_STATE(94)] = 2075,
  [SMALL_STATE(95)] = 2084,
  [SMALL_STATE(96)] = 2093,
  [SMALL_STATE(97)] = 2106,
  [SMALL_STATE(98)] = 2114,
  [SMALL_STATE(99)] = 2122,
  [SMALL_STATE(100)] = 2128,
  [SMALL_STATE(101)] = 2134,
  [SMALL_STATE(102)] = 2140,
  [SMALL_STATE(103)] = 2146,
  [SMALL_STATE(104)] = 2154,
  [SMALL_STATE(105)] = 2162,
  [SMALL_STATE(106)] = 2170,
  [SMALL_STATE(107)] = 2176,
  [SMALL_STATE(108)] = 2182,
  [SMALL_STATE(109)] = 2188,
  [SMALL_STATE(110)] = 2198,
  [SMALL_STATE(111)] = 2204,
  [SMALL_STATE(112)] = 2211,
  [SMALL_STATE(113)] = 2216,
  [SMALL_STATE(114)] = 2223,
  [SMALL_STATE(115)] = 2228,
  [SMALL_STATE(116)] = 2235,
  [SMALL_STATE(117)] = 2242,
  [SMALL_STATE(118)] = 2247,
  [SMALL_STATE(119)] = 2252,
  [SMALL_STATE(120)] = 2257,
  [SMALL_STATE(121)] = 2261,
  [SMALL_STATE(122)] = 2265,
  [SMALL_STATE(123)] = 2269,
  [SMALL_STATE(124)] = 2273,
  [SMALL_STATE(125)] = 2277,
  [SMALL_STATE(126)] = 2281,
  [SMALL_STATE(127)] = 2285,
  [SMALL_STATE(128)] = 2289,
  [SMALL_STATE(129)] = 2293,
  [SMALL_STATE(130)] = 2297,
  [SMALL_STATE(131)] = 2301,
  [SMALL_STATE(132)] = 2305,
  [SMALL_STATE(133)] = 2309,
  [SMALL_STATE(134)] = 2313,
  [SMALL_STATE(135)] = 2317,
  [SMALL_STATE(136)] = 2321,
  [SMALL_STATE(137)] = 2325,
  [SMALL_STATE(138)] = 2329,
  [SMALL_STATE(139)] = 2333,
  [SMALL_STATE(140)] = 2337,
  [SMALL_STATE(141)] = 2341,
  [SMALL_STATE(142)] = 2345,
  [SMALL_STATE(143)] = 2349,
  [SMALL_STATE(144)] = 2353,
  [SMALL_STATE(145)] = 2357,
  [SMALL_STATE(146)] = 2361,
  [SMALL_STATE(147)] = 2365,
  [SMALL_STATE(148)] = 2369,
  [SMALL_STATE(149)] = 2373,
  [SMALL_STATE(150)] = 2377,
  [SMALL_STATE(151)] = 2381,
  [SMALL_STATE(152)] = 2385,
  [SMALL_STATE(153)] = 2389,
  [SMALL_STATE(154)] = 2393,
  [SMALL_STATE(155)] = 2397,
  [SMALL_STATE(156)] = 2401,
  [SMALL_STATE(157)] = 2405,
  [SMALL_STATE(158)] = 2409,
  [SMALL_STATE(159)] = 2413,
  [SMALL_STATE(160)] = 2417,
  [SMALL_STATE(161)] = 2421,
  [SMALL_STATE(162)] = 2425,
  [SMALL_STATE(163)] = 2429,
  [SMALL_STATE(164)] = 2433,
  [SMALL_STATE(165)] = 2437,
  [SMALL_STATE(166)] = 2441,
  [SMALL_STATE(167)] = 2445,
  [SMALL_STATE(168)] = 2449,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(48),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(34),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(26),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(104),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(94),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(143),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(78),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(9),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(9),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlist, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(26),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(104),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(113),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(100),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settinglist, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [444] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
