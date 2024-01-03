#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  anon_sym_SLASH = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_EQ_TILDE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_AT = 23,
  anon_sym_COLON = 24,
  anon_sym_ = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_EQ = 27,
  anon_sym_STAR = 28,
  anon_sym_POUND_BANG = 29,
  aux_sym_shebang_token1 = 30,
  anon_sym_SLASHusr_SLASHbin_SLASHenv = 31,
  sym_notcomment = 32,
  aux_sym_comment_token1 = 33,
  aux_sym_comment_token2 = 34,
  anon_sym_LBRACE_LBRACE = 35,
  anon_sym_RBRACE_RBRACE = 36,
  sym_BACKTICK = 37,
  sym_INDENTED_BACKTICK = 38,
  sym_NAME = 39,
  sym_RAW_STRING = 40,
  sym_INDENTED_RAW_STRING = 41,
  sym_STRING = 42,
  sym_INDENTED_STRING = 43,
  sym_TEXT = 44,
  sym_INDENT = 45,
  sym_DEDENT = 46,
  sym_NEWLINE = 47,
  sym_LINE = 48,
  sym_source_file = 49,
  sym_item = 50,
  sym_eol = 51,
  sym_alias = 52,
  sym_assignment = 53,
  sym_export = 54,
  sym_setting = 55,
  sym_boolean = 56,
  sym_settinglist = 57,
  sym_stringlist = 58,
  sym_expression = 59,
  sym_condition = 60,
  sym_value = 61,
  sym_call = 62,
  sym_cmd = 63,
  sym_string = 64,
  sym_sequence = 65,
  sym_recipe = 66,
  sym_recipeheader = 67,
  sym_parameters = 68,
  sym_parameter = 69,
  sym_variadic_parameters = 70,
  sym_dependencies = 71,
  sym_dependency = 72,
  sym_depcall = 73,
  sym_body = 74,
  sym_shebang_recipe = 75,
  sym_shebang_body = 76,
  sym_shebang = 77,
  sym_recipe_body = 78,
  sym_line = 79,
  sym_recipeline = 80,
  sym_comment = 81,
  sym_interpolation = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_setting_repeat1 = 84,
  aux_sym_stringlist_repeat1 = 85,
  aux_sym_parameters_repeat1 = 86,
  aux_sym_dependencies_repeat1 = 87,
  aux_sym_depcall_repeat1 = 88,
  aux_sym_shebang_body_repeat1 = 89,
  aux_sym_recipeline_repeat1 = 90,
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
  [anon_sym_SLASH] = "/",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [anon_sym_SLASH] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 5,
  [10] = 10,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 19,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 18,
  [27] = 19,
  [28] = 24,
  [29] = 17,
  [30] = 24,
  [31] = 31,
  [32] = 18,
  [33] = 33,
  [34] = 34,
  [35] = 2,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 36,
  [42] = 34,
  [43] = 37,
  [44] = 38,
  [45] = 45,
  [46] = 25,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 25,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 45,
  [102] = 102,
  [103] = 2,
  [104] = 104,
  [105] = 34,
  [106] = 106,
  [107] = 37,
  [108] = 25,
  [109] = 39,
  [110] = 36,
  [111] = 111,
  [112] = 38,
  [113] = 66,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 45,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 7,
  [125] = 125,
  [126] = 126,
  [127] = 6,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 6,
  [159] = 159,
  [160] = 7,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 136,
  [165] = 163,
  [166] = 166,
  [167] = 140,
  [168] = 166,
  [169] = 136,
  [170] = 170,
  [171] = 166,
  [172] = 140,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 162,
  [179] = 162,
  [180] = 180,
  [181] = 180,
  [182] = 141,
  [183] = 141,
  [184] = 173,
  [185] = 185,
  [186] = 137,
  [187] = 137,
  [188] = 188,
  [189] = 180,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(87);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(136);
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
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(133);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '~') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(101);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(100);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(94);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '~') ADVANCE(76);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_notcomment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(33);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 51, .external_lex_state = 2},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 51, .external_lex_state = 2},
  [4] = {.lex_state = 51, .external_lex_state = 2},
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
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
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
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 12, .external_lex_state = 3},
  [50] = {.lex_state = 51, .external_lex_state = 4},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 51, .external_lex_state = 2},
  [53] = {.lex_state = 51, .external_lex_state = 2},
  [54] = {.lex_state = 51, .external_lex_state = 2},
  [55] = {.lex_state = 51, .external_lex_state = 2},
  [56] = {.lex_state = 51, .external_lex_state = 2},
  [57] = {.lex_state = 51, .external_lex_state = 2},
  [58] = {.lex_state = 51, .external_lex_state = 2},
  [59] = {.lex_state = 51, .external_lex_state = 2},
  [60] = {.lex_state = 51, .external_lex_state = 2},
  [61] = {.lex_state = 51, .external_lex_state = 2},
  [62] = {.lex_state = 51},
  [63] = {.lex_state = 51},
  [64] = {.lex_state = 51, .external_lex_state = 2},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 51, .external_lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 51, .external_lex_state = 2},
  [69] = {.lex_state = 2, .external_lex_state = 2},
  [70] = {.lex_state = 2, .external_lex_state = 2},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 51},
  [73] = {.lex_state = 12, .external_lex_state = 3},
  [74] = {.lex_state = 12, .external_lex_state = 3},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12, .external_lex_state = 3},
  [77] = {.lex_state = 51},
  [78] = {.lex_state = 51},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3, .external_lex_state = 2},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 3, .external_lex_state = 2},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 3, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 47, .external_lex_state = 2},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 3, .external_lex_state = 2},
  [97] = {.lex_state = 47, .external_lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 47, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 12, .external_lex_state = 3},
  [114] = {.lex_state = 51},
  [115] = {.lex_state = 12, .external_lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3, .external_lex_state = 2},
  [118] = {.lex_state = 47, .external_lex_state = 2},
  [119] = {.lex_state = 12, .external_lex_state = 3},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 3, .external_lex_state = 2},
  [122] = {.lex_state = 12, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 51},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 51},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 49},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 51},
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
  [173] = {.lex_state = 95},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 51},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 30},
  [181] = {.lex_state = 30},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 95},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 51},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 30},
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
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_item] = STATE(4),
    [sym_eol] = STATE(57),
    [sym_alias] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_export] = STATE(57),
    [sym_setting] = STATE(57),
    [sym_recipe] = STATE(57),
    [sym_recipeheader] = STATE(176),
    [sym_comment] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(4),
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
  [0] = 2,
    ACTIONS(21), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(19), 16,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
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
  [23] = 12,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_alias,
    ACTIONS(28), 1,
      anon_sym_export,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(34), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      aux_sym_comment_token1,
    ACTIONS(40), 1,
      sym_NAME,
    ACTIONS(43), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(176), 1,
      sym_recipeheader,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [66] = 12,
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
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_comment,
    STATE(176), 1,
      sym_recipeheader,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [109] = 12,
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
    STATE(51), 1,
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
  [150] = 2,
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
  [171] = 2,
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
  [192] = 11,
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
    STATE(45), 1,
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
  [231] = 12,
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
    STATE(51), 1,
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
  [272] = 11,
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
    STATE(45), 1,
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
  [311] = 12,
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
    STATE(51), 1,
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
  [352] = 12,
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
    STATE(51), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    STATE(188), 1,
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
  [393] = 11,
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
    STATE(45), 1,
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
  [432] = 11,
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
    STATE(51), 1,
      sym_value,
    STATE(114), 1,
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
  [470] = 11,
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
    STATE(51), 1,
      sym_value,
    STATE(114), 1,
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
  [508] = 11,
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
    STATE(51), 1,
      sym_value,
    STATE(114), 1,
      sym_expression,
    STATE(137), 1,
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
  [546] = 10,
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
    STATE(101), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    ACTIONS(127), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(129), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(107), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [581] = 10,
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
    STATE(51), 1,
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
  [616] = 10,
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
    STATE(51), 1,
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
  [651] = 10,
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
    STATE(120), 1,
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
  [686] = 10,
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
    STATE(101), 1,
      sym_value,
    STATE(104), 1,
      sym_expression,
    ACTIONS(127), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(129), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(107), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [721] = 10,
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
    STATE(51), 1,
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
  [756] = 10,
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
    STATE(51), 1,
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
  [791] = 10,
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
    STATE(51), 1,
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
  [826] = 2,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 13,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [845] = 10,
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
    STATE(51), 1,
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
  [880] = 10,
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
    STATE(51), 1,
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
  [915] = 10,
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
    STATE(51), 1,
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
  [950] = 10,
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
    STATE(45), 1,
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
  [985] = 10,
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
    STATE(51), 1,
      sym_value,
    STATE(136), 1,
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
  [1020] = 10,
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
    STATE(51), 1,
      sym_value,
    STATE(145), 1,
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
  [1055] = 10,
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
    STATE(51), 1,
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
  [1090] = 10,
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
    STATE(120), 1,
      sym_value,
    STATE(161), 1,
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
  [1125] = 1,
    ACTIONS(139), 13,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1141] = 2,
    ACTIONS(21), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(19), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1159] = 2,
    ACTIONS(141), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(143), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1177] = 2,
    ACTIONS(145), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(135), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1195] = 1,
    ACTIONS(147), 13,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1211] = 2,
    ACTIONS(149), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(151), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1229] = 1,
    ACTIONS(151), 13,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1245] = 1,
    ACTIONS(143), 13,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1261] = 2,
    ACTIONS(153), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(139), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1279] = 1,
    ACTIONS(135), 13,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1295] = 2,
    ACTIONS(155), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(147), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1313] = 3,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(157), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(161), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1332] = 2,
    ACTIONS(145), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(135), 7,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1349] = 8,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      sym_NAME,
    STATE(92), 1,
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
  [1378] = 8,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      sym_BACKTICK,
    ACTIONS(56), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
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
  [1407] = 8,
    ACTIONS(165), 1,
      anon_sym_POUND_BANG,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(171), 1,
      sym_DEDENT,
    STATE(75), 1,
      sym_shebang,
    STATE(76), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(122), 2,
      sym_recipeline,
      sym_comment,
    STATE(149), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1435] = 4,
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
  [1454] = 2,
    ACTIONS(179), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(161), 7,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
  [1468] = 2,
    ACTIONS(181), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(183), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1481] = 2,
    ACTIONS(185), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(187), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1494] = 2,
    ACTIONS(189), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(191), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1507] = 2,
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
  [1520] = 2,
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
  [1533] = 2,
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
  [1546] = 2,
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
  [1559] = 2,
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
  [1572] = 2,
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
  [1585] = 2,
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
  [1598] = 5,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(65), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1617] = 5,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(233), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(63), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1636] = 2,
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
  [1649] = 5,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
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
  [1668] = 2,
    ACTIONS(242), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(244), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1681] = 6,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    STATE(144), 1,
      sym_variadic_parameters,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(79), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1702] = 2,
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
  [1715] = 6,
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
  [1735] = 6,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_NAME,
    ACTIONS(266), 1,
      anon_sym_,
    ACTIONS(268), 1,
      sym_NEWLINE,
    STATE(142), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1755] = 6,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_NAME,
    ACTIONS(270), 1,
      anon_sym_,
    ACTIONS(272), 1,
      sym_NEWLINE,
    STATE(146), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1775] = 5,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_stringlist_repeat1,
    STATE(87), 1,
      sym_string,
    ACTIONS(276), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(279), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1793] = 5,
    ACTIONS(282), 1,
      sym_notcomment,
    ACTIONS(285), 1,
      aux_sym_comment_token1,
    ACTIONS(288), 1,
      sym_DEDENT,
    STATE(73), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(122), 2,
      sym_recipeline,
      sym_comment,
  [1811] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(290), 1,
      sym_DEDENT,
    STATE(73), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(122), 2,
      sym_recipeline,
      sym_comment,
  [1829] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_shebang_body,
    STATE(74), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(122), 2,
      sym_recipeline,
      sym_comment,
  [1847] = 5,
    ACTIONS(167), 1,
      sym_notcomment,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(292), 1,
      sym_DEDENT,
    STATE(73), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(122), 2,
      sym_recipeline,
      sym_comment,
  [1865] = 5,
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
  [1883] = 5,
    ACTIONS(294), 1,
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
  [1901] = 4,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      sym_NAME,
    STATE(79), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(296), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1917] = 6,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
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
  [1937] = 2,
    ACTIONS(308), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(228), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1948] = 2,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(310), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1959] = 5,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(314), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_parameters,
    STATE(67), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1976] = 5,
    ACTIONS(264), 1,
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
  [1993] = 2,
    ACTIONS(322), 1,
      anon_sym_EQ,
    ACTIONS(320), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2004] = 5,
    ACTIONS(268), 1,
      sym_NEWLINE,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    STATE(142), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2021] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(328), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(326), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2034] = 5,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    ACTIONS(330), 1,
      sym_NEWLINE,
    STATE(147), 1,
      sym_dependencies,
    STATE(89), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2051] = 4,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_NAME,
    ACTIONS(332), 1,
      sym_NEWLINE,
    STATE(96), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2065] = 2,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2075] = 3,
    STATE(81), 1,
      sym_string,
    ACTIONS(60), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(62), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2087] = 1,
    ACTIONS(336), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2095] = 5,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(338), 1,
      anon_sym_COLON_EQ,
    STATE(58), 1,
      sym_comment,
    STATE(68), 1,
      sym_eol,
  [2111] = 4,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(343), 1,
      sym_TEXT,
    ACTIONS(346), 1,
      sym_NEWLINE,
    STATE(94), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2125] = 3,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(102), 2,
      sym_boolean,
      sym_settinglist,
  [2137] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_NAME,
    ACTIONS(358), 1,
      sym_NEWLINE,
    STATE(96), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2151] = 4,
    ACTIONS(360), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(362), 1,
      sym_TEXT,
    ACTIONS(364), 1,
      sym_NEWLINE,
    STATE(100), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2165] = 1,
    ACTIONS(366), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2173] = 2,
    ACTIONS(368), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(274), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2183] = 4,
    ACTIONS(360), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(370), 1,
      sym_TEXT,
    ACTIONS(372), 1,
      sym_NEWLINE,
    STATE(94), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2197] = 2,
    ACTIONS(161), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
    ACTIONS(374), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2206] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(56), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2219] = 1,
    ACTIONS(19), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2226] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(52), 1,
      sym_eol,
    STATE(58), 1,
      sym_comment,
  [2239] = 1,
    ACTIONS(139), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2246] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(64), 1,
      sym_eol,
  [2259] = 1,
    ACTIONS(135), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2266] = 2,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 3,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_RBRACE_RBRACE,
  [2275] = 1,
    ACTIONS(151), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2282] = 1,
    ACTIONS(143), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2289] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_comment,
    STATE(59), 1,
      sym_eol,
  [2302] = 1,
    ACTIONS(147), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2309] = 1,
    ACTIONS(242), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2315] = 1,
    ACTIONS(378), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [2321] = 1,
    ACTIONS(380), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2327] = 3,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    STATE(138), 1,
      sym_parameter,
  [2337] = 1,
    ACTIONS(382), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2343] = 2,
    ACTIONS(386), 1,
      sym_NEWLINE,
    ACTIONS(384), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2351] = 1,
    ACTIONS(388), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2357] = 2,
    ACTIONS(161), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(390), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2365] = 1,
    ACTIONS(392), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2371] = 1,
    ACTIONS(394), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2377] = 1,
    ACTIONS(396), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2382] = 1,
    ACTIONS(68), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2387] = 2,
    ACTIONS(398), 1,
      sym_NAME,
    STATE(60), 1,
      sym_assignment,
  [2394] = 2,
    ACTIONS(400), 1,
      anon_sym_shell,
    ACTIONS(402), 1,
      sym_NAME,
  [2401] = 1,
    ACTIONS(64), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2406] = 1,
    ACTIONS(404), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [2411] = 2,
    ACTIONS(406), 1,
      aux_sym_shebang_token1,
    ACTIONS(408), 1,
      anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [2418] = 1,
    ACTIONS(410), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2423] = 2,
    ACTIONS(412), 1,
      sym_NAME,
    STATE(135), 1,
      sym_depcall,
  [2430] = 2,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [2437] = 1,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
  [2441] = 1,
    ACTIONS(420), 1,
      sym_NAME,
  [2445] = 1,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [2449] = 1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [2453] = 1,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
  [2457] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [2461] = 1,
    ACTIONS(268), 1,
      sym_NEWLINE,
  [2465] = 1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
  [2469] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
  [2473] = 1,
    ACTIONS(330), 1,
      sym_NEWLINE,
  [2477] = 1,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
  [2481] = 1,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [2485] = 1,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
  [2489] = 1,
    ACTIONS(264), 1,
      sym_NEWLINE,
  [2493] = 1,
    ACTIONS(440), 1,
      sym_NEWLINE,
  [2497] = 1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
  [2501] = 1,
    ACTIONS(444), 1,
      sym_DEDENT,
  [2505] = 1,
    ACTIONS(446), 1,
      sym_DEDENT,
  [2509] = 1,
    ACTIONS(448), 1,
      sym_NAME,
  [2513] = 1,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
  [2517] = 1,
    ACTIONS(452), 1,
      sym_TEXT,
  [2521] = 1,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [2525] = 1,
    ACTIONS(456), 1,
      sym_NAME,
  [2529] = 1,
    ACTIONS(458), 1,
      sym_NEWLINE,
  [2533] = 1,
    ACTIONS(460), 1,
      sym_NAME,
  [2537] = 1,
    ACTIONS(64), 1,
      anon_sym_RBRACE_RBRACE,
  [2541] = 1,
    ACTIONS(314), 1,
      anon_sym_COLON,
  [2545] = 1,
    ACTIONS(68), 1,
      anon_sym_RBRACE_RBRACE,
  [2549] = 1,
    ACTIONS(462), 1,
      anon_sym_RBRACE_RBRACE,
  [2553] = 1,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [2557] = 1,
    ACTIONS(466), 1,
      sym_NEWLINE,
  [2561] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2565] = 1,
    ACTIONS(470), 1,
      sym_NEWLINE,
  [2569] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [2573] = 1,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [2577] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [2581] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [2585] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON_EQ,
  [2589] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2593] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [2597] = 1,
    ACTIONS(486), 1,
      aux_sym_comment_token2,
  [2601] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON_EQ,
  [2605] = 1,
    ACTIONS(488), 1,
      anon_sym_COLON_EQ,
  [2609] = 1,
    ACTIONS(490), 1,
      sym_NEWLINE,
  [2613] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [2617] = 1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [2621] = 1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
  [2625] = 1,
    ACTIONS(498), 1,
      anon_sym_else,
  [2629] = 1,
    ACTIONS(500), 1,
      anon_sym_else,
  [2633] = 1,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
  [2637] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [2641] = 1,
    ACTIONS(506), 1,
      aux_sym_comment_token2,
  [2645] = 1,
    ACTIONS(508), 1,
      sym_NAME,
  [2649] = 1,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
  [2653] = 1,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
  [2657] = 1,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [2661] = 1,
    ACTIONS(516), 1,
      anon_sym_else,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 393,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 546,
  [SMALL_STATE(18)] = 581,
  [SMALL_STATE(19)] = 616,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 686,
  [SMALL_STATE(22)] = 721,
  [SMALL_STATE(23)] = 756,
  [SMALL_STATE(24)] = 791,
  [SMALL_STATE(25)] = 826,
  [SMALL_STATE(26)] = 845,
  [SMALL_STATE(27)] = 880,
  [SMALL_STATE(28)] = 915,
  [SMALL_STATE(29)] = 950,
  [SMALL_STATE(30)] = 985,
  [SMALL_STATE(31)] = 1020,
  [SMALL_STATE(32)] = 1055,
  [SMALL_STATE(33)] = 1090,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1141,
  [SMALL_STATE(36)] = 1159,
  [SMALL_STATE(37)] = 1177,
  [SMALL_STATE(38)] = 1195,
  [SMALL_STATE(39)] = 1211,
  [SMALL_STATE(40)] = 1229,
  [SMALL_STATE(41)] = 1245,
  [SMALL_STATE(42)] = 1261,
  [SMALL_STATE(43)] = 1279,
  [SMALL_STATE(44)] = 1295,
  [SMALL_STATE(45)] = 1313,
  [SMALL_STATE(46)] = 1332,
  [SMALL_STATE(47)] = 1349,
  [SMALL_STATE(48)] = 1378,
  [SMALL_STATE(49)] = 1407,
  [SMALL_STATE(50)] = 1435,
  [SMALL_STATE(51)] = 1454,
  [SMALL_STATE(52)] = 1468,
  [SMALL_STATE(53)] = 1481,
  [SMALL_STATE(54)] = 1494,
  [SMALL_STATE(55)] = 1507,
  [SMALL_STATE(56)] = 1520,
  [SMALL_STATE(57)] = 1533,
  [SMALL_STATE(58)] = 1546,
  [SMALL_STATE(59)] = 1559,
  [SMALL_STATE(60)] = 1572,
  [SMALL_STATE(61)] = 1585,
  [SMALL_STATE(62)] = 1598,
  [SMALL_STATE(63)] = 1617,
  [SMALL_STATE(64)] = 1636,
  [SMALL_STATE(65)] = 1649,
  [SMALL_STATE(66)] = 1668,
  [SMALL_STATE(67)] = 1681,
  [SMALL_STATE(68)] = 1702,
  [SMALL_STATE(69)] = 1715,
  [SMALL_STATE(70)] = 1735,
  [SMALL_STATE(71)] = 1755,
  [SMALL_STATE(72)] = 1775,
  [SMALL_STATE(73)] = 1793,
  [SMALL_STATE(74)] = 1811,
  [SMALL_STATE(75)] = 1829,
  [SMALL_STATE(76)] = 1847,
  [SMALL_STATE(77)] = 1865,
  [SMALL_STATE(78)] = 1883,
  [SMALL_STATE(79)] = 1901,
  [SMALL_STATE(80)] = 1917,
  [SMALL_STATE(81)] = 1937,
  [SMALL_STATE(82)] = 1948,
  [SMALL_STATE(83)] = 1959,
  [SMALL_STATE(84)] = 1976,
  [SMALL_STATE(85)] = 1993,
  [SMALL_STATE(86)] = 2004,
  [SMALL_STATE(87)] = 2021,
  [SMALL_STATE(88)] = 2034,
  [SMALL_STATE(89)] = 2051,
  [SMALL_STATE(90)] = 2065,
  [SMALL_STATE(91)] = 2075,
  [SMALL_STATE(92)] = 2087,
  [SMALL_STATE(93)] = 2095,
  [SMALL_STATE(94)] = 2111,
  [SMALL_STATE(95)] = 2125,
  [SMALL_STATE(96)] = 2137,
  [SMALL_STATE(97)] = 2151,
  [SMALL_STATE(98)] = 2165,
  [SMALL_STATE(99)] = 2173,
  [SMALL_STATE(100)] = 2183,
  [SMALL_STATE(101)] = 2197,
  [SMALL_STATE(102)] = 2206,
  [SMALL_STATE(103)] = 2219,
  [SMALL_STATE(104)] = 2226,
  [SMALL_STATE(105)] = 2239,
  [SMALL_STATE(106)] = 2246,
  [SMALL_STATE(107)] = 2259,
  [SMALL_STATE(108)] = 2266,
  [SMALL_STATE(109)] = 2275,
  [SMALL_STATE(110)] = 2282,
  [SMALL_STATE(111)] = 2289,
  [SMALL_STATE(112)] = 2302,
  [SMALL_STATE(113)] = 2309,
  [SMALL_STATE(114)] = 2315,
  [SMALL_STATE(115)] = 2321,
  [SMALL_STATE(116)] = 2327,
  [SMALL_STATE(117)] = 2337,
  [SMALL_STATE(118)] = 2343,
  [SMALL_STATE(119)] = 2351,
  [SMALL_STATE(120)] = 2357,
  [SMALL_STATE(121)] = 2365,
  [SMALL_STATE(122)] = 2371,
  [SMALL_STATE(123)] = 2377,
  [SMALL_STATE(124)] = 2382,
  [SMALL_STATE(125)] = 2387,
  [SMALL_STATE(126)] = 2394,
  [SMALL_STATE(127)] = 2401,
  [SMALL_STATE(128)] = 2406,
  [SMALL_STATE(129)] = 2411,
  [SMALL_STATE(130)] = 2418,
  [SMALL_STATE(131)] = 2423,
  [SMALL_STATE(132)] = 2430,
  [SMALL_STATE(133)] = 2437,
  [SMALL_STATE(134)] = 2441,
  [SMALL_STATE(135)] = 2445,
  [SMALL_STATE(136)] = 2449,
  [SMALL_STATE(137)] = 2453,
  [SMALL_STATE(138)] = 2457,
  [SMALL_STATE(139)] = 2461,
  [SMALL_STATE(140)] = 2465,
  [SMALL_STATE(141)] = 2469,
  [SMALL_STATE(142)] = 2473,
  [SMALL_STATE(143)] = 2477,
  [SMALL_STATE(144)] = 2481,
  [SMALL_STATE(145)] = 2485,
  [SMALL_STATE(146)] = 2489,
  [SMALL_STATE(147)] = 2493,
  [SMALL_STATE(148)] = 2497,
  [SMALL_STATE(149)] = 2501,
  [SMALL_STATE(150)] = 2505,
  [SMALL_STATE(151)] = 2509,
  [SMALL_STATE(152)] = 2513,
  [SMALL_STATE(153)] = 2517,
  [SMALL_STATE(154)] = 2521,
  [SMALL_STATE(155)] = 2525,
  [SMALL_STATE(156)] = 2529,
  [SMALL_STATE(157)] = 2533,
  [SMALL_STATE(158)] = 2537,
  [SMALL_STATE(159)] = 2541,
  [SMALL_STATE(160)] = 2545,
  [SMALL_STATE(161)] = 2549,
  [SMALL_STATE(162)] = 2553,
  [SMALL_STATE(163)] = 2557,
  [SMALL_STATE(164)] = 2561,
  [SMALL_STATE(165)] = 2565,
  [SMALL_STATE(166)] = 2569,
  [SMALL_STATE(167)] = 2573,
  [SMALL_STATE(168)] = 2577,
  [SMALL_STATE(169)] = 2581,
  [SMALL_STATE(170)] = 2585,
  [SMALL_STATE(171)] = 2589,
  [SMALL_STATE(172)] = 2593,
  [SMALL_STATE(173)] = 2597,
  [SMALL_STATE(174)] = 2601,
  [SMALL_STATE(175)] = 2605,
  [SMALL_STATE(176)] = 2609,
  [SMALL_STATE(177)] = 2613,
  [SMALL_STATE(178)] = 2617,
  [SMALL_STATE(179)] = 2621,
  [SMALL_STATE(180)] = 2625,
  [SMALL_STATE(181)] = 2629,
  [SMALL_STATE(182)] = 2633,
  [SMALL_STATE(183)] = 2637,
  [SMALL_STATE(184)] = 2641,
  [SMALL_STATE(185)] = 2645,
  [SMALL_STATE(186)] = 2649,
  [SMALL_STATE(187)] = 2653,
  [SMALL_STATE(188)] = 2657,
  [SMALL_STATE(189)] = 2661,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 6),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(15),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(46),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
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
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 10, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 10, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(91),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(97),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(173),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlist, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(134),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 5),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(33),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(94),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(131),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(121),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 4, .production_id = 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settinglist, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeheader, 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
