#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
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
  sym_attribute = 66,
  sym_recipe = 67,
  sym_recipe_header = 68,
  sym_parameters = 69,
  sym_parameter = 70,
  sym_variadic_parameters = 71,
  sym_dependencies = 72,
  sym_dependency = 73,
  sym_depcall = 74,
  sym_body = 75,
  sym_shebang_recipe = 76,
  sym_shebang_body = 77,
  sym_shebang = 78,
  sym_recipe_body = 79,
  sym_line = 80,
  sym_recipeline = 81,
  sym_comment = 82,
  sym_interpolation = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_setting_repeat1 = 85,
  aux_sym_stringlist_repeat1 = 86,
  aux_sym_parameters_repeat1 = 87,
  aux_sym_dependencies_repeat1 = 88,
  aux_sym_depcall_repeat1 = 89,
  aux_sym_shebang_body_repeat1 = 90,
  aux_sym_recipeline_repeat1 = 91,
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
  [sym_attribute] = "attribute",
  [sym_recipe] = "recipe",
  [sym_recipe_header] = "recipe_header",
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
  [sym_attribute] = sym_attribute,
  [sym_recipe] = sym_recipe,
  [sym_recipe_header] = sym_recipe_header,
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_header] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 6,
  [14] = 14,
  [15] = 14,
  [16] = 14,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 17,
  [28] = 24,
  [29] = 17,
  [30] = 30,
  [31] = 25,
  [32] = 24,
  [33] = 20,
  [34] = 34,
  [35] = 4,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 34,
  [42] = 40,
  [43] = 37,
  [44] = 38,
  [45] = 22,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 46,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 22,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 34,
  [105] = 46,
  [106] = 106,
  [107] = 107,
  [108] = 37,
  [109] = 38,
  [110] = 110,
  [111] = 111,
  [112] = 40,
  [113] = 4,
  [114] = 22,
  [115] = 36,
  [116] = 116,
  [117] = 117,
  [118] = 59,
  [119] = 119,
  [120] = 46,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 10,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 7,
  [133] = 133,
  [134] = 134,
  [135] = 54,
  [136] = 136,
  [137] = 59,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 10,
  [170] = 170,
  [171] = 7,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 147,
  [176] = 176,
  [177] = 143,
  [178] = 151,
  [179] = 179,
  [180] = 170,
  [181] = 147,
  [182] = 182,
  [183] = 143,
  [184] = 151,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 185,
  [189] = 189,
  [190] = 185,
  [191] = 149,
  [192] = 149,
  [193] = 145,
  [194] = 145,
  [195] = 158,
  [196] = 158,
  [197] = 197,
  [198] = 198,
  [199] = 148,
  [200] = 148,
  [201] = 201,
  [202] = 202,
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
      if (lookahead == '@') ADVANCE(79);
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
      if (lookahead == '[') ADVANCE(58);
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
  [2] = {.lex_state = 51, .external_lex_state = 2},
  [3] = {.lex_state = 51, .external_lex_state = 2},
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
  [22] = {.lex_state = 3},
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
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
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
  [51] = {.lex_state = 51, .external_lex_state = 4},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 51, .external_lex_state = 2},
  [54] = {.lex_state = 51, .external_lex_state = 2},
  [55] = {.lex_state = 51, .external_lex_state = 2},
  [56] = {.lex_state = 51, .external_lex_state = 2},
  [57] = {.lex_state = 51, .external_lex_state = 2},
  [58] = {.lex_state = 51, .external_lex_state = 2},
  [59] = {.lex_state = 51, .external_lex_state = 2},
  [60] = {.lex_state = 51, .external_lex_state = 2},
  [61] = {.lex_state = 51, .external_lex_state = 2},
  [62] = {.lex_state = 51, .external_lex_state = 2},
  [63] = {.lex_state = 51, .external_lex_state = 2},
  [64] = {.lex_state = 51, .external_lex_state = 2},
  [65] = {.lex_state = 51, .external_lex_state = 2},
  [66] = {.lex_state = 51, .external_lex_state = 2},
  [67] = {.lex_state = 51},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 51},
  [70] = {.lex_state = 51},
  [71] = {.lex_state = 12, .external_lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 2, .external_lex_state = 2},
  [75] = {.lex_state = 51},
  [76] = {.lex_state = 12, .external_lex_state = 3},
  [77] = {.lex_state = 12, .external_lex_state = 3},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 2, .external_lex_state = 2},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 2, .external_lex_state = 2},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 3, .external_lex_state = 2},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 3, .external_lex_state = 2},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 47, .external_lex_state = 2},
  [94] = {.lex_state = 3, .external_lex_state = 2},
  [95] = {.lex_state = 47, .external_lex_state = 2},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 3, .external_lex_state = 2},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 47, .external_lex_state = 2},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 12, .external_lex_state = 3},
  [118] = {.lex_state = 12, .external_lex_state = 3},
  [119] = {.lex_state = 12, .external_lex_state = 3},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3, .external_lex_state = 2},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 12, .external_lex_state = 3},
  [125] = {.lex_state = 3, .external_lex_state = 2},
  [126] = {.lex_state = 47, .external_lex_state = 2},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 51},
  [149] = {.lex_state = 51},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 49},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 51},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 95},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 95},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 95},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 30},
  [194] = {.lex_state = 30},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 51},
  [200] = {.lex_state = 51},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 3},
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
    [sym_source_file] = STATE(189),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(53),
    [sym_alias] = STATE(53),
    [sym_assignment] = STATE(53),
    [sym_export] = STATE(53),
    [sym_setting] = STATE(53),
    [sym_attribute] = STATE(121),
    [sym_recipe] = STATE(53),
    [sym_recipe_header] = STATE(186),
    [sym_comment] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_alias] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(15),
    [sym_NAME] = ACTIONS(17),
    [sym_NEWLINE] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_alias,
    ACTIONS(26), 1,
      anon_sym_export,
    ACTIONS(29), 1,
      anon_sym_set,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(38), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      sym_NAME,
    ACTIONS(44), 1,
      sym_NEWLINE,
    STATE(54), 1,
      sym_comment,
    STATE(121), 1,
      sym_attribute,
    STATE(186), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(53), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [49] = 14,
    ACTIONS(5), 1,
      anon_sym_alias,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      sym_NAME,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
    STATE(121), 1,
      sym_attribute,
    STATE(186), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(53), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [98] = 2,
    ACTIONS(51), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(49), 16,
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
  [121] = 11,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      sym_BACKTICK,
    ACTIONS(64), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(67), 1,
      sym_NAME,
    STATE(46), 1,
      sym_value,
    ACTIONS(70), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(73), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(5), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [160] = 12,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(131), 1,
      sym_expression,
    STATE(143), 1,
      sym_sequence,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [201] = 2,
    ACTIONS(94), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(92), 11,
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
  [222] = 11,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      sym_BACKTICK,
    ACTIONS(102), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(104), 1,
      sym_NAME,
    STATE(46), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(9), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [261] = 11,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      sym_BACKTICK,
    ACTIONS(102), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(104), 1,
      sym_NAME,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(5), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [300] = 2,
    ACTIONS(114), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 11,
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
  [321] = 12,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_value,
    STATE(131), 1,
      sym_expression,
    STATE(183), 1,
      sym_sequence,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [362] = 12,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_value,
    STATE(131), 1,
      sym_expression,
    STATE(146), 1,
      sym_sequence,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [403] = 12,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_value,
    STATE(131), 1,
      sym_expression,
    STATE(177), 1,
      sym_sequence,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [444] = 11,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(123), 1,
      sym_expression,
    STATE(199), 1,
      sym_condition,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [482] = 11,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(123), 1,
      sym_expression,
    STATE(200), 1,
      sym_condition,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [520] = 11,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(123), 1,
      sym_expression,
    STATE(148), 1,
      sym_condition,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [558] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(10), 1,
      sym_expression,
    STATE(52), 1,
      sym_value,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [593] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      sym_BACKTICK,
    ACTIONS(102), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      sym_NAME,
    STATE(120), 1,
      sym_value,
    STATE(169), 1,
      sym_expression,
    ACTIONS(106), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [628] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(159), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [663] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(196), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [698] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [733] = 2,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 13,
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
  [752] = 10,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_BACKTICK,
    ACTIONS(136), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(138), 1,
      sym_NAME,
    STATE(105), 1,
      sym_value,
    STATE(111), 1,
      sym_expression,
    ACTIONS(140), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(142), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(108), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [787] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [822] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(175), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [857] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(147), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [892] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      sym_BACKTICK,
    ACTIONS(102), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(104), 1,
      sym_NAME,
    STATE(10), 1,
      sym_expression,
    STATE(46), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [927] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(178), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [962] = 10,
    ACTIONS(130), 1,
      anon_sym_if,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_BACKTICK,
    ACTIONS(136), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(138), 1,
      sym_NAME,
    STATE(105), 1,
      sym_value,
    STATE(128), 1,
      sym_expression,
    ACTIONS(140), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(142), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(108), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [997] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      sym_BACKTICK,
    ACTIONS(102), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      sym_NAME,
    STATE(120), 1,
      sym_value,
    STATE(172), 1,
      sym_expression,
    ACTIONS(106), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(37), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1032] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(181), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1067] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(184), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1102] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(86), 1,
      sym_NAME,
    STATE(52), 1,
      sym_value,
    STATE(195), 1,
      sym_expression,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1137] = 2,
    ACTIONS(144), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(146), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1155] = 2,
    ACTIONS(51), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(49), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1173] = 2,
    ACTIONS(148), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(150), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1191] = 2,
    ACTIONS(152), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(126), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1209] = 1,
    ACTIONS(154), 13,
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
  [1225] = 1,
    ACTIONS(150), 13,
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
  [1241] = 1,
    ACTIONS(156), 13,
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
  [1257] = 1,
    ACTIONS(146), 13,
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
  [1273] = 2,
    ACTIONS(158), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(156), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1291] = 1,
    ACTIONS(126), 13,
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
  [1307] = 2,
    ACTIONS(160), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(154), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1325] = 2,
    ACTIONS(152), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(126), 7,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1342] = 3,
    ACTIONS(164), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(162), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(166), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1361] = 8,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(168), 1,
      sym_NAME,
    STATE(103), 1,
      sym_value,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1390] = 8,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym_BACKTICK,
    ACTIONS(84), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(168), 1,
      sym_NAME,
    STATE(92), 1,
      sym_value,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(43), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1419] = 8,
    ACTIONS(170), 1,
      anon_sym_POUND_BANG,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    ACTIONS(176), 1,
      sym_DEDENT,
    STATE(78), 1,
      sym_shebang,
    STATE(71), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(119), 2,
      sym_recipeline,
      sym_comment,
    STATE(157), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1447] = 4,
    ACTIONS(182), 1,
      sym_INDENT,
    STATE(63), 1,
      sym_body,
    ACTIONS(180), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(178), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1467] = 4,
    ACTIONS(182), 1,
      sym_INDENT,
    STATE(60), 1,
      sym_body,
    ACTIONS(186), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(184), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1487] = 2,
    ACTIONS(188), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(166), 7,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
  [1501] = 2,
    ACTIONS(192), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(190), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1515] = 2,
    ACTIONS(196), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(194), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1529] = 2,
    ACTIONS(200), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(198), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1543] = 2,
    ACTIONS(204), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(202), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1557] = 2,
    ACTIONS(208), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(206), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1571] = 2,
    ACTIONS(212), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(210), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1585] = 2,
    ACTIONS(216), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(214), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1599] = 2,
    ACTIONS(180), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(178), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1613] = 2,
    ACTIONS(220), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(218), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1627] = 2,
    ACTIONS(224), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(222), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1641] = 2,
    ACTIONS(228), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(226), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1655] = 2,
    ACTIONS(232), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(230), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1669] = 2,
    ACTIONS(236), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(234), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1683] = 2,
    ACTIONS(240), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(238), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1697] = 5,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(69), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1716] = 6,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    STATE(153), 1,
      sym_variadic_parameters,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(72), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1737] = 5,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(262), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(69), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1756] = 5,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(67), 2,
      sym_string,
      aux_sym_setting_repeat1,
  [1775] = 5,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    ACTIONS(267), 1,
      sym_DEDENT,
    STATE(77), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(119), 2,
      sym_recipeline,
      sym_comment,
  [1793] = 4,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    ACTIONS(274), 1,
      sym_NAME,
    STATE(72), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(269), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1809] = 6,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(277), 1,
      anon_sym_COLON_EQ,
    ACTIONS(279), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_parameters,
    STATE(68), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1829] = 6,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_,
    ACTIONS(285), 1,
      sym_NAME,
    ACTIONS(287), 1,
      sym_NEWLINE,
    STATE(187), 1,
      sym_dependencies,
    STATE(97), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1849] = 5,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_stringlist_repeat1,
    STATE(86), 1,
      sym_string,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1867] = 5,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      sym_DEDENT,
    STATE(77), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(119), 2,
      sym_recipeline,
      sym_comment,
  [1885] = 5,
    ACTIONS(293), 1,
      sym_notcomment,
    ACTIONS(296), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      sym_DEDENT,
    STATE(77), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(119), 2,
      sym_recipeline,
      sym_comment,
  [1903] = 5,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    STATE(201), 1,
      sym_shebang_body,
    STATE(76), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(119), 2,
      sym_recipeline,
      sym_comment,
  [1921] = 5,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_stringlist_repeat1,
    STATE(86), 1,
      sym_string,
    ACTIONS(303), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(306), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1939] = 6,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_NAME,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_NEWLINE,
    STATE(154), 1,
      sym_dependencies,
    STATE(97), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1959] = 5,
    STATE(75), 1,
      aux_sym_stringlist_repeat1,
    STATE(86), 1,
      sym_string,
    STATE(142), 1,
      sym_stringlist,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1977] = 6,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_NAME,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(315), 1,
      sym_NEWLINE,
    STATE(150), 1,
      sym_dependencies,
    STATE(97), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1997] = 5,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_parameters,
    STATE(68), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2014] = 2,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(319), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2025] = 5,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_parameters,
    STATE(68), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2042] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(329), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(327), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2055] = 5,
    ACTIONS(287), 1,
      sym_NEWLINE,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_NAME,
    STATE(187), 1,
      sym_dependencies,
    STATE(97), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2072] = 5,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_NAME,
    ACTIONS(335), 1,
      sym_NEWLINE,
    STATE(160), 1,
      sym_dependencies,
    STATE(97), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2089] = 2,
    ACTIONS(339), 1,
      anon_sym_EQ,
    ACTIONS(337), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2100] = 5,
    ACTIONS(315), 1,
      sym_NEWLINE,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_NAME,
    STATE(150), 1,
      sym_dependencies,
    STATE(97), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2117] = 2,
    ACTIONS(341), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(257), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2128] = 1,
    ACTIONS(343), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2136] = 4,
    ACTIONS(345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      sym_TEXT,
    ACTIONS(349), 1,
      sym_NEWLINE,
    STATE(102), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2150] = 4,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym_NAME,
    ACTIONS(357), 1,
      sym_NEWLINE,
    STATE(94), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2164] = 4,
    ACTIONS(359), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(362), 1,
      sym_TEXT,
    ACTIONS(365), 1,
      sym_NEWLINE,
    STATE(95), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2178] = 2,
    ACTIONS(367), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(301), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2188] = 4,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_NAME,
    ACTIONS(369), 1,
      sym_NEWLINE,
    STATE(94), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2202] = 3,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(107), 2,
      sym_boolean,
      sym_settinglist,
  [2214] = 3,
    STATE(91), 1,
      sym_string,
    ACTIONS(88), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(90), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2226] = 2,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2236] = 5,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(377), 1,
      anon_sym_COLON_EQ,
    STATE(54), 1,
      sym_comment,
    STATE(66), 1,
      sym_eol,
  [2252] = 4,
    ACTIONS(345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      sym_TEXT,
    ACTIONS(381), 1,
      sym_NEWLINE,
    STATE(95), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2266] = 1,
    ACTIONS(383), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2274] = 1,
    ACTIONS(146), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2281] = 2,
    ACTIONS(166), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
    ACTIONS(385), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2290] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(54), 1,
      sym_comment,
    STATE(64), 1,
      sym_eol,
  [2303] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(54), 1,
      sym_comment,
    STATE(57), 1,
      sym_eol,
  [2316] = 1,
    ACTIONS(126), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2323] = 1,
    ACTIONS(154), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2330] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(54), 1,
      sym_comment,
    STATE(62), 1,
      sym_eol,
  [2343] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(54), 1,
      sym_comment,
    STATE(65), 1,
      sym_eol,
  [2356] = 1,
    ACTIONS(156), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2363] = 1,
    ACTIONS(49), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2370] = 2,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 3,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_RBRACE_RBRACE,
  [2379] = 1,
    ACTIONS(150), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2386] = 4,
    ACTIONS(389), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      sym_NEWLINE,
    STATE(134), 1,
      sym_eol,
    STATE(135), 1,
      sym_comment,
  [2399] = 1,
    ACTIONS(393), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2405] = 1,
    ACTIONS(214), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2411] = 1,
    ACTIONS(395), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2417] = 2,
    ACTIONS(166), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(397), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2425] = 3,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym_NAME,
    STATE(166), 1,
      sym_recipe_header,
  [2435] = 1,
    ACTIONS(401), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2441] = 1,
    ACTIONS(403), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [2447] = 1,
    ACTIONS(405), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2453] = 1,
    ACTIONS(407), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2459] = 2,
    ACTIONS(411), 1,
      sym_NEWLINE,
    ACTIONS(409), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2467] = 3,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_NAME,
    STATE(141), 1,
      sym_parameter,
  [2477] = 1,
    ACTIONS(112), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2482] = 1,
    ACTIONS(413), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2487] = 1,
    ACTIONS(415), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2492] = 2,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [2499] = 1,
    ACTIONS(92), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2504] = 1,
    ACTIONS(421), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [2509] = 1,
    ACTIONS(423), 2,
      anon_sym_AT,
      sym_NAME,
  [2514] = 1,
    ACTIONS(194), 2,
      anon_sym_AT,
      sym_NAME,
  [2519] = 2,
    ACTIONS(425), 1,
      sym_NAME,
    STATE(55), 1,
      sym_assignment,
  [2526] = 1,
    ACTIONS(214), 2,
      anon_sym_AT,
      sym_NAME,
  [2531] = 2,
    ACTIONS(427), 1,
      sym_NAME,
    STATE(144), 1,
      sym_depcall,
  [2538] = 2,
    ACTIONS(429), 1,
      aux_sym_shebang_token1,
    ACTIONS(431), 1,
      anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [2545] = 2,
    ACTIONS(433), 1,
      anon_sym_shell,
    ACTIONS(435), 1,
      sym_NAME,
  [2552] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON,
  [2556] = 1,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
  [2560] = 1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [2564] = 1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [2568] = 1,
    ACTIONS(445), 1,
      anon_sym_else,
  [2572] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [2576] = 1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [2580] = 1,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
  [2584] = 1,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
  [2588] = 1,
    ACTIONS(287), 1,
      sym_NEWLINE,
  [2592] = 1,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
  [2596] = 1,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
  [2600] = 1,
    ACTIONS(459), 1,
      anon_sym_COLON,
  [2604] = 1,
    ACTIONS(315), 1,
      sym_NEWLINE,
  [2608] = 1,
    ACTIONS(461), 1,
      sym_TEXT,
  [2612] = 1,
    ACTIONS(463), 1,
      sym_NEWLINE,
  [2616] = 1,
    ACTIONS(465), 1,
      sym_DEDENT,
  [2620] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [2624] = 1,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
  [2628] = 1,
    ACTIONS(471), 1,
      sym_NEWLINE,
  [2632] = 1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [2636] = 1,
    ACTIONS(475), 1,
      sym_NAME,
  [2640] = 1,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
  [2644] = 1,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
  [2648] = 1,
    ACTIONS(481), 1,
      sym_NAME,
  [2652] = 1,
    ACTIONS(483), 1,
      sym_NEWLINE,
  [2656] = 1,
    ACTIONS(317), 1,
      anon_sym_COLON,
  [2660] = 1,
    ACTIONS(485), 1,
      sym_NAME,
  [2664] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE_RBRACE,
  [2668] = 1,
    ACTIONS(487), 1,
      sym_NEWLINE,
  [2672] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACE_RBRACE,
  [2676] = 1,
    ACTIONS(489), 1,
      anon_sym_RBRACE_RBRACE,
  [2680] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
  [2684] = 1,
    ACTIONS(493), 1,
      sym_NEWLINE,
  [2688] = 1,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [2692] = 1,
    ACTIONS(497), 1,
      anon_sym_COLON_EQ,
  [2696] = 1,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [2700] = 1,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [2704] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON_EQ,
  [2708] = 1,
    ACTIONS(503), 1,
      sym_NEWLINE,
  [2712] = 1,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [2716] = 1,
    ACTIONS(507), 1,
      anon_sym_COLON_EQ,
  [2720] = 1,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
  [2724] = 1,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
  [2728] = 1,
    ACTIONS(513), 1,
      aux_sym_comment_token2,
  [2732] = 1,
    ACTIONS(515), 1,
      sym_NEWLINE,
  [2736] = 1,
    ACTIONS(335), 1,
      sym_NEWLINE,
  [2740] = 1,
    ACTIONS(517), 1,
      aux_sym_comment_token2,
  [2744] = 1,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
  [2748] = 1,
    ACTIONS(521), 1,
      aux_sym_comment_token2,
  [2752] = 1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
  [2756] = 1,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
  [2760] = 1,
    ACTIONS(527), 1,
      anon_sym_else,
  [2764] = 1,
    ACTIONS(529), 1,
      anon_sym_else,
  [2768] = 1,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
  [2772] = 1,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
  [2776] = 1,
    ACTIONS(535), 1,
      sym_NAME,
  [2780] = 1,
    ACTIONS(537), 1,
      sym_NAME,
  [2784] = 1,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
  [2788] = 1,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
  [2792] = 1,
    ACTIONS(543), 1,
      sym_DEDENT,
  [2796] = 1,
    ACTIONS(545), 1,
      sym_NAME,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 444,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 558,
  [SMALL_STATE(18)] = 593,
  [SMALL_STATE(19)] = 628,
  [SMALL_STATE(20)] = 663,
  [SMALL_STATE(21)] = 698,
  [SMALL_STATE(22)] = 733,
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
  [SMALL_STATE(34)] = 1137,
  [SMALL_STATE(35)] = 1155,
  [SMALL_STATE(36)] = 1173,
  [SMALL_STATE(37)] = 1191,
  [SMALL_STATE(38)] = 1209,
  [SMALL_STATE(39)] = 1225,
  [SMALL_STATE(40)] = 1241,
  [SMALL_STATE(41)] = 1257,
  [SMALL_STATE(42)] = 1273,
  [SMALL_STATE(43)] = 1291,
  [SMALL_STATE(44)] = 1307,
  [SMALL_STATE(45)] = 1325,
  [SMALL_STATE(46)] = 1342,
  [SMALL_STATE(47)] = 1361,
  [SMALL_STATE(48)] = 1390,
  [SMALL_STATE(49)] = 1419,
  [SMALL_STATE(50)] = 1447,
  [SMALL_STATE(51)] = 1467,
  [SMALL_STATE(52)] = 1487,
  [SMALL_STATE(53)] = 1501,
  [SMALL_STATE(54)] = 1515,
  [SMALL_STATE(55)] = 1529,
  [SMALL_STATE(56)] = 1543,
  [SMALL_STATE(57)] = 1557,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1585,
  [SMALL_STATE(60)] = 1599,
  [SMALL_STATE(61)] = 1613,
  [SMALL_STATE(62)] = 1627,
  [SMALL_STATE(63)] = 1641,
  [SMALL_STATE(64)] = 1655,
  [SMALL_STATE(65)] = 1669,
  [SMALL_STATE(66)] = 1683,
  [SMALL_STATE(67)] = 1697,
  [SMALL_STATE(68)] = 1716,
  [SMALL_STATE(69)] = 1737,
  [SMALL_STATE(70)] = 1756,
  [SMALL_STATE(71)] = 1775,
  [SMALL_STATE(72)] = 1793,
  [SMALL_STATE(73)] = 1809,
  [SMALL_STATE(74)] = 1829,
  [SMALL_STATE(75)] = 1849,
  [SMALL_STATE(76)] = 1867,
  [SMALL_STATE(77)] = 1885,
  [SMALL_STATE(78)] = 1903,
  [SMALL_STATE(79)] = 1921,
  [SMALL_STATE(80)] = 1939,
  [SMALL_STATE(81)] = 1959,
  [SMALL_STATE(82)] = 1977,
  [SMALL_STATE(83)] = 1997,
  [SMALL_STATE(84)] = 2014,
  [SMALL_STATE(85)] = 2025,
  [SMALL_STATE(86)] = 2042,
  [SMALL_STATE(87)] = 2055,
  [SMALL_STATE(88)] = 2072,
  [SMALL_STATE(89)] = 2089,
  [SMALL_STATE(90)] = 2100,
  [SMALL_STATE(91)] = 2117,
  [SMALL_STATE(92)] = 2128,
  [SMALL_STATE(93)] = 2136,
  [SMALL_STATE(94)] = 2150,
  [SMALL_STATE(95)] = 2164,
  [SMALL_STATE(96)] = 2178,
  [SMALL_STATE(97)] = 2188,
  [SMALL_STATE(98)] = 2202,
  [SMALL_STATE(99)] = 2214,
  [SMALL_STATE(100)] = 2226,
  [SMALL_STATE(101)] = 2236,
  [SMALL_STATE(102)] = 2252,
  [SMALL_STATE(103)] = 2266,
  [SMALL_STATE(104)] = 2274,
  [SMALL_STATE(105)] = 2281,
  [SMALL_STATE(106)] = 2290,
  [SMALL_STATE(107)] = 2303,
  [SMALL_STATE(108)] = 2316,
  [SMALL_STATE(109)] = 2323,
  [SMALL_STATE(110)] = 2330,
  [SMALL_STATE(111)] = 2343,
  [SMALL_STATE(112)] = 2356,
  [SMALL_STATE(113)] = 2363,
  [SMALL_STATE(114)] = 2370,
  [SMALL_STATE(115)] = 2379,
  [SMALL_STATE(116)] = 2386,
  [SMALL_STATE(117)] = 2399,
  [SMALL_STATE(118)] = 2405,
  [SMALL_STATE(119)] = 2411,
  [SMALL_STATE(120)] = 2417,
  [SMALL_STATE(121)] = 2425,
  [SMALL_STATE(122)] = 2435,
  [SMALL_STATE(123)] = 2441,
  [SMALL_STATE(124)] = 2447,
  [SMALL_STATE(125)] = 2453,
  [SMALL_STATE(126)] = 2459,
  [SMALL_STATE(127)] = 2467,
  [SMALL_STATE(128)] = 2477,
  [SMALL_STATE(129)] = 2482,
  [SMALL_STATE(130)] = 2487,
  [SMALL_STATE(131)] = 2492,
  [SMALL_STATE(132)] = 2499,
  [SMALL_STATE(133)] = 2504,
  [SMALL_STATE(134)] = 2509,
  [SMALL_STATE(135)] = 2514,
  [SMALL_STATE(136)] = 2519,
  [SMALL_STATE(137)] = 2526,
  [SMALL_STATE(138)] = 2531,
  [SMALL_STATE(139)] = 2538,
  [SMALL_STATE(140)] = 2545,
  [SMALL_STATE(141)] = 2552,
  [SMALL_STATE(142)] = 2556,
  [SMALL_STATE(143)] = 2560,
  [SMALL_STATE(144)] = 2564,
  [SMALL_STATE(145)] = 2568,
  [SMALL_STATE(146)] = 2572,
  [SMALL_STATE(147)] = 2576,
  [SMALL_STATE(148)] = 2580,
  [SMALL_STATE(149)] = 2584,
  [SMALL_STATE(150)] = 2588,
  [SMALL_STATE(151)] = 2592,
  [SMALL_STATE(152)] = 2596,
  [SMALL_STATE(153)] = 2600,
  [SMALL_STATE(154)] = 2604,
  [SMALL_STATE(155)] = 2608,
  [SMALL_STATE(156)] = 2612,
  [SMALL_STATE(157)] = 2616,
  [SMALL_STATE(158)] = 2620,
  [SMALL_STATE(159)] = 2624,
  [SMALL_STATE(160)] = 2628,
  [SMALL_STATE(161)] = 2632,
  [SMALL_STATE(162)] = 2636,
  [SMALL_STATE(163)] = 2640,
  [SMALL_STATE(164)] = 2644,
  [SMALL_STATE(165)] = 2648,
  [SMALL_STATE(166)] = 2652,
  [SMALL_STATE(167)] = 2656,
  [SMALL_STATE(168)] = 2660,
  [SMALL_STATE(169)] = 2664,
  [SMALL_STATE(170)] = 2668,
  [SMALL_STATE(171)] = 2672,
  [SMALL_STATE(172)] = 2676,
  [SMALL_STATE(173)] = 2680,
  [SMALL_STATE(174)] = 2684,
  [SMALL_STATE(175)] = 2688,
  [SMALL_STATE(176)] = 2692,
  [SMALL_STATE(177)] = 2696,
  [SMALL_STATE(178)] = 2700,
  [SMALL_STATE(179)] = 2704,
  [SMALL_STATE(180)] = 2708,
  [SMALL_STATE(181)] = 2712,
  [SMALL_STATE(182)] = 2716,
  [SMALL_STATE(183)] = 2720,
  [SMALL_STATE(184)] = 2724,
  [SMALL_STATE(185)] = 2728,
  [SMALL_STATE(186)] = 2732,
  [SMALL_STATE(187)] = 2736,
  [SMALL_STATE(188)] = 2740,
  [SMALL_STATE(189)] = 2744,
  [SMALL_STATE(190)] = 2748,
  [SMALL_STATE(191)] = 2752,
  [SMALL_STATE(192)] = 2756,
  [SMALL_STATE(193)] = 2760,
  [SMALL_STATE(194)] = 2764,
  [SMALL_STATE(195)] = 2768,
  [SMALL_STATE(196)] = 2772,
  [SMALL_STATE(197)] = 2776,
  [SMALL_STATE(198)] = 2780,
  [SMALL_STATE(199)] = 2784,
  [SMALL_STATE(200)] = 2788,
  [SMALL_STATE(201)] = 2792,
  [SMALL_STATE(202)] = 2796,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(14),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 10, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 10, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(99),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(4),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(168),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(89),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlist, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(93),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(188),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(4),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 2), SHIFT_REPEAT(4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(138),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(122),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(30),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(95),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringlist_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settinglist, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 4, .production_id = 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 6),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [519] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
