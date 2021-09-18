#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_alias = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_export = 3,
  anon_sym_set = 4,
  anon_sym_shell = 5,
  anon_sym_LBRACK = 6,
  anon_sym_DQUOTE = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
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
  aux_sym_shebang_token1 = 28,
  anon_sym_SLASHusr_SLASHbin_SLASHenv = 29,
  sym_notcomment = 30,
  aux_sym_comment_token1 = 31,
  aux_sym_comment_token2 = 32,
  sym_notinterpolation = 33,
  anon_sym_LBRACE_LBRACE = 34,
  anon_sym_RBRACE_RBRACE = 35,
  sym_BACKTICK = 36,
  sym_INDENTED_BACKTICK = 37,
  sym_NAME = 38,
  sym_RAW_STRING = 39,
  sym_INDENTED_RAW_STRING = 40,
  sym_STRING = 41,
  sym_INDENTED_STRING = 42,
  sym_TEXT = 43,
  sym_INDENT = 44,
  sym_DEDENT = 45,
  sym_NEWLINE = 46,
  sym_LINE = 47,
  sym_source_file = 48,
  sym_item = 49,
  sym_eol = 50,
  sym_alias = 51,
  sym_assignment = 52,
  sym_export = 53,
  sym_setting = 54,
  sym_boolean = 55,
  sym_settinglist = 56,
  sym_stringlist = 57,
  sym_expression = 58,
  sym_condition = 59,
  sym_value = 60,
  sym_call = 61,
  sym_cmd = 62,
  sym_string = 63,
  sym_sequence = 64,
  sym_recipe = 65,
  sym_recipeheader = 66,
  sym_parameters = 67,
  sym_parameter = 68,
  sym_variadic_parameters = 69,
  sym_dependencies = 70,
  sym_dependency = 71,
  sym_depcall = 72,
  sym_body = 73,
  sym_shebang_recipe = 74,
  sym_shebang_body = 75,
  sym_shebang = 76,
  sym_recipe_body = 77,
  sym_line = 78,
  sym_recipeline = 79,
  sym_comment = 80,
  sym_interpolation = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_setting_repeat1 = 83,
  aux_sym_stringlist_repeat1 = 84,
  aux_sym_parameters_repeat1 = 85,
  aux_sym_dependencies_repeat1 = 86,
  aux_sym_depcall_repeat1 = 87,
  aux_sym_shebang_body_repeat1 = 88,
  aux_sym_recipeline_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [anon_sym_set] = "set",
  [anon_sym_shell] = "shell",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DQUOTE] = "\"",
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
  [aux_sym_shebang_token1] = "shebang_token1",
  [anon_sym_SLASHusr_SLASHbin_SLASHenv] = "/usr/bin/env",
  [sym_notcomment] = "notcomment",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_notinterpolation] = "notinterpolation",
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
  [sym_shebang_recipe] = "shebang_recipe",
  [sym_shebang_body] = "shebang_body",
  [sym_shebang] = "shebang",
  [sym_recipe_body] = "recipe_body",
  [sym_line] = "line",
  [sym_recipeline] = "recipeline",
  [sym_comment] = "comment",
  [sym_interpolation] = "interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_setting_repeat1] = "setting_repeat1",
  [aux_sym_stringlist_repeat1] = "stringlist_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_dependencies_repeat1] = "dependencies_repeat1",
  [aux_sym_depcall_repeat1] = "depcall_repeat1",
  [aux_sym_shebang_body_repeat1] = "shebang_body_repeat1",
  [aux_sym_recipeline_repeat1] = "recipeline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
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
  [aux_sym_shebang_token1] = aux_sym_shebang_token1,
  [anon_sym_SLASHusr_SLASHbin_SLASHenv] = anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [sym_notcomment] = sym_notcomment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_notinterpolation] = sym_notinterpolation,
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
  [sym_shebang_recipe] = sym_shebang_recipe,
  [sym_shebang_body] = sym_shebang_body,
  [sym_shebang] = sym_shebang,
  [sym_recipe_body] = sym_recipe_body,
  [sym_line] = sym_line,
  [sym_recipeline] = sym_recipeline,
  [sym_comment] = sym_comment,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_setting_repeat1] = aux_sym_setting_repeat1,
  [aux_sym_stringlist_repeat1] = aux_sym_stringlist_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_dependencies_repeat1] = aux_sym_dependencies_repeat1,
  [aux_sym_depcall_repeat1] = aux_sym_depcall_repeat1,
  [aux_sym_shebang_body_repeat1] = aux_sym_shebang_body_repeat1,
  [aux_sym_recipeline_repeat1] = aux_sym_recipeline_repeat1,
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
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [aux_sym_shebang_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHusr_SLASHbin_SLASHenv] = {
    .visible = true,
    .named = false,
  },
  [sym_notcomment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_notinterpolation] = {
    .visible = true,
    .named = true,
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
  [sym_shebang_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang_body] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_body] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_recipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_shebang_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_else = 1,
  field_if = 2,
  field_interpreter = 3,
  field_lang = 4,
  field_left = 5,
  field_name = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_else] = "else",
  [field_if] = "if",
  [field_interpreter] = "interpreter",
  [field_lang] = "lang",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_left, 1},
    {field_right, 3},
  [3] =
    {field_name, 1},
    {field_right, 2},
    {field_right, 3},
  [6] =
    {field_interpreter, 2},
  [7] =
    {field_lang, 5},
  [8] =
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
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(97);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(112);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(111);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == '}') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(105);
      END_STATE();
    case 61:
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 62:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(109);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_notcomment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_notinterpolation);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(32);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'x') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(13);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 61, .external_lex_state = 2},
  [2] = {.lex_state = 63, .external_lex_state = 2},
  [3] = {.lex_state = 63, .external_lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 10, .external_lex_state = 3},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 63, .external_lex_state = 4},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 10, .external_lex_state = 3},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10, .external_lex_state = 3},
  [57] = {.lex_state = 10, .external_lex_state = 3},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 63, .external_lex_state = 2},
  [60] = {.lex_state = 63, .external_lex_state = 2},
  [61] = {.lex_state = 63, .external_lex_state = 2},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 63, .external_lex_state = 2},
  [64] = {.lex_state = 63, .external_lex_state = 2},
  [65] = {.lex_state = 61},
  [66] = {.lex_state = 63, .external_lex_state = 2},
  [67] = {.lex_state = 63, .external_lex_state = 2},
  [68] = {.lex_state = 63, .external_lex_state = 2},
  [69] = {.lex_state = 63, .external_lex_state = 2},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 63, .external_lex_state = 2},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 63, .external_lex_state = 2},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 63, .external_lex_state = 2},
  [76] = {.lex_state = 63, .external_lex_state = 2},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 2, .external_lex_state = 2},
  [81] = {.lex_state = 2, .external_lex_state = 2},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 62},
  [84] = {.lex_state = 61},
  [85] = {.lex_state = 61},
  [86] = {.lex_state = 2, .external_lex_state = 2},
  [87] = {.lex_state = 61},
  [88] = {.lex_state = 61},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62, .external_lex_state = 2},
  [96] = {.lex_state = 62, .external_lex_state = 2},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 61},
  [99] = {.lex_state = 62, .external_lex_state = 2},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 62, .external_lex_state = 2},
  [103] = {.lex_state = 62, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 56, .external_lex_state = 2},
  [107] = {.lex_state = 56, .external_lex_state = 2},
  [108] = {.lex_state = 61},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 61},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 56, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 10, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 10, .external_lex_state = 3},
  [118] = {.lex_state = 10, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 10, .external_lex_state = 3},
  [122] = {.lex_state = 62, .external_lex_state = 2},
  [123] = {.lex_state = 62},
  [124] = {.lex_state = 62, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 56, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 62},
  [137] = {.lex_state = 49},
  [138] = {.lex_state = 63},
  [139] = {.lex_state = 63},
  [140] = {.lex_state = 63},
  [141] = {.lex_state = 61},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 62},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 62},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 62},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 61},
  [159] = {.lex_state = 61},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 63},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 62},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 61},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 62},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 106},
  [189] = {.lex_state = 62},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 61},
  [195] = {.lex_state = 61},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 29},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 106},
  [201] = {.lex_state = 62},
  [202] = {.lex_state = 61},
  [203] = {.lex_state = 61},
  [204] = {.lex_state = 58},
  [205] = {.lex_state = 0, .external_lex_state = 3},
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
    [ts_external_token_DEDENT] = true,
  },
  [4] = {
    [ts_external_token_INDENT] = true,
    [ts_external_token_NEWLINE] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_SLASHusr_SLASHbin_SLASHenv] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [sym_BACKTICK] = ACTIONS(1),
    [sym_INDENTED_BACKTICK] = ACTIONS(1),
    [sym_NAME] = ACTIONS(1),
    [sym_RAW_STRING] = ACTIONS(1),
    [sym_INDENTED_RAW_STRING] = ACTIONS(1),
    [sym_INDENT] = ACTIONS(1),
    [sym_DEDENT] = ACTIONS(1),
    [sym_NEWLINE] = ACTIONS(1),
    [sym_LINE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(193),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(61),
    [sym_alias] = STATE(61),
    [sym_assignment] = STATE(61),
    [sym_export] = STATE(61),
    [sym_setting] = STATE(61),
    [sym_expression] = STATE(192),
    [sym_value] = STATE(62),
    [sym_call] = STATE(52),
    [sym_cmd] = STATE(52),
    [sym_string] = STATE(52),
    [sym_recipe] = STATE(61),
    [sym_recipeheader] = STATE(191),
    [sym_comment] = STATE(67),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_alias] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(17),
    [sym_BACKTICK] = ACTIONS(19),
    [sym_INDENTED_BACKTICK] = ACTIONS(21),
    [sym_NAME] = ACTIONS(23),
    [sym_RAW_STRING] = ACTIONS(25),
    [sym_INDENTED_RAW_STRING] = ACTIONS(27),
    [sym_STRING] = ACTIONS(25),
    [sym_INDENTED_STRING] = ACTIONS(27),
    [sym_NEWLINE] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_alias,
    ACTIONS(36), 1,
      anon_sym_export,
    ACTIONS(39), 1,
      anon_sym_set,
    ACTIONS(42), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(48), 1,
      sym_NAME,
    ACTIONS(51), 1,
      sym_NEWLINE,
    STATE(67), 1,
      sym_comment,
    STATE(191), 1,
      sym_recipeheader,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(61), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [43] = 12,
    ACTIONS(5), 1,
      anon_sym_alias,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_NEWLINE,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_NAME,
    STATE(67), 1,
      sym_comment,
    STATE(191), 1,
      sym_recipeheader,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(61), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [86] = 11,
    ACTIONS(58), 1,
      anon_sym_if,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_BACKTICK,
    ACTIONS(69), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(72), 1,
      sym_NAME,
    STATE(42), 1,
      sym_value,
    ACTIONS(75), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(78), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(4), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(45), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [125] = 11,
    ACTIONS(81), 1,
      anon_sym_if,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 1,
      sym_BACKTICK,
    ACTIONS(89), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(91), 1,
      sym_NAME,
    STATE(42), 1,
      sym_value,
    ACTIONS(93), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(95), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(9), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(45), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [164] = 12,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(146), 1,
      sym_expression,
    STATE(164), 1,
      sym_sequence,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [205] = 12,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_value,
    STATE(146), 1,
      sym_expression,
    STATE(154), 1,
      sym_sequence,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [246] = 12,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_value,
    STATE(146), 1,
      sym_expression,
    STATE(177), 1,
      sym_sequence,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [287] = 11,
    ACTIONS(81), 1,
      anon_sym_if,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      sym_BACKTICK,
    ACTIONS(89), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(91), 1,
      sym_NAME,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_value,
    ACTIONS(93), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(95), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(4), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(45), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [326] = 12,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_value,
    STATE(146), 1,
      sym_expression,
    STATE(183), 1,
      sym_sequence,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [367] = 11,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(141), 1,
      sym_expression,
    STATE(203), 1,
      sym_condition,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [405] = 11,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(141), 1,
      sym_expression,
    STATE(202), 1,
      sym_condition,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [443] = 11,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(141), 1,
      sym_expression,
    STATE(172), 1,
      sym_condition,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [481] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(179), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [516] = 10,
    ACTIONS(81), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_BACKTICK,
    ACTIONS(113), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(115), 1,
      sym_NAME,
    STATE(39), 1,
      sym_expression,
    STATE(138), 1,
      sym_value,
    ACTIONS(117), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(119), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(97), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [551] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(171), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [586] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(181), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [621] = 10,
    ACTIONS(81), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_BACKTICK,
    ACTIONS(113), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(115), 1,
      sym_NAME,
    STATE(138), 1,
      sym_value,
    STATE(162), 1,
      sym_expression,
    ACTIONS(117), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(119), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(97), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [656] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(84), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [691] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(173), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [726] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(199), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [761] = 2,
    ACTIONS(123), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(121), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [780] = 10,
    ACTIONS(81), 1,
      anon_sym_if,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      sym_BACKTICK,
    ACTIONS(89), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(91), 1,
      sym_NAME,
    STATE(39), 1,
      sym_expression,
    STATE(42), 1,
      sym_value,
    ACTIONS(93), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(95), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(45), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [815] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(169), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [850] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(198), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [885] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(157), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [920] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [955] = 10,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_BACKTICK,
    ACTIONS(131), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(133), 1,
      sym_NAME,
    STATE(130), 1,
      sym_value,
    STATE(144), 1,
      sym_expression,
    ACTIONS(135), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(137), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(129), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [990] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(185), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1025] = 10,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(99), 1,
      sym_NAME,
    STATE(62), 1,
      sym_value,
    STATE(184), 1,
      sym_expression,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1060] = 10,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_BACKTICK,
    ACTIONS(131), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(133), 1,
      sym_NAME,
    STATE(113), 1,
      sym_expression,
    STATE(130), 1,
      sym_value,
    ACTIONS(135), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(137), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(129), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1095] = 10,
    ACTIONS(139), 1,
      anon_sym_POUND_BANG,
    ACTIONS(141), 1,
      sym_notcomment,
    ACTIONS(143), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(147), 1,
      sym_DEDENT,
    STATE(55), 1,
      sym_shebang,
    STATE(112), 1,
      sym_interpolation,
    STATE(54), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(121), 2,
      sym_recipeline,
      sym_comment,
    STATE(205), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1129] = 8,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_BACKTICK,
    ACTIONS(113), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(149), 1,
      sym_NAME,
    STATE(109), 1,
      sym_value,
    ACTIONS(117), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(119), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(97), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1158] = 8,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(151), 1,
      sym_NAME,
    STATE(109), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1187] = 8,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_BACKTICK,
    ACTIONS(21), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(151), 1,
      sym_NAME,
    STATE(105), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(52), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1216] = 8,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_BACKTICK,
    ACTIONS(113), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(149), 1,
      sym_NAME,
    STATE(105), 1,
      sym_value,
    ACTIONS(117), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(119), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(97), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1245] = 2,
    ACTIONS(153), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(155), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1261] = 2,
    ACTIONS(157), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(159), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1277] = 2,
    ACTIONS(161), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(163), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1293] = 2,
    ACTIONS(123), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(121), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1309] = 2,
    ACTIONS(165), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(167), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1325] = 3,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(169), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(173), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1343] = 2,
    ACTIONS(175), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(177), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1359] = 2,
    ACTIONS(179), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(181), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1375] = 2,
    ACTIONS(175), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(177), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1391] = 2,
    ACTIONS(183), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(185), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1407] = 4,
    ACTIONS(191), 1,
      sym_INDENT,
    STATE(68), 1,
      sym_body,
    ACTIONS(187), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(189), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1426] = 8,
    ACTIONS(193), 1,
      anon_sym_COLON_EQ,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      sym_NAME,
    STATE(168), 1,
      sym_parameters,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
    STATE(74), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1453] = 2,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1468] = 1,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1480] = 1,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1492] = 1,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1504] = 1,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1516] = 7,
    ACTIONS(141), 1,
      sym_notcomment,
    ACTIONS(143), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(203), 1,
      sym_DEDENT,
    STATE(112), 1,
      sym_interpolation,
    STATE(57), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(121), 2,
      sym_recipeline,
      sym_comment,
  [1540] = 7,
    ACTIONS(141), 1,
      sym_notcomment,
    ACTIONS(143), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(112), 1,
      sym_interpolation,
    STATE(152), 1,
      sym_shebang_body,
    STATE(56), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(121), 2,
      sym_recipeline,
      sym_comment,
  [1564] = 7,
    ACTIONS(141), 1,
      sym_notcomment,
    ACTIONS(143), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(205), 1,
      sym_DEDENT,
    STATE(112), 1,
      sym_interpolation,
    STATE(57), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(121), 2,
      sym_recipeline,
      sym_comment,
  [1588] = 7,
    ACTIONS(207), 1,
      sym_notcomment,
    ACTIONS(210), 1,
      aux_sym_comment_token1,
    ACTIONS(213), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(216), 1,
      sym_DEDENT,
    STATE(112), 1,
      sym_interpolation,
    STATE(57), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(121), 2,
      sym_recipeline,
      sym_comment,
  [1612] = 1,
    ACTIONS(167), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1624] = 2,
    ACTIONS(218), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(220), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1637] = 2,
    ACTIONS(222), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(224), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1650] = 2,
    ACTIONS(226), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(228), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1663] = 2,
    ACTIONS(230), 1,
      anon_sym_PLUS,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [1676] = 2,
    ACTIONS(232), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(234), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1689] = 2,
    ACTIONS(236), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(238), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1702] = 5,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(70), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1721] = 2,
    ACTIONS(244), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(246), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1734] = 2,
    ACTIONS(248), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(250), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1747] = 2,
    ACTIONS(252), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(254), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1760] = 2,
    ACTIONS(256), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(258), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1773] = 5,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(72), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1792] = 2,
    ACTIONS(262), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(264), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1805] = 5,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(274), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(72), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1824] = 2,
    ACTIONS(277), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(279), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1837] = 6,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      sym_NAME,
    ACTIONS(283), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_variadic_parameters,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(82), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1858] = 2,
    ACTIONS(285), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(287), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1871] = 2,
    ACTIONS(289), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(291), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1884] = 5,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_stringlist_repeat1,
    STATE(98), 1,
      sym_string,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1902] = 2,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [1914] = 5,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_stringlist_repeat1,
    STATE(98), 1,
      sym_string,
    ACTIONS(299), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(302), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1932] = 6,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      sym_NAME,
    ACTIONS(311), 1,
      sym_NEWLINE,
    STATE(155), 1,
      sym_dependencies,
    STATE(103), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1952] = 6,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_NAME,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(315), 1,
      sym_NEWLINE,
    STATE(149), 1,
      sym_dependencies,
    STATE(103), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1972] = 4,
    ACTIONS(319), 1,
      anon_sym_DOLLAR,
    ACTIONS(322), 1,
      sym_NAME,
    STATE(82), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(317), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1988] = 6,
    ACTIONS(193), 1,
      anon_sym_COLON_EQ,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      sym_NAME,
    STATE(168), 1,
      sym_parameters,
    STATE(74), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2008] = 1,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [2018] = 5,
    STATE(77), 1,
      aux_sym_stringlist_repeat1,
    STATE(98), 1,
      sym_string,
    STATE(148), 1,
      sym_stringlist,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2036] = 6,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_NAME,
    ACTIONS(325), 1,
      anon_sym_,
    ACTIONS(327), 1,
      sym_NEWLINE,
    STATE(163), 1,
      sym_dependencies,
    STATE(103), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2056] = 1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [2066] = 2,
    ACTIONS(329), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(269), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2077] = 5,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      sym_NAME,
    ACTIONS(331), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_parameters,
    STATE(74), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2094] = 1,
    ACTIONS(167), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [2103] = 1,
    ACTIONS(155), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [2112] = 2,
    ACTIONS(335), 1,
      anon_sym_EQ,
    ACTIONS(333), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2123] = 1,
    ACTIONS(121), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [2132] = 1,
    ACTIONS(185), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [2141] = 5,
    ACTIONS(315), 1,
      sym_NEWLINE,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_NAME,
    STATE(149), 1,
      sym_dependencies,
    STATE(103), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2158] = 5,
    ACTIONS(311), 1,
      sym_NEWLINE,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_NAME,
    STATE(155), 1,
      sym_dependencies,
    STATE(103), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2175] = 1,
    ACTIONS(177), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [2184] = 3,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(345), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(343), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2197] = 5,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_NAME,
    ACTIONS(347), 1,
      sym_NEWLINE,
    STATE(156), 1,
      sym_dependencies,
    STATE(103), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2214] = 1,
    ACTIONS(181), 6,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_RBRACE_RBRACE,
      sym_NAME,
  [2223] = 2,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(349), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2234] = 4,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_NAME,
    ACTIONS(359), 1,
      sym_NEWLINE,
    STATE(102), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2248] = 4,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_NAME,
    ACTIONS(361), 1,
      sym_NEWLINE,
    STATE(102), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2262] = 5,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_NEWLINE,
    ACTIONS(363), 1,
      anon_sym_COLON_EQ,
    STATE(60), 1,
      sym_eol,
    STATE(67), 1,
      sym_comment,
  [2278] = 1,
    ACTIONS(365), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2286] = 4,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(367), 1,
      sym_notinterpolation,
    ACTIONS(369), 1,
      sym_NEWLINE,
    STATE(107), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2300] = 4,
    ACTIONS(371), 1,
      sym_notinterpolation,
    ACTIONS(374), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(377), 1,
      sym_NEWLINE,
    STATE(107), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2314] = 3,
    STATE(88), 1,
      sym_string,
    ACTIONS(25), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(27), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2326] = 1,
    ACTIONS(379), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2334] = 2,
    ACTIONS(381), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(297), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2344] = 3,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_boolean,
      sym_settinglist,
  [2356] = 4,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(387), 1,
      sym_notinterpolation,
    ACTIONS(389), 1,
      sym_NEWLINE,
    STATE(106), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2370] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_NEWLINE,
    STATE(67), 1,
      sym_comment,
    STATE(76), 1,
      sym_eol,
  [2383] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_NEWLINE,
    STATE(59), 1,
      sym_eol,
    STATE(67), 1,
      sym_comment,
  [2396] = 1,
    ACTIONS(391), 4,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
      anon_sym_LBRACE_LBRACE,
  [2403] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_NEWLINE,
    STATE(66), 1,
      sym_eol,
    STATE(67), 1,
      sym_comment,
  [2416] = 1,
    ACTIONS(285), 4,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
      anon_sym_LBRACE_LBRACE,
  [2423] = 1,
    ACTIONS(393), 4,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
      anon_sym_LBRACE_LBRACE,
  [2430] = 2,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2439] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_NEWLINE,
    STATE(67), 1,
      sym_comment,
    STATE(71), 1,
      sym_eol,
  [2452] = 1,
    ACTIONS(397), 4,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
      anon_sym_LBRACE_LBRACE,
  [2459] = 1,
    ACTIONS(399), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2465] = 3,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      sym_NAME,
    STATE(180), 1,
      sym_parameter,
  [2475] = 1,
    ACTIONS(405), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2481] = 1,
    ACTIONS(185), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2487] = 1,
    ACTIONS(181), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2493] = 1,
    ACTIONS(155), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2499] = 1,
    ACTIONS(407), 3,
      sym_NEWLINE,
      sym_notinterpolation,
      anon_sym_LBRACE_LBRACE,
  [2505] = 1,
    ACTIONS(177), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2511] = 2,
    ACTIONS(409), 1,
      anon_sym_PLUS,
    ACTIONS(173), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2519] = 1,
    ACTIONS(411), 3,
      sym_notcomment,
      aux_sym_comment_token1,
      anon_sym_LBRACE_LBRACE,
  [2525] = 1,
    ACTIONS(121), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2531] = 1,
    ACTIONS(167), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2537] = 2,
    ACTIONS(413), 1,
      aux_sym_shebang_token1,
    ACTIONS(415), 1,
      anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [2544] = 1,
    ACTIONS(159), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2549] = 2,
    ACTIONS(417), 1,
      sym_NAME,
    STATE(63), 1,
      sym_assignment,
  [2556] = 2,
    ACTIONS(419), 1,
      anon_sym_shell,
    ACTIONS(421), 1,
      sym_NAME,
  [2563] = 2,
    ACTIONS(173), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(423), 1,
      anon_sym_PLUS,
  [2570] = 2,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      anon_sym_EQ,
  [2577] = 2,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(427), 1,
      anon_sym_EQ,
  [2584] = 1,
    ACTIONS(429), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2589] = 1,
    ACTIONS(431), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2594] = 2,
    ACTIONS(433), 1,
      sym_NAME,
    STATE(151), 1,
      sym_depcall,
  [2601] = 1,
    ACTIONS(163), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2606] = 1,
    ACTIONS(435), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2611] = 2,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [2618] = 1,
    ACTIONS(441), 1,
      sym_NAME,
  [2622] = 1,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
  [2626] = 1,
    ACTIONS(347), 1,
      sym_NEWLINE,
  [2630] = 1,
    ACTIONS(445), 1,
      sym_NAME,
  [2634] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [2638] = 1,
    ACTIONS(449), 1,
      sym_DEDENT,
  [2642] = 1,
    ACTIONS(451), 1,
      sym_NEWLINE,
  [2646] = 1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [2650] = 1,
    ACTIONS(315), 1,
      sym_NEWLINE,
  [2654] = 1,
    ACTIONS(455), 1,
      sym_NEWLINE,
  [2658] = 1,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
  [2662] = 1,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
  [2666] = 1,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
  [2670] = 1,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
  [2674] = 1,
    ACTIONS(465), 1,
      anon_sym_COLON,
  [2678] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE_RBRACE,
  [2682] = 1,
    ACTIONS(311), 1,
      sym_NEWLINE,
  [2686] = 1,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [2690] = 1,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [2694] = 1,
    ACTIONS(473), 1,
      anon_sym_LBRACK,
  [2698] = 1,
    ACTIONS(475), 1,
      sym_NAME,
  [2702] = 1,
    ACTIONS(331), 1,
      anon_sym_COLON,
  [2706] = 1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [2710] = 1,
    ACTIONS(479), 1,
      sym_NEWLINE,
  [2714] = 1,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [2718] = 1,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
  [2722] = 1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [2726] = 1,
    ACTIONS(487), 1,
      sym_NEWLINE,
  [2730] = 1,
    ACTIONS(489), 1,
      sym_NAME,
  [2734] = 1,
    ACTIONS(491), 1,
      anon_sym_else,
  [2738] = 1,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [2742] = 1,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
  [2746] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
  [2750] = 1,
    ACTIONS(499), 1,
      anon_sym_COLON,
  [2754] = 1,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [2758] = 1,
    ACTIONS(503), 1,
      anon_sym_COLON_EQ,
  [2762] = 1,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [2766] = 1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
  [2770] = 1,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
  [2774] = 1,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [2778] = 1,
    ACTIONS(193), 1,
      anon_sym_COLON_EQ,
  [2782] = 1,
    ACTIONS(513), 1,
      aux_sym_comment_token2,
  [2786] = 1,
    ACTIONS(515), 1,
      sym_NAME,
  [2790] = 1,
    ACTIONS(517), 1,
      anon_sym_COLON_EQ,
  [2794] = 1,
    ACTIONS(519), 1,
      sym_NEWLINE,
  [2798] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [2802] = 1,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
  [2806] = 1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
  [2810] = 1,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
  [2814] = 1,
    ACTIONS(527), 1,
      anon_sym_else,
  [2818] = 1,
    ACTIONS(529), 1,
      anon_sym_else,
  [2822] = 1,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
  [2826] = 1,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
  [2830] = 1,
    ACTIONS(535), 1,
      aux_sym_comment_token2,
  [2834] = 1,
    ACTIONS(537), 1,
      sym_NAME,
  [2838] = 1,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
  [2842] = 1,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
  [2846] = 1,
    ACTIONS(543), 1,
      sym_TEXT,
  [2850] = 1,
    ACTIONS(545), 1,
      sym_DEDENT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 405,
  [SMALL_STATE(13)] = 443,
  [SMALL_STATE(14)] = 481,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 551,
  [SMALL_STATE(17)] = 586,
  [SMALL_STATE(18)] = 621,
  [SMALL_STATE(19)] = 656,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 885,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 955,
  [SMALL_STATE(29)] = 990,
  [SMALL_STATE(30)] = 1025,
  [SMALL_STATE(31)] = 1060,
  [SMALL_STATE(32)] = 1095,
  [SMALL_STATE(33)] = 1129,
  [SMALL_STATE(34)] = 1158,
  [SMALL_STATE(35)] = 1187,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1245,
  [SMALL_STATE(38)] = 1261,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1293,
  [SMALL_STATE(41)] = 1309,
  [SMALL_STATE(42)] = 1325,
  [SMALL_STATE(43)] = 1343,
  [SMALL_STATE(44)] = 1359,
  [SMALL_STATE(45)] = 1375,
  [SMALL_STATE(46)] = 1391,
  [SMALL_STATE(47)] = 1407,
  [SMALL_STATE(48)] = 1426,
  [SMALL_STATE(49)] = 1453,
  [SMALL_STATE(50)] = 1468,
  [SMALL_STATE(51)] = 1480,
  [SMALL_STATE(52)] = 1492,
  [SMALL_STATE(53)] = 1504,
  [SMALL_STATE(54)] = 1516,
  [SMALL_STATE(55)] = 1540,
  [SMALL_STATE(56)] = 1564,
  [SMALL_STATE(57)] = 1588,
  [SMALL_STATE(58)] = 1612,
  [SMALL_STATE(59)] = 1624,
  [SMALL_STATE(60)] = 1637,
  [SMALL_STATE(61)] = 1650,
  [SMALL_STATE(62)] = 1663,
  [SMALL_STATE(63)] = 1676,
  [SMALL_STATE(64)] = 1689,
  [SMALL_STATE(65)] = 1702,
  [SMALL_STATE(66)] = 1721,
  [SMALL_STATE(67)] = 1734,
  [SMALL_STATE(68)] = 1747,
  [SMALL_STATE(69)] = 1760,
  [SMALL_STATE(70)] = 1773,
  [SMALL_STATE(71)] = 1792,
  [SMALL_STATE(72)] = 1805,
  [SMALL_STATE(73)] = 1824,
  [SMALL_STATE(74)] = 1837,
  [SMALL_STATE(75)] = 1858,
  [SMALL_STATE(76)] = 1871,
  [SMALL_STATE(77)] = 1884,
  [SMALL_STATE(78)] = 1902,
  [SMALL_STATE(79)] = 1914,
  [SMALL_STATE(80)] = 1932,
  [SMALL_STATE(81)] = 1952,
  [SMALL_STATE(82)] = 1972,
  [SMALL_STATE(83)] = 1988,
  [SMALL_STATE(84)] = 2008,
  [SMALL_STATE(85)] = 2018,
  [SMALL_STATE(86)] = 2036,
  [SMALL_STATE(87)] = 2056,
  [SMALL_STATE(88)] = 2066,
  [SMALL_STATE(89)] = 2077,
  [SMALL_STATE(90)] = 2094,
  [SMALL_STATE(91)] = 2103,
  [SMALL_STATE(92)] = 2112,
  [SMALL_STATE(93)] = 2123,
  [SMALL_STATE(94)] = 2132,
  [SMALL_STATE(95)] = 2141,
  [SMALL_STATE(96)] = 2158,
  [SMALL_STATE(97)] = 2175,
  [SMALL_STATE(98)] = 2184,
  [SMALL_STATE(99)] = 2197,
  [SMALL_STATE(100)] = 2214,
  [SMALL_STATE(101)] = 2223,
  [SMALL_STATE(102)] = 2234,
  [SMALL_STATE(103)] = 2248,
  [SMALL_STATE(104)] = 2262,
  [SMALL_STATE(105)] = 2278,
  [SMALL_STATE(106)] = 2286,
  [SMALL_STATE(107)] = 2300,
  [SMALL_STATE(108)] = 2314,
  [SMALL_STATE(109)] = 2326,
  [SMALL_STATE(110)] = 2334,
  [SMALL_STATE(111)] = 2344,
  [SMALL_STATE(112)] = 2356,
  [SMALL_STATE(113)] = 2370,
  [SMALL_STATE(114)] = 2383,
  [SMALL_STATE(115)] = 2396,
  [SMALL_STATE(116)] = 2403,
  [SMALL_STATE(117)] = 2416,
  [SMALL_STATE(118)] = 2423,
  [SMALL_STATE(119)] = 2430,
  [SMALL_STATE(120)] = 2439,
  [SMALL_STATE(121)] = 2452,
  [SMALL_STATE(122)] = 2459,
  [SMALL_STATE(123)] = 2465,
  [SMALL_STATE(124)] = 2475,
  [SMALL_STATE(125)] = 2481,
  [SMALL_STATE(126)] = 2487,
  [SMALL_STATE(127)] = 2493,
  [SMALL_STATE(128)] = 2499,
  [SMALL_STATE(129)] = 2505,
  [SMALL_STATE(130)] = 2511,
  [SMALL_STATE(131)] = 2519,
  [SMALL_STATE(132)] = 2525,
  [SMALL_STATE(133)] = 2531,
  [SMALL_STATE(134)] = 2537,
  [SMALL_STATE(135)] = 2544,
  [SMALL_STATE(136)] = 2549,
  [SMALL_STATE(137)] = 2556,
  [SMALL_STATE(138)] = 2563,
  [SMALL_STATE(139)] = 2570,
  [SMALL_STATE(140)] = 2577,
  [SMALL_STATE(141)] = 2584,
  [SMALL_STATE(142)] = 2589,
  [SMALL_STATE(143)] = 2594,
  [SMALL_STATE(144)] = 2601,
  [SMALL_STATE(145)] = 2606,
  [SMALL_STATE(146)] = 2611,
  [SMALL_STATE(147)] = 2618,
  [SMALL_STATE(148)] = 2622,
  [SMALL_STATE(149)] = 2626,
  [SMALL_STATE(150)] = 2630,
  [SMALL_STATE(151)] = 2634,
  [SMALL_STATE(152)] = 2638,
  [SMALL_STATE(153)] = 2642,
  [SMALL_STATE(154)] = 2646,
  [SMALL_STATE(155)] = 2650,
  [SMALL_STATE(156)] = 2654,
  [SMALL_STATE(157)] = 2658,
  [SMALL_STATE(158)] = 2662,
  [SMALL_STATE(159)] = 2666,
  [SMALL_STATE(160)] = 2670,
  [SMALL_STATE(161)] = 2674,
  [SMALL_STATE(162)] = 2678,
  [SMALL_STATE(163)] = 2682,
  [SMALL_STATE(164)] = 2686,
  [SMALL_STATE(165)] = 2690,
  [SMALL_STATE(166)] = 2694,
  [SMALL_STATE(167)] = 2698,
  [SMALL_STATE(168)] = 2702,
  [SMALL_STATE(169)] = 2706,
  [SMALL_STATE(170)] = 2710,
  [SMALL_STATE(171)] = 2714,
  [SMALL_STATE(172)] = 2718,
  [SMALL_STATE(173)] = 2722,
  [SMALL_STATE(174)] = 2726,
  [SMALL_STATE(175)] = 2730,
  [SMALL_STATE(176)] = 2734,
  [SMALL_STATE(177)] = 2738,
  [SMALL_STATE(178)] = 2742,
  [SMALL_STATE(179)] = 2746,
  [SMALL_STATE(180)] = 2750,
  [SMALL_STATE(181)] = 2754,
  [SMALL_STATE(182)] = 2758,
  [SMALL_STATE(183)] = 2762,
  [SMALL_STATE(184)] = 2766,
  [SMALL_STATE(185)] = 2770,
  [SMALL_STATE(186)] = 2774,
  [SMALL_STATE(187)] = 2778,
  [SMALL_STATE(188)] = 2782,
  [SMALL_STATE(189)] = 2786,
  [SMALL_STATE(190)] = 2790,
  [SMALL_STATE(191)] = 2794,
  [SMALL_STATE(192)] = 2798,
  [SMALL_STATE(193)] = 2802,
  [SMALL_STATE(194)] = 2806,
  [SMALL_STATE(195)] = 2810,
  [SMALL_STATE(196)] = 2814,
  [SMALL_STATE(197)] = 2818,
  [SMALL_STATE(198)] = 2822,
  [SMALL_STATE(199)] = 2826,
  [SMALL_STATE(200)] = 2830,
  [SMALL_STATE(201)] = 2834,
  [SMALL_STATE(202)] = 2838,
  [SMALL_STATE(203)] = 2842,
  [SMALL_STATE(204)] = 2846,
  [SMALL_STATE(205)] = 2850,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(41),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(41),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(43),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(40),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(40),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(112),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(188),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 10, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 10, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 5),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(108),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(22),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(22),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlist, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(22),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(22),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(147),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(92),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(143),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(122),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(107),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(18),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 4, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settinglist, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [521] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
