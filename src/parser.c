#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 190
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
  anon_sym_EQ_TILDE = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_AT = 22,
  anon_sym_COLON = 23,
  anon_sym_ = 24,
  anon_sym_DOLLAR = 25,
  anon_sym_EQ = 26,
  anon_sym_STAR = 27,
  anon_sym_POUND_BANG = 28,
  aux_sym_shebang_token1 = 29,
  anon_sym_SLASHusr_SLASHbin_SLASHenv = 30,
  sym_notcomment = 31,
  aux_sym_comment_token1 = 32,
  aux_sym_comment_token2 = 33,
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
  [anon_sym_EQ_TILDE] = "=~",
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
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
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
  [anon_sym_EQ_TILDE] = {
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
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
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
      if (lookahead != 0) ADVANCE(27);
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
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(97);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(93);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(144);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '~') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(112);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(111);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '`') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == '`') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(110);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(105);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(108);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
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
      if (lookahead == '=') ADVANCE(65);
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
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '~') ADVANCE(86);
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
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
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
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(35);
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
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(76);
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
      if (lookahead == 'f') ADVANCE(77);
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
      if (lookahead == 'l') ADVANCE(68);
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
      if (lookahead == 's') ADVANCE(64);
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
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(66);
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
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 62, .external_lex_state = 2},
  [2] = {.lex_state = 62, .external_lex_state = 2},
  [3] = {.lex_state = 62, .external_lex_state = 2},
  [4] = {.lex_state = 3},
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
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 3},
  [50] = {.lex_state = 62, .external_lex_state = 4},
  [51] = {.lex_state = 62, .external_lex_state = 2},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 62, .external_lex_state = 2},
  [55] = {.lex_state = 62, .external_lex_state = 2},
  [56] = {.lex_state = 62, .external_lex_state = 2},
  [57] = {.lex_state = 62, .external_lex_state = 2},
  [58] = {.lex_state = 62, .external_lex_state = 2},
  [59] = {.lex_state = 62, .external_lex_state = 2},
  [60] = {.lex_state = 62, .external_lex_state = 2},
  [61] = {.lex_state = 62, .external_lex_state = 2},
  [62] = {.lex_state = 62, .external_lex_state = 2},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62, .external_lex_state = 2},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 62, .external_lex_state = 2},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 62, .external_lex_state = 2},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 2, .external_lex_state = 2},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 12, .external_lex_state = 3},
  [74] = {.lex_state = 12, .external_lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 2, .external_lex_state = 2},
  [77] = {.lex_state = 12, .external_lex_state = 3},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 3, .external_lex_state = 2},
  [86] = {.lex_state = 3, .external_lex_state = 2},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 3, .external_lex_state = 2},
  [90] = {.lex_state = 58, .external_lex_state = 2},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 58, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 3, .external_lex_state = 2},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 58, .external_lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 12, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 3, .external_lex_state = 2},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 12, .external_lex_state = 3},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 3, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 12, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 58, .external_lex_state = 2},
  [119] = {.lex_state = 12, .external_lex_state = 3},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 52},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 62},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 62},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 62},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 60},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 106},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 62},
  [179] = {.lex_state = 62},
  [180] = {.lex_state = 32},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 106},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 62},
  [187] = {.lex_state = 62},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 6},
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
    [anon_sym_EQ_TILDE] = ACTIONS(1),
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
    [sym_source_file] = STATE(177),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(57),
    [sym_alias] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_export] = STATE(57),
    [sym_setting] = STATE(57),
    [sym_recipe] = STATE(57),
    [sym_recipeheader] = STATE(176),
    [sym_comment] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_alias] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [sym_NAME] = ACTIONS(15),
    [sym_NEWLINE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_alias,
    ACTIONS(24), 1,
      anon_sym_export,
    ACTIONS(27), 1,
      anon_sym_set,
    ACTIONS(30), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      aux_sym_comment_token1,
    ACTIONS(36), 1,
      sym_NAME,
    ACTIONS(39), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(176), 1,
      sym_recipeheader,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 6,
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
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      sym_NAME,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_comment,
    STATE(176), 1,
      sym_recipeheader,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [86] = 2,
    ACTIONS(46), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(44), 15,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [108] = 12,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(166), 1,
      sym_sequence,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [149] = 2,
    ACTIONS(66), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(64), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [170] = 2,
    ACTIONS(70), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(68), 11,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [191] = 11,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      sym_BACKTICK,
    ACTIONS(78), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(80), 1,
      sym_NAME,
    STATE(47), 1,
      sym_value,
    ACTIONS(82), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(84), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(10), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [230] = 12,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(168), 1,
      sym_sequence,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [271] = 11,
    ACTIONS(88), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(102), 1,
      sym_NAME,
    STATE(47), 1,
      sym_value,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(10), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [310] = 12,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(171), 1,
      sym_sequence,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [351] = 12,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(162), 1,
      sym_sequence,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [392] = 11,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym_BACKTICK,
    ACTIONS(78), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(80), 1,
      sym_NAME,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_value,
    ACTIONS(82), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(84), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [431] = 11,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(113), 1,
      sym_expression,
    STATE(187), 1,
      sym_condition,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [469] = 11,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(113), 1,
      sym_expression,
    STATE(186), 1,
      sym_condition,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [507] = 11,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(113), 1,
      sym_expression,
    STATE(138), 1,
      sym_condition,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [545] = 10,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_BACKTICK,
    ACTIONS(123), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(125), 1,
      sym_NAME,
    STATE(110), 1,
      sym_value,
    STATE(126), 1,
      sym_expression,
    ACTIONS(127), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(129), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(106), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [580] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(140), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [615] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(183), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [650] = 10,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym_BACKTICK,
    ACTIONS(78), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_NAME,
    STATE(123), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(82), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(84), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [685] = 10,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_BACKTICK,
    ACTIONS(123), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(125), 1,
      sym_NAME,
    STATE(103), 1,
      sym_expression,
    STATE(110), 1,
      sym_value,
    ACTIONS(127), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(129), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(106), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [720] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(182), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [755] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(6), 1,
      sym_expression,
    STATE(53), 1,
      sym_value,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [790] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(164), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [825] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(172), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [860] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(141), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [895] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(169), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [930] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym_BACKTICK,
    ACTIONS(78), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(80), 1,
      sym_NAME,
    STATE(6), 1,
      sym_expression,
    STATE(47), 1,
      sym_value,
    ACTIONS(82), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(84), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [965] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(137), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1000] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(142), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1035] = 10,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(58), 1,
      sym_NAME,
    STATE(53), 1,
      sym_value,
    STATE(167), 1,
      sym_expression,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1070] = 10,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym_BACKTICK,
    ACTIONS(78), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_NAME,
    STATE(123), 1,
      sym_value,
    STATE(189), 1,
      sym_expression,
    ACTIONS(82), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(84), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1105] = 2,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1123] = 1,
    ACTIONS(139), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1138] = 2,
    ACTIONS(46), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(44), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1155] = 2,
    ACTIONS(141), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(143), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1172] = 2,
    ACTIONS(145), 5,
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
  [1189] = 1,
    ACTIONS(147), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1204] = 2,
    ACTIONS(149), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(151), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1221] = 1,
    ACTIONS(151), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1236] = 1,
    ACTIONS(143), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1251] = 2,
    ACTIONS(153), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(139), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1268] = 1,
    ACTIONS(135), 12,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1283] = 2,
    ACTIONS(155), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(147), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1300] = 8,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(157), 1,
      sym_NAME,
    STATE(91), 1,
      sym_value,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1329] = 8,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(157), 1,
      sym_NAME,
    STATE(98), 1,
      sym_value,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1358] = 3,
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
  [1376] = 2,
    ACTIONS(145), 5,
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
  [1392] = 8,
    ACTIONS(165), 1,
      anon_sym_POUND_BANG,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      sym_DEDENT,
    STATE(69), 1,
      sym_shebang,
    STATE(77), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(105), 2,
      sym_recipeline,
      sym_comment,
    STATE(149), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1420] = 4,
    ACTIONS(177), 1,
      sym_INDENT,
    STATE(54), 1,
      sym_body,
    ACTIONS(173), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(175), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1439] = 2,
    ACTIONS(179), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(181), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1452] = 6,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      sym_NAME,
    STATE(145), 1,
      sym_variadic_parameters,
    ACTIONS(183), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(75), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1473] = 2,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(163), 7,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
  [1486] = 2,
    ACTIONS(193), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(195), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1499] = 2,
    ACTIONS(197), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(199), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1512] = 2,
    ACTIONS(201), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(203), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1525] = 2,
    ACTIONS(205), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(207), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1538] = 2,
    ACTIONS(209), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(211), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1551] = 2,
    ACTIONS(213), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(215), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1564] = 2,
    ACTIONS(217), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(219), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1577] = 2,
    ACTIONS(221), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(223), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1590] = 2,
    ACTIONS(225), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(227), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1603] = 5,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    ACTIONS(234), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(237), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(63), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1622] = 2,
    ACTIONS(240), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(242), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1635] = 5,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(67), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1654] = 2,
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
  [1667] = 5,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(63), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1686] = 2,
    ACTIONS(254), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(256), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1699] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_shebang_body,
    STATE(74), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(105), 2,
      sym_recipeline,
      sym_comment,
  [1717] = 6,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_,
    ACTIONS(262), 1,
      sym_NAME,
    ACTIONS(264), 1,
      sym_NEWLINE,
    STATE(139), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1737] = 6,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_NAME,
    ACTIONS(266), 1,
      anon_sym_,
    ACTIONS(268), 1,
      sym_NEWLINE,
    STATE(147), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1757] = 5,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_stringlist_repeat1,
    STATE(87), 1,
      sym_string,
    ACTIONS(272), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(275), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1775] = 5,
    ACTIONS(278), 1,
      sym_notcomment,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(284), 1,
      sym_DEDENT,
    STATE(73), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(105), 2,
      sym_recipeline,
      sym_comment,
  [1793] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(286), 1,
      sym_DEDENT,
    STATE(73), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(105), 2,
      sym_recipeline,
      sym_comment,
  [1811] = 4,
    ACTIONS(290), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      sym_NAME,
    STATE(75), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(288), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1827] = 6,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_NAME,
    ACTIONS(296), 1,
      anon_sym_,
    ACTIONS(298), 1,
      sym_NEWLINE,
    STATE(143), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1847] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(300), 1,
      sym_DEDENT,
    STATE(73), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(105), 2,
      sym_recipeline,
      sym_comment,
  [1865] = 5,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_stringlist_repeat1,
    STATE(87), 1,
      sym_string,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1883] = 5,
    STATE(78), 1,
      aux_sym_stringlist_repeat1,
    STATE(87), 1,
      sym_string,
    STATE(152), 1,
      sym_stringlist,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1901] = 6,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      sym_NAME,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_parameters,
    STATE(52), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1921] = 2,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(308), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1932] = 2,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(312), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1943] = 5,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      sym_NAME,
    ACTIONS(316), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_parameters,
    STATE(52), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1960] = 2,
    ACTIONS(318), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(232), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1971] = 5,
    ACTIONS(264), 1,
      sym_NEWLINE,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym_NAME,
    STATE(139), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1988] = 5,
    ACTIONS(298), 1,
      sym_NEWLINE,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym_NAME,
    STATE(143), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2005] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(328), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(326), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2018] = 5,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym_NAME,
    ACTIONS(330), 1,
      sym_NEWLINE,
    STATE(146), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2035] = 4,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym_NAME,
    ACTIONS(332), 1,
      sym_NEWLINE,
    STATE(94), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2049] = 4,
    ACTIONS(334), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(336), 1,
      sym_TEXT,
    ACTIONS(338), 1,
      sym_NEWLINE,
    STATE(92), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2063] = 1,
    ACTIONS(340), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2071] = 4,
    ACTIONS(342), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(345), 1,
      sym_TEXT,
    ACTIONS(348), 1,
      sym_NEWLINE,
    STATE(92), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2085] = 5,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(350), 1,
      anon_sym_COLON_EQ,
    STATE(58), 1,
      sym_comment,
    STATE(68), 1,
      sym_eol,
  [2101] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_NAME,
    ACTIONS(358), 1,
      sym_NEWLINE,
    STATE(94), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2115] = 3,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 2,
      sym_boolean,
      sym_settinglist,
  [2127] = 3,
    STATE(84), 1,
      sym_string,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2139] = 4,
    ACTIONS(334), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(364), 1,
      sym_TEXT,
    ACTIONS(366), 1,
      sym_NEWLINE,
    STATE(90), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2153] = 1,
    ACTIONS(368), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2161] = 2,
    ACTIONS(370), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(270), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2171] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(59), 1,
      sym_eol,
  [2184] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(64), 1,
      sym_eol,
  [2197] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(56), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2210] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(51), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2223] = 2,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2232] = 1,
    ACTIONS(374), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2238] = 1,
    ACTIONS(135), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2244] = 1,
    ACTIONS(376), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2250] = 3,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      sym_NAME,
    STATE(155), 1,
      sym_parameter,
  [2260] = 1,
    ACTIONS(151), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2266] = 2,
    ACTIONS(378), 1,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2274] = 1,
    ACTIONS(44), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2280] = 1,
    ACTIONS(248), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2286] = 1,
    ACTIONS(380), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [2292] = 1,
    ACTIONS(382), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2298] = 1,
    ACTIONS(147), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2304] = 1,
    ACTIONS(384), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2310] = 1,
    ACTIONS(143), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2316] = 2,
    ACTIONS(388), 1,
      sym_NEWLINE,
    ACTIONS(386), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2324] = 1,
    ACTIONS(390), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2330] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_RBRACE_RBRACE,
  [2338] = 1,
    ACTIONS(139), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2344] = 1,
    ACTIONS(394), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2349] = 2,
    ACTIONS(163), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(396), 1,
      anon_sym_PLUS,
  [2356] = 2,
    ACTIONS(398), 1,
      sym_NAME,
    STATE(60), 1,
      sym_assignment,
  [2363] = 2,
    ACTIONS(400), 1,
      anon_sym_shell,
    ACTIONS(402), 1,
      sym_NAME,
  [2370] = 1,
    ACTIONS(64), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2375] = 2,
    ACTIONS(404), 1,
      aux_sym_shebang_token1,
    ACTIONS(406), 1,
      anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [2382] = 1,
    ACTIONS(408), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [2387] = 1,
    ACTIONS(410), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2392] = 2,
    ACTIONS(412), 1,
      sym_NAME,
    STATE(136), 1,
      sym_depcall,
  [2399] = 1,
    ACTIONS(68), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2404] = 2,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [2411] = 1,
    ACTIONS(418), 1,
      sym_NAME,
  [2415] = 1,
    ACTIONS(420), 1,
      sym_NAME,
  [2419] = 1,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
  [2423] = 1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [2427] = 1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [2431] = 1,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [2435] = 1,
    ACTIONS(298), 1,
      sym_NEWLINE,
  [2439] = 1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
  [2443] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
  [2447] = 1,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [2451] = 1,
    ACTIONS(330), 1,
      sym_NEWLINE,
  [2455] = 1,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
  [2459] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [2463] = 1,
    ACTIONS(440), 1,
      sym_NEWLINE,
  [2467] = 1,
    ACTIONS(264), 1,
      sym_NEWLINE,
  [2471] = 1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
  [2475] = 1,
    ACTIONS(444), 1,
      sym_DEDENT,
  [2479] = 1,
    ACTIONS(446), 1,
      sym_DEDENT,
  [2483] = 1,
    ACTIONS(448), 1,
      sym_NAME,
  [2487] = 1,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
  [2491] = 1,
    ACTIONS(452), 1,
      sym_TEXT,
  [2495] = 1,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [2499] = 1,
    ACTIONS(456), 1,
      anon_sym_COLON,
  [2503] = 1,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
  [2507] = 1,
    ACTIONS(460), 1,
      sym_NAME,
  [2511] = 1,
    ACTIONS(64), 1,
      anon_sym_RBRACE_RBRACE,
  [2515] = 1,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [2519] = 1,
    ACTIONS(68), 1,
      anon_sym_RBRACE_RBRACE,
  [2523] = 1,
    ACTIONS(462), 1,
      sym_NEWLINE,
  [2527] = 1,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [2531] = 1,
    ACTIONS(466), 1,
      sym_NEWLINE,
  [2535] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2539] = 1,
    ACTIONS(470), 1,
      sym_NEWLINE,
  [2543] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2547] = 1,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [2551] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [2555] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2559] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON_EQ,
  [2563] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2567] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [2571] = 1,
    ACTIONS(486), 1,
      aux_sym_comment_token2,
  [2575] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
  [2579] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON_EQ,
  [2583] = 1,
    ACTIONS(490), 1,
      sym_NEWLINE,
  [2587] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [2591] = 1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [2595] = 1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
  [2599] = 1,
    ACTIONS(498), 1,
      anon_sym_else,
  [2603] = 1,
    ACTIONS(500), 1,
      anon_sym_else,
  [2607] = 1,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
  [2611] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [2615] = 1,
    ACTIONS(506), 1,
      aux_sym_comment_token2,
  [2619] = 1,
    ACTIONS(508), 1,
      sym_NAME,
  [2623] = 1,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
  [2627] = 1,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
  [2631] = 1,
    ACTIONS(514), 1,
      anon_sym_else,
  [2635] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 230,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 431,
  [SMALL_STATE(15)] = 469,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 545,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 615,
  [SMALL_STATE(20)] = 650,
  [SMALL_STATE(21)] = 685,
  [SMALL_STATE(22)] = 720,
  [SMALL_STATE(23)] = 755,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 825,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 895,
  [SMALL_STATE(28)] = 930,
  [SMALL_STATE(29)] = 965,
  [SMALL_STATE(30)] = 1000,
  [SMALL_STATE(31)] = 1035,
  [SMALL_STATE(32)] = 1070,
  [SMALL_STATE(33)] = 1105,
  [SMALL_STATE(34)] = 1123,
  [SMALL_STATE(35)] = 1138,
  [SMALL_STATE(36)] = 1155,
  [SMALL_STATE(37)] = 1172,
  [SMALL_STATE(38)] = 1189,
  [SMALL_STATE(39)] = 1204,
  [SMALL_STATE(40)] = 1221,
  [SMALL_STATE(41)] = 1236,
  [SMALL_STATE(42)] = 1251,
  [SMALL_STATE(43)] = 1268,
  [SMALL_STATE(44)] = 1283,
  [SMALL_STATE(45)] = 1300,
  [SMALL_STATE(46)] = 1329,
  [SMALL_STATE(47)] = 1358,
  [SMALL_STATE(48)] = 1376,
  [SMALL_STATE(49)] = 1392,
  [SMALL_STATE(50)] = 1420,
  [SMALL_STATE(51)] = 1439,
  [SMALL_STATE(52)] = 1452,
  [SMALL_STATE(53)] = 1473,
  [SMALL_STATE(54)] = 1486,
  [SMALL_STATE(55)] = 1499,
  [SMALL_STATE(56)] = 1512,
  [SMALL_STATE(57)] = 1525,
  [SMALL_STATE(58)] = 1538,
  [SMALL_STATE(59)] = 1551,
  [SMALL_STATE(60)] = 1564,
  [SMALL_STATE(61)] = 1577,
  [SMALL_STATE(62)] = 1590,
  [SMALL_STATE(63)] = 1603,
  [SMALL_STATE(64)] = 1622,
  [SMALL_STATE(65)] = 1635,
  [SMALL_STATE(66)] = 1654,
  [SMALL_STATE(67)] = 1667,
  [SMALL_STATE(68)] = 1686,
  [SMALL_STATE(69)] = 1699,
  [SMALL_STATE(70)] = 1717,
  [SMALL_STATE(71)] = 1737,
  [SMALL_STATE(72)] = 1757,
  [SMALL_STATE(73)] = 1775,
  [SMALL_STATE(74)] = 1793,
  [SMALL_STATE(75)] = 1811,
  [SMALL_STATE(76)] = 1827,
  [SMALL_STATE(77)] = 1847,
  [SMALL_STATE(78)] = 1865,
  [SMALL_STATE(79)] = 1883,
  [SMALL_STATE(80)] = 1901,
  [SMALL_STATE(81)] = 1921,
  [SMALL_STATE(82)] = 1932,
  [SMALL_STATE(83)] = 1943,
  [SMALL_STATE(84)] = 1960,
  [SMALL_STATE(85)] = 1971,
  [SMALL_STATE(86)] = 1988,
  [SMALL_STATE(87)] = 2005,
  [SMALL_STATE(88)] = 2018,
  [SMALL_STATE(89)] = 2035,
  [SMALL_STATE(90)] = 2049,
  [SMALL_STATE(91)] = 2063,
  [SMALL_STATE(92)] = 2071,
  [SMALL_STATE(93)] = 2085,
  [SMALL_STATE(94)] = 2101,
  [SMALL_STATE(95)] = 2115,
  [SMALL_STATE(96)] = 2127,
  [SMALL_STATE(97)] = 2139,
  [SMALL_STATE(98)] = 2153,
  [SMALL_STATE(99)] = 2161,
  [SMALL_STATE(100)] = 2171,
  [SMALL_STATE(101)] = 2184,
  [SMALL_STATE(102)] = 2197,
  [SMALL_STATE(103)] = 2210,
  [SMALL_STATE(104)] = 2223,
  [SMALL_STATE(105)] = 2232,
  [SMALL_STATE(106)] = 2238,
  [SMALL_STATE(107)] = 2244,
  [SMALL_STATE(108)] = 2250,
  [SMALL_STATE(109)] = 2260,
  [SMALL_STATE(110)] = 2266,
  [SMALL_STATE(111)] = 2274,
  [SMALL_STATE(112)] = 2280,
  [SMALL_STATE(113)] = 2286,
  [SMALL_STATE(114)] = 2292,
  [SMALL_STATE(115)] = 2298,
  [SMALL_STATE(116)] = 2304,
  [SMALL_STATE(117)] = 2310,
  [SMALL_STATE(118)] = 2316,
  [SMALL_STATE(119)] = 2324,
  [SMALL_STATE(120)] = 2330,
  [SMALL_STATE(121)] = 2338,
  [SMALL_STATE(122)] = 2344,
  [SMALL_STATE(123)] = 2349,
  [SMALL_STATE(124)] = 2356,
  [SMALL_STATE(125)] = 2363,
  [SMALL_STATE(126)] = 2370,
  [SMALL_STATE(127)] = 2375,
  [SMALL_STATE(128)] = 2382,
  [SMALL_STATE(129)] = 2387,
  [SMALL_STATE(130)] = 2392,
  [SMALL_STATE(131)] = 2399,
  [SMALL_STATE(132)] = 2404,
  [SMALL_STATE(133)] = 2411,
  [SMALL_STATE(134)] = 2415,
  [SMALL_STATE(135)] = 2419,
  [SMALL_STATE(136)] = 2423,
  [SMALL_STATE(137)] = 2427,
  [SMALL_STATE(138)] = 2431,
  [SMALL_STATE(139)] = 2435,
  [SMALL_STATE(140)] = 2439,
  [SMALL_STATE(141)] = 2443,
  [SMALL_STATE(142)] = 2447,
  [SMALL_STATE(143)] = 2451,
  [SMALL_STATE(144)] = 2455,
  [SMALL_STATE(145)] = 2459,
  [SMALL_STATE(146)] = 2463,
  [SMALL_STATE(147)] = 2467,
  [SMALL_STATE(148)] = 2471,
  [SMALL_STATE(149)] = 2475,
  [SMALL_STATE(150)] = 2479,
  [SMALL_STATE(151)] = 2483,
  [SMALL_STATE(152)] = 2487,
  [SMALL_STATE(153)] = 2491,
  [SMALL_STATE(154)] = 2495,
  [SMALL_STATE(155)] = 2499,
  [SMALL_STATE(156)] = 2503,
  [SMALL_STATE(157)] = 2507,
  [SMALL_STATE(158)] = 2511,
  [SMALL_STATE(159)] = 2515,
  [SMALL_STATE(160)] = 2519,
  [SMALL_STATE(161)] = 2523,
  [SMALL_STATE(162)] = 2527,
  [SMALL_STATE(163)] = 2531,
  [SMALL_STATE(164)] = 2535,
  [SMALL_STATE(165)] = 2539,
  [SMALL_STATE(166)] = 2543,
  [SMALL_STATE(167)] = 2547,
  [SMALL_STATE(168)] = 2551,
  [SMALL_STATE(169)] = 2555,
  [SMALL_STATE(170)] = 2559,
  [SMALL_STATE(171)] = 2563,
  [SMALL_STATE(172)] = 2567,
  [SMALL_STATE(173)] = 2571,
  [SMALL_STATE(174)] = 2575,
  [SMALL_STATE(175)] = 2579,
  [SMALL_STATE(176)] = 2583,
  [SMALL_STATE(177)] = 2587,
  [SMALL_STATE(178)] = 2591,
  [SMALL_STATE(179)] = 2595,
  [SMALL_STATE(180)] = 2599,
  [SMALL_STATE(181)] = 2603,
  [SMALL_STATE(182)] = 2607,
  [SMALL_STATE(183)] = 2611,
  [SMALL_STATE(184)] = 2615,
  [SMALL_STATE(185)] = 2619,
  [SMALL_STATE(186)] = 2623,
  [SMALL_STATE(187)] = 2627,
  [SMALL_STATE(188)] = 2631,
  [SMALL_STATE(189)] = 2635,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 6),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(15),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(48),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 10, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 10, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(96),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(4),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(4),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(4),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(97),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(173),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(134),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlist, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(32),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(92),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(130),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(107),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 4, .production_id = 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settinglist, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
