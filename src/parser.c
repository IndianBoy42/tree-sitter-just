#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  anon_sym_LBRACE_LBRACE = 33,
  anon_sym_RBRACE_RBRACE = 34,
  sym_BACKTICK = 35,
  sym_INDENTED_BACKTICK = 36,
  sym_NAME = 37,
  sym_RAW_STRING = 38,
  sym_INDENTED_RAW_STRING = 39,
  sym_STRING = 40,
  sym_INDENTED_STRING = 41,
  sym_TEXT = 42,
  sym_INDENT = 43,
  sym_DEDENT = 44,
  sym_NEWLINE = 45,
  sym_LINE = 46,
  sym_source_file = 47,
  sym_item = 48,
  sym_eol = 49,
  sym_alias = 50,
  sym_assignment = 51,
  sym_export = 52,
  sym_setting = 53,
  sym_boolean = 54,
  sym_settinglist = 55,
  sym_stringlist = 56,
  sym_expression = 57,
  sym_condition = 58,
  sym_value = 59,
  sym_call = 60,
  sym_cmd = 61,
  sym_string = 62,
  sym_sequence = 63,
  sym_recipe = 64,
  sym_recipeheader = 65,
  sym_parameters = 66,
  sym_parameter = 67,
  sym_variadic_parameters = 68,
  sym_dependencies = 69,
  sym_dependency = 70,
  sym_depcall = 71,
  sym_body = 72,
  sym_shebang_recipe = 73,
  sym_shebang_body = 74,
  sym_shebang = 75,
  sym_recipe_body = 76,
  sym_line = 77,
  sym_recipeline = 78,
  sym_comment = 79,
  sym_interpolation = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_setting_repeat1 = 82,
  aux_sym_stringlist_repeat1 = 83,
  aux_sym_parameters_repeat1 = 84,
  aux_sym_dependencies_repeat1 = 85,
  aux_sym_depcall_repeat1 = 86,
  aux_sym_shebang_body_repeat1 = 87,
  aux_sym_recipeline_repeat1 = 88,
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
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == ':') ADVANCE(90);
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
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(96);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(146);
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
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(143);
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
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(84);
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
      if (lookahead == '`') ADVANCE(111);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(110);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '`') ADVANCE(112);
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
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(104);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(88);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(107);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_notcomment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(35);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(148);
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
  [1] = {.lex_state = 62, .external_lex_state = 2},
  [2] = {.lex_state = 62, .external_lex_state = 2},
  [3] = {.lex_state = 62, .external_lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 3},
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
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 3},
  [50] = {.lex_state = 62, .external_lex_state = 4},
  [51] = {.lex_state = 62, .external_lex_state = 2},
  [52] = {.lex_state = 62, .external_lex_state = 2},
  [53] = {.lex_state = 62, .external_lex_state = 2},
  [54] = {.lex_state = 62, .external_lex_state = 2},
  [55] = {.lex_state = 62, .external_lex_state = 2},
  [56] = {.lex_state = 62, .external_lex_state = 2},
  [57] = {.lex_state = 62, .external_lex_state = 2},
  [58] = {.lex_state = 62, .external_lex_state = 2},
  [59] = {.lex_state = 62, .external_lex_state = 2},
  [60] = {.lex_state = 62, .external_lex_state = 2},
  [61] = {.lex_state = 62, .external_lex_state = 2},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62, .external_lex_state = 2},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 62, .external_lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 2, .external_lex_state = 2},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 2, .external_lex_state = 2},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 12, .external_lex_state = 3},
  [75] = {.lex_state = 12, .external_lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 12, .external_lex_state = 3},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3, .external_lex_state = 2},
  [85] = {.lex_state = 3, .external_lex_state = 2},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 3, .external_lex_state = 2},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 58, .external_lex_state = 2},
  [92] = {.lex_state = 3, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 58, .external_lex_state = 2},
  [99] = {.lex_state = 58, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 3, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 3, .external_lex_state = 2},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 12, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 12, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 12, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 58, .external_lex_state = 2},
  [119] = {.lex_state = 12, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 52},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 62},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
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
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 32},
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
  [173] = {.lex_state = 105},
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
  [184] = {.lex_state = 105},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 62},
  [187] = {.lex_state = 62},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(177),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(56),
    [sym_alias] = STATE(56),
    [sym_assignment] = STATE(56),
    [sym_export] = STATE(56),
    [sym_setting] = STATE(56),
    [sym_recipe] = STATE(56),
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
    STATE(56), 6,
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
    STATE(56), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [86] = 12,
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
    STATE(70), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(166), 1,
      sym_sequence,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [127] = 2,
    ACTIONS(62), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(60), 14,
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
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [148] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 1,
      sym_BACKTICK,
    ACTIONS(70), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(72), 1,
      sym_NAME,
    STATE(48), 1,
      sym_value,
    ACTIONS(74), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(76), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(36), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [187] = 12,
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
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(168), 1,
      sym_sequence,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [228] = 11,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(88), 1,
      sym_BACKTICK,
    ACTIONS(91), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(94), 1,
      sym_NAME,
    STATE(48), 1,
      sym_value,
    ACTIONS(97), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(100), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(36), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [267] = 12,
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
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(171), 1,
      sym_sequence,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [308] = 12,
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
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(162), 1,
      sym_sequence,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [349] = 11,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      sym_BACKTICK,
    ACTIONS(70), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(72), 1,
      sym_NAME,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_value,
    ACTIONS(74), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(76), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(6), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(36), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [388] = 11,
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
    STATE(70), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    STATE(187), 1,
      sym_condition,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [426] = 11,
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
    STATE(70), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    STATE(186), 1,
      sym_condition,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [464] = 2,
    ACTIONS(111), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(109), 10,
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
  [484] = 2,
    ACTIONS(115), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(113), 10,
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
  [504] = 11,
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
    STATE(70), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    STATE(138), 1,
      sym_condition,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [542] = 10,
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
    STATE(111), 1,
      sym_value,
    STATE(125), 1,
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
  [577] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(140), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [612] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(183), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [647] = 10,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      sym_BACKTICK,
    ACTIONS(70), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_NAME,
    STATE(122), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(74), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(76), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(36), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [682] = 10,
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
    STATE(104), 1,
      sym_expression,
    STATE(111), 1,
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
  [717] = 10,
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
    STATE(14), 1,
      sym_expression,
    STATE(70), 1,
      sym_value,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [752] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(164), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [787] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(182), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [822] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(172), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [857] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(169), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [892] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(141), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
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
    STATE(70), 1,
      sym_value,
    STATE(137), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [962] = 10,
    ACTIONS(44), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      sym_BACKTICK,
    ACTIONS(70), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(72), 1,
      sym_NAME,
    STATE(14), 1,
      sym_expression,
    STATE(48), 1,
      sym_value,
    ACTIONS(74), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(76), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(36), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [997] = 10,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      sym_BACKTICK,
    ACTIONS(70), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      sym_NAME,
    STATE(122), 1,
      sym_value,
    STATE(188), 1,
      sym_expression,
    ACTIONS(74), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(76), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(36), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1032] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(142), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1067] = 10,
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
    STATE(70), 1,
      sym_value,
    STATE(167), 1,
      sym_expression,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
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
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1119] = 2,
    ACTIONS(62), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(60), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1136] = 8,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(97), 1,
      sym_value,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
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
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
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
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
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
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1216] = 8,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_BACKTICK,
    ACTIONS(52), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(96), 1,
      sym_value,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(46), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1245] = 2,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 11,
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
  [1262] = 2,
    ACTIONS(155), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(157), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1279] = 1,
    ACTIONS(137), 11,
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
  [1293] = 1,
    ACTIONS(151), 11,
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
  [1307] = 1,
    ACTIONS(147), 11,
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
  [1321] = 2,
    ACTIONS(141), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(143), 6,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1337] = 1,
    ACTIONS(143), 11,
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
  [1351] = 1,
    ACTIONS(157), 11,
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
  [1365] = 3,
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
  [1383] = 8,
    ACTIONS(165), 1,
      anon_sym_POUND_BANG,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      sym_DEDENT,
    STATE(68), 1,
      sym_shebang,
    STATE(77), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(110), 2,
      sym_recipeline,
      sym_comment,
    STATE(149), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1411] = 4,
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
  [1430] = 2,
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
  [1443] = 2,
    ACTIONS(183), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(185), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1456] = 2,
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
  [1469] = 2,
    ACTIONS(191), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(193), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1482] = 2,
    ACTIONS(195), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(197), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1495] = 2,
    ACTIONS(199), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(201), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1508] = 2,
    ACTIONS(203), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(205), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1521] = 2,
    ACTIONS(207), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(209), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1534] = 2,
    ACTIONS(211), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(213), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1547] = 2,
    ACTIONS(215), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(217), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1560] = 2,
    ACTIONS(219), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(221), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1573] = 5,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(65), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1592] = 5,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(235), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(63), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1611] = 2,
    ACTIONS(238), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(240), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1624] = 5,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(63), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1643] = 2,
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
  [1656] = 6,
    ACTIONS(250), 1,
      anon_sym_COLON,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_NAME,
    STATE(145), 1,
      sym_variadic_parameters,
    ACTIONS(248), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(76), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1677] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_shebang_body,
    STATE(75), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(110), 2,
      sym_recipeline,
      sym_comment,
  [1695] = 6,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      sym_NAME,
    ACTIONS(262), 1,
      sym_NEWLINE,
    STATE(139), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1715] = 2,
    ACTIONS(264), 1,
      anon_sym_PLUS,
    ACTIONS(163), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [1727] = 6,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
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
  [1747] = 6,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_NAME,
    ACTIONS(270), 1,
      anon_sym_,
    ACTIONS(272), 1,
      sym_NEWLINE,
    STATE(143), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1767] = 5,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_stringlist_repeat1,
    STATE(86), 1,
      sym_string,
    ACTIONS(276), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(279), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1785] = 5,
    ACTIONS(282), 1,
      sym_notcomment,
    ACTIONS(285), 1,
      aux_sym_comment_token1,
    ACTIONS(288), 1,
      sym_DEDENT,
    STATE(74), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(110), 2,
      sym_recipeline,
      sym_comment,
  [1803] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(290), 1,
      sym_DEDENT,
    STATE(74), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(110), 2,
      sym_recipeline,
      sym_comment,
  [1821] = 4,
    ACTIONS(294), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_NAME,
    STATE(76), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(292), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1837] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(300), 1,
      sym_DEDENT,
    STATE(74), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(110), 2,
      sym_recipeline,
      sym_comment,
  [1855] = 5,
    STATE(79), 1,
      aux_sym_stringlist_repeat1,
    STATE(86), 1,
      sym_string,
    STATE(152), 1,
      sym_stringlist,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1873] = 5,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_stringlist_repeat1,
    STATE(86), 1,
      sym_string,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1891] = 6,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_NAME,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_parameters,
    STATE(67), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1911] = 2,
    ACTIONS(308), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(230), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1922] = 2,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(310), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1933] = 5,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_NAME,
    ACTIONS(314), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_parameters,
    STATE(67), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1950] = 5,
    ACTIONS(262), 1,
      sym_NEWLINE,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    STATE(139), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1967] = 5,
    ACTIONS(272), 1,
      sym_NEWLINE,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    STATE(143), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1984] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(324), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(322), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1997] = 2,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(326), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2008] = 5,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    ACTIONS(330), 1,
      sym_NEWLINE,
    STATE(146), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2025] = 4,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    ACTIONS(332), 1,
      sym_NEWLINE,
    STATE(92), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2039] = 2,
    ACTIONS(334), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(274), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2049] = 4,
    ACTIONS(336), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym_TEXT,
    ACTIONS(342), 1,
      sym_NEWLINE,
    STATE(91), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2063] = 4,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      sym_NAME,
    ACTIONS(350), 1,
      sym_NEWLINE,
    STATE(92), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2077] = 5,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(352), 1,
      anon_sym_COLON_EQ,
    STATE(52), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2093] = 3,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(103), 2,
      sym_boolean,
      sym_settinglist,
  [2105] = 3,
    STATE(81), 1,
      sym_string,
    ACTIONS(56), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(58), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2117] = 1,
    ACTIONS(358), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2125] = 1,
    ACTIONS(360), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2133] = 4,
    ACTIONS(362), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(364), 1,
      sym_TEXT,
    ACTIONS(366), 1,
      sym_NEWLINE,
    STATE(91), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2147] = 4,
    ACTIONS(362), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(368), 1,
      sym_TEXT,
    ACTIONS(370), 1,
      sym_NEWLINE,
    STATE(98), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2161] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(64), 1,
      sym_eol,
  [2174] = 2,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2183] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(59), 1,
      sym_eol,
  [2196] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(53), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2209] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(51), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2222] = 1,
    ACTIONS(374), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2228] = 1,
    ACTIONS(143), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2234] = 1,
    ACTIONS(376), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2240] = 3,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_NAME,
    STATE(156), 1,
      sym_parameter,
  [2250] = 1,
    ACTIONS(151), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2256] = 1,
    ACTIONS(378), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2262] = 2,
    ACTIONS(380), 1,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2270] = 1,
    ACTIONS(244), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2276] = 1,
    ACTIONS(60), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2282] = 1,
    ACTIONS(382), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2288] = 1,
    ACTIONS(157), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2294] = 1,
    ACTIONS(147), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2300] = 2,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 2,
      anon_sym_PLUS,
      anon_sym_RBRACE_RBRACE,
  [2308] = 2,
    ACTIONS(388), 1,
      sym_NEWLINE,
    ACTIONS(386), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2316] = 1,
    ACTIONS(390), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2322] = 1,
    ACTIONS(137), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      aux_sym_comment_token1,
  [2328] = 1,
    ACTIONS(392), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2333] = 2,
    ACTIONS(163), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(394), 1,
      anon_sym_PLUS,
  [2340] = 2,
    ACTIONS(396), 1,
      sym_NAME,
    STATE(57), 1,
      sym_assignment,
  [2347] = 2,
    ACTIONS(398), 1,
      anon_sym_shell,
    ACTIONS(400), 1,
      sym_NAME,
  [2354] = 1,
    ACTIONS(109), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2359] = 2,
    ACTIONS(402), 1,
      aux_sym_shebang_token1,
    ACTIONS(404), 1,
      anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [2366] = 1,
    ACTIONS(406), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2371] = 1,
    ACTIONS(408), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [2376] = 1,
    ACTIONS(410), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2381] = 2,
    ACTIONS(412), 1,
      sym_NAME,
    STATE(136), 1,
      sym_depcall,
  [2388] = 1,
    ACTIONS(113), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2393] = 2,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [2400] = 1,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
  [2404] = 1,
    ACTIONS(420), 1,
      sym_NAME,
  [2408] = 1,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
  [2412] = 1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [2416] = 1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [2420] = 1,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [2424] = 1,
    ACTIONS(272), 1,
      sym_NEWLINE,
  [2428] = 1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
  [2432] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
  [2436] = 1,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [2440] = 1,
    ACTIONS(330), 1,
      sym_NEWLINE,
  [2444] = 1,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
  [2448] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [2452] = 1,
    ACTIONS(440), 1,
      sym_NEWLINE,
  [2456] = 1,
    ACTIONS(262), 1,
      sym_NEWLINE,
  [2460] = 1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
  [2464] = 1,
    ACTIONS(444), 1,
      sym_DEDENT,
  [2468] = 1,
    ACTIONS(446), 1,
      sym_DEDENT,
  [2472] = 1,
    ACTIONS(448), 1,
      sym_NAME,
  [2476] = 1,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
  [2480] = 1,
    ACTIONS(452), 1,
      sym_TEXT,
  [2484] = 1,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [2488] = 1,
    ACTIONS(456), 1,
      sym_NAME,
  [2492] = 1,
    ACTIONS(458), 1,
      anon_sym_COLON,
  [2496] = 1,
    ACTIONS(460), 1,
      sym_NAME,
  [2500] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACE_RBRACE,
  [2504] = 1,
    ACTIONS(314), 1,
      anon_sym_COLON,
  [2508] = 1,
    ACTIONS(113), 1,
      anon_sym_RBRACE_RBRACE,
  [2512] = 1,
    ACTIONS(462), 1,
      anon_sym_else,
  [2516] = 1,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [2520] = 1,
    ACTIONS(466), 1,
      sym_NEWLINE,
  [2524] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2528] = 1,
    ACTIONS(470), 1,
      sym_NEWLINE,
  [2532] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2536] = 1,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [2540] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [2544] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2548] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON_EQ,
  [2552] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2556] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [2560] = 1,
    ACTIONS(486), 1,
      aux_sym_comment_token2,
  [2564] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
  [2568] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON_EQ,
  [2572] = 1,
    ACTIONS(490), 1,
      sym_NEWLINE,
  [2576] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [2580] = 1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [2584] = 1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
  [2588] = 1,
    ACTIONS(498), 1,
      anon_sym_else,
  [2592] = 1,
    ACTIONS(500), 1,
      anon_sym_else,
  [2596] = 1,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
  [2600] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [2604] = 1,
    ACTIONS(506), 1,
      aux_sym_comment_token2,
  [2608] = 1,
    ACTIONS(508), 1,
      sym_NAME,
  [2612] = 1,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
  [2616] = 1,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
  [2620] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACE_RBRACE,
  [2624] = 1,
    ACTIONS(516), 1,
      sym_NEWLINE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 464,
  [SMALL_STATE(15)] = 484,
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
  [SMALL_STATE(45)] = 1321,
  [SMALL_STATE(46)] = 1337,
  [SMALL_STATE(47)] = 1351,
  [SMALL_STATE(48)] = 1365,
  [SMALL_STATE(49)] = 1383,
  [SMALL_STATE(50)] = 1411,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1443,
  [SMALL_STATE(53)] = 1456,
  [SMALL_STATE(54)] = 1469,
  [SMALL_STATE(55)] = 1482,
  [SMALL_STATE(56)] = 1495,
  [SMALL_STATE(57)] = 1508,
  [SMALL_STATE(58)] = 1521,
  [SMALL_STATE(59)] = 1534,
  [SMALL_STATE(60)] = 1547,
  [SMALL_STATE(61)] = 1560,
  [SMALL_STATE(62)] = 1573,
  [SMALL_STATE(63)] = 1592,
  [SMALL_STATE(64)] = 1611,
  [SMALL_STATE(65)] = 1624,
  [SMALL_STATE(66)] = 1643,
  [SMALL_STATE(67)] = 1656,
  [SMALL_STATE(68)] = 1677,
  [SMALL_STATE(69)] = 1695,
  [SMALL_STATE(70)] = 1715,
  [SMALL_STATE(71)] = 1727,
  [SMALL_STATE(72)] = 1747,
  [SMALL_STATE(73)] = 1767,
  [SMALL_STATE(74)] = 1785,
  [SMALL_STATE(75)] = 1803,
  [SMALL_STATE(76)] = 1821,
  [SMALL_STATE(77)] = 1837,
  [SMALL_STATE(78)] = 1855,
  [SMALL_STATE(79)] = 1873,
  [SMALL_STATE(80)] = 1891,
  [SMALL_STATE(81)] = 1911,
  [SMALL_STATE(82)] = 1922,
  [SMALL_STATE(83)] = 1933,
  [SMALL_STATE(84)] = 1950,
  [SMALL_STATE(85)] = 1967,
  [SMALL_STATE(86)] = 1984,
  [SMALL_STATE(87)] = 1997,
  [SMALL_STATE(88)] = 2008,
  [SMALL_STATE(89)] = 2025,
  [SMALL_STATE(90)] = 2039,
  [SMALL_STATE(91)] = 2049,
  [SMALL_STATE(92)] = 2063,
  [SMALL_STATE(93)] = 2077,
  [SMALL_STATE(94)] = 2093,
  [SMALL_STATE(95)] = 2105,
  [SMALL_STATE(96)] = 2117,
  [SMALL_STATE(97)] = 2125,
  [SMALL_STATE(98)] = 2133,
  [SMALL_STATE(99)] = 2147,
  [SMALL_STATE(100)] = 2161,
  [SMALL_STATE(101)] = 2174,
  [SMALL_STATE(102)] = 2183,
  [SMALL_STATE(103)] = 2196,
  [SMALL_STATE(104)] = 2209,
  [SMALL_STATE(105)] = 2222,
  [SMALL_STATE(106)] = 2228,
  [SMALL_STATE(107)] = 2234,
  [SMALL_STATE(108)] = 2240,
  [SMALL_STATE(109)] = 2250,
  [SMALL_STATE(110)] = 2256,
  [SMALL_STATE(111)] = 2262,
  [SMALL_STATE(112)] = 2270,
  [SMALL_STATE(113)] = 2276,
  [SMALL_STATE(114)] = 2282,
  [SMALL_STATE(115)] = 2288,
  [SMALL_STATE(116)] = 2294,
  [SMALL_STATE(117)] = 2300,
  [SMALL_STATE(118)] = 2308,
  [SMALL_STATE(119)] = 2316,
  [SMALL_STATE(120)] = 2322,
  [SMALL_STATE(121)] = 2328,
  [SMALL_STATE(122)] = 2333,
  [SMALL_STATE(123)] = 2340,
  [SMALL_STATE(124)] = 2347,
  [SMALL_STATE(125)] = 2354,
  [SMALL_STATE(126)] = 2359,
  [SMALL_STATE(127)] = 2366,
  [SMALL_STATE(128)] = 2371,
  [SMALL_STATE(129)] = 2376,
  [SMALL_STATE(130)] = 2381,
  [SMALL_STATE(131)] = 2388,
  [SMALL_STATE(132)] = 2393,
  [SMALL_STATE(133)] = 2400,
  [SMALL_STATE(134)] = 2404,
  [SMALL_STATE(135)] = 2408,
  [SMALL_STATE(136)] = 2412,
  [SMALL_STATE(137)] = 2416,
  [SMALL_STATE(138)] = 2420,
  [SMALL_STATE(139)] = 2424,
  [SMALL_STATE(140)] = 2428,
  [SMALL_STATE(141)] = 2432,
  [SMALL_STATE(142)] = 2436,
  [SMALL_STATE(143)] = 2440,
  [SMALL_STATE(144)] = 2444,
  [SMALL_STATE(145)] = 2448,
  [SMALL_STATE(146)] = 2452,
  [SMALL_STATE(147)] = 2456,
  [SMALL_STATE(148)] = 2460,
  [SMALL_STATE(149)] = 2464,
  [SMALL_STATE(150)] = 2468,
  [SMALL_STATE(151)] = 2472,
  [SMALL_STATE(152)] = 2476,
  [SMALL_STATE(153)] = 2480,
  [SMALL_STATE(154)] = 2484,
  [SMALL_STATE(155)] = 2488,
  [SMALL_STATE(156)] = 2492,
  [SMALL_STATE(157)] = 2496,
  [SMALL_STATE(158)] = 2500,
  [SMALL_STATE(159)] = 2504,
  [SMALL_STATE(160)] = 2508,
  [SMALL_STATE(161)] = 2512,
  [SMALL_STATE(162)] = 2516,
  [SMALL_STATE(163)] = 2520,
  [SMALL_STATE(164)] = 2524,
  [SMALL_STATE(165)] = 2528,
  [SMALL_STATE(166)] = 2532,
  [SMALL_STATE(167)] = 2536,
  [SMALL_STATE(168)] = 2540,
  [SMALL_STATE(169)] = 2544,
  [SMALL_STATE(170)] = 2548,
  [SMALL_STATE(171)] = 2552,
  [SMALL_STATE(172)] = 2556,
  [SMALL_STATE(173)] = 2560,
  [SMALL_STATE(174)] = 2564,
  [SMALL_STATE(175)] = 2568,
  [SMALL_STATE(176)] = 2572,
  [SMALL_STATE(177)] = 2576,
  [SMALL_STATE(178)] = 2580,
  [SMALL_STATE(179)] = 2584,
  [SMALL_STATE(180)] = 2588,
  [SMALL_STATE(181)] = 2592,
  [SMALL_STATE(182)] = 2596,
  [SMALL_STATE(183)] = 2600,
  [SMALL_STATE(184)] = 2604,
  [SMALL_STATE(185)] = 2608,
  [SMALL_STATE(186)] = 2612,
  [SMALL_STATE(187)] = 2616,
  [SMALL_STATE(188)] = 2620,
  [SMALL_STATE(189)] = 2624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(13),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(37),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(37),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(45),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(34),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 10, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 10, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(95),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(5),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(5),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(5),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(99),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(173),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(134),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlist, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(30),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(91),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(130),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(107),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 4, .production_id = 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settinglist, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
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
