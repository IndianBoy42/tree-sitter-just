#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 18

enum {
  anon_sym_alias = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_export = 3,
  anon_sym_set = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  anon_sym_shell = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_if = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_else = 14,
  anon_sym_PLUS = 15,
  anon_sym_SLASH = 16,
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
  sym_expression = 56,
  sym_condition = 57,
  sym_value = 58,
  sym_call = 59,
  sym_cmd = 60,
  sym_string = 61,
  sym_sequence = 62,
  sym_attribute = 63,
  sym_recipe = 64,
  sym_recipe_header = 65,
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
  aux_sym_parameters_repeat1 = 83,
  aux_sym_dependencies_repeat1 = 84,
  aux_sym_depcall_repeat1 = 85,
  aux_sym_shebang_body_repeat1 = 86,
  aux_sym_recipeline_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_export] = "export",
  [anon_sym_set] = "set",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_shell] = "shell",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_shell] = anon_sym_shell,
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
  [anon_sym_shell] = {
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
  field_array = 1,
  field_array_item = 2,
  field_else = 3,
  field_if = 4,
  field_interpreter = 5,
  field_left = 6,
  field_name = 7,
  field_right = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_array_item] = "array_item",
  [field_else] = "else",
  [field_if] = "if",
  [field_interpreter] = "interpreter",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 4},
  [6] = {.index = 12, .length = 1},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 2},
  [9] = {.index = 18, .length = 5},
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 4},
  [12] = {.index = 28, .length = 5},
  [13] = {.index = 33, .length = 6},
  [14] = {.index = 39, .length = 7},
  [15] = {.index = 46, .length = 6},
  [16] = {.index = 52, .length = 8},
  [17] = {.index = 60, .length = 2},
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
    {field_array, 3},
    {field_array, 4},
  [8] =
    {field_array, 3},
    {field_array, 4},
    {field_name, 1},
    {field_right, 2},
  [12] =
    {field_array_item, 1},
  [13] =
    {field_array, 3},
    {field_array, 5},
    {field_array_item, 4},
  [16] =
    {field_array_item, 0, .inherited = true},
    {field_array_item, 1, .inherited = true},
  [18] =
    {field_array, 3},
    {field_array, 5},
    {field_array_item, 4},
    {field_name, 1},
    {field_right, 2},
  [23] =
    {field_interpreter, 2},
  [24] =
    {field_array, 3},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5},
  [28] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
  [33] =
    {field_array, 3},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5},
    {field_name, 1},
    {field_right, 2},
  [39] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
    {field_name, 1},
    {field_right, 2},
  [46] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 7},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
    {field_array_item, 6},
  [52] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 7},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
    {field_array_item, 6},
    {field_name, 1},
    {field_right, 2},
  [60] =
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
  [11] = 11,
  [12] = 10,
  [13] = 10,
  [14] = 14,
  [15] = 14,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 18,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 18,
  [29] = 21,
  [30] = 18,
  [31] = 17,
  [32] = 21,
  [33] = 19,
  [34] = 34,
  [35] = 4,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 34,
  [41] = 41,
  [42] = 38,
  [43] = 41,
  [44] = 37,
  [45] = 45,
  [46] = 46,
  [47] = 26,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
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
  [72] = 45,
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
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 26,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 34,
  [116] = 38,
  [117] = 117,
  [118] = 41,
  [119] = 45,
  [120] = 120,
  [121] = 26,
  [122] = 122,
  [123] = 36,
  [124] = 124,
  [125] = 37,
  [126] = 126,
  [127] = 4,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 45,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 73,
  [142] = 142,
  [143] = 143,
  [144] = 8,
  [145] = 69,
  [146] = 73,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 7,
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
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 7,
  [184] = 184,
  [185] = 8,
  [186] = 186,
  [187] = 187,
  [188] = 156,
  [189] = 170,
  [190] = 190,
  [191] = 164,
  [192] = 167,
  [193] = 193,
  [194] = 156,
  [195] = 170,
  [196] = 196,
  [197] = 164,
  [198] = 167,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 199,
  [203] = 203,
  [204] = 199,
  [205] = 165,
  [206] = 165,
  [207] = 161,
  [208] = 161,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 212,
  [213] = 171,
  [214] = 171,
  [215] = 209,
  [216] = 216,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(86);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '`') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(135);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(82);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '~') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(100);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(99);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '`') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == '`') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(63);
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
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == '{') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(93);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '~') ADVANCE(75);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASHusr_SLASHbin_SLASHenv);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_notcomment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(33);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(10);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
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
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
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
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 13, .external_lex_state = 3},
  [50] = {.lex_state = 51, .external_lex_state = 4},
  [51] = {.lex_state = 51, .external_lex_state = 4},
  [52] = {.lex_state = 51, .external_lex_state = 2},
  [53] = {.lex_state = 51, .external_lex_state = 2},
  [54] = {.lex_state = 51, .external_lex_state = 2},
  [55] = {.lex_state = 51, .external_lex_state = 2},
  [56] = {.lex_state = 51, .external_lex_state = 2},
  [57] = {.lex_state = 51, .external_lex_state = 2},
  [58] = {.lex_state = 51, .external_lex_state = 2},
  [59] = {.lex_state = 51, .external_lex_state = 2},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 51, .external_lex_state = 2},
  [62] = {.lex_state = 51, .external_lex_state = 2},
  [63] = {.lex_state = 51, .external_lex_state = 2},
  [64] = {.lex_state = 51, .external_lex_state = 2},
  [65] = {.lex_state = 51, .external_lex_state = 2},
  [66] = {.lex_state = 51, .external_lex_state = 2},
  [67] = {.lex_state = 51, .external_lex_state = 2},
  [68] = {.lex_state = 51, .external_lex_state = 2},
  [69] = {.lex_state = 51, .external_lex_state = 2},
  [70] = {.lex_state = 51, .external_lex_state = 2},
  [71] = {.lex_state = 51, .external_lex_state = 2},
  [72] = {.lex_state = 51},
  [73] = {.lex_state = 51, .external_lex_state = 2},
  [74] = {.lex_state = 51, .external_lex_state = 2},
  [75] = {.lex_state = 51, .external_lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 2, .external_lex_state = 2},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13, .external_lex_state = 3},
  [87] = {.lex_state = 2, .external_lex_state = 2},
  [88] = {.lex_state = 13, .external_lex_state = 3},
  [89] = {.lex_state = 2, .external_lex_state = 2},
  [90] = {.lex_state = 13, .external_lex_state = 3},
  [91] = {.lex_state = 3, .external_lex_state = 2},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3, .external_lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 3, .external_lex_state = 2},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 47, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 47, .external_lex_state = 2},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3, .external_lex_state = 2},
  [109] = {.lex_state = 3, .external_lex_state = 2},
  [110] = {.lex_state = 47, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 13, .external_lex_state = 3},
  [133] = {.lex_state = 47, .external_lex_state = 2},
  [134] = {.lex_state = 13, .external_lex_state = 3},
  [135] = {.lex_state = 3, .external_lex_state = 2},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3, .external_lex_state = 2},
  [140] = {.lex_state = 13, .external_lex_state = 3},
  [141] = {.lex_state = 13, .external_lex_state = 3},
  [142] = {.lex_state = 51},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 49},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 51},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 51},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 94},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 94},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 94},
  [205] = {.lex_state = 51},
  [206] = {.lex_state = 51},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 51},
  [214] = {.lex_state = 51},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 51},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
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
    [sym_STRING] = ACTIONS(1),
    [sym_INDENTED_STRING] = ACTIONS(1),
    [sym_INDENT] = ACTIONS(1),
    [sym_DEDENT] = ACTIONS(1),
    [sym_NEWLINE] = ACTIONS(1),
    [sym_LINE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(203),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(56),
    [sym_alias] = STATE(56),
    [sym_assignment] = STATE(56),
    [sym_export] = STATE(56),
    [sym_setting] = STATE(56),
    [sym_attribute] = STATE(136),
    [sym_recipe] = STATE(56),
    [sym_recipe_header] = STATE(200),
    [sym_comment] = STATE(69),
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
    STATE(69), 1,
      sym_comment,
    STATE(136), 1,
      sym_attribute,
    STATE(200), 1,
      sym_recipe_header,
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
    STATE(69), 1,
      sym_comment,
    STATE(136), 1,
      sym_attribute,
    STATE(200), 1,
      sym_recipe_header,
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
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      sym_BACKTICK,
    ACTIONS(61), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(63), 1,
      sym_NAME,
    STATE(45), 1,
      sym_value,
    ACTIONS(65), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(67), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(6), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(34), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [160] = 11,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      sym_BACKTICK,
    ACTIONS(80), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(83), 1,
      sym_NAME,
    STATE(45), 1,
      sym_value,
    ACTIONS(86), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(6), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(34), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [199] = 2,
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
  [220] = 2,
    ACTIONS(98), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(96), 11,
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
  [241] = 12,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(162), 1,
      sym_sequence,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [282] = 12,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(164), 1,
      sym_sequence,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [323] = 11,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_BACKTICK,
    ACTIONS(61), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(63), 1,
      sym_NAME,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_value,
    ACTIONS(65), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(67), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(5), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(34), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [362] = 12,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(197), 1,
      sym_sequence,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [403] = 12,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(191), 1,
      sym_sequence,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [444] = 11,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(142), 1,
      sym_expression,
    STATE(214), 1,
      sym_condition,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [482] = 11,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(142), 1,
      sym_expression,
    STATE(213), 1,
      sym_condition,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [520] = 11,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(142), 1,
      sym_expression,
    STATE(171), 1,
      sym_condition,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [558] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(195), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [593] = 10,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_BACKTICK,
    ACTIONS(61), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      sym_NAME,
    STATE(137), 1,
      sym_value,
    STATE(183), 1,
      sym_expression,
    ACTIONS(65), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(67), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(34), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [628] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(215), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [663] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(216), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [698] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(167), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [733] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(210), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [768] = 10,
    ACTIONS(126), 1,
      anon_sym_if,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym_BACKTICK,
    ACTIONS(132), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(134), 1,
      sym_NAME,
    STATE(119), 1,
      sym_value,
    STATE(122), 1,
      sym_expression,
    ACTIONS(136), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(138), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(115), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [803] = 10,
    ACTIONS(126), 1,
      anon_sym_if,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym_BACKTICK,
    ACTIONS(132), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(134), 1,
      sym_NAME,
    STATE(119), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    ACTIONS(136), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(138), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(115), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [838] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(189), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [873] = 2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 13,
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
  [892] = 10,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_BACKTICK,
    ACTIONS(61), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(122), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      sym_NAME,
    STATE(137), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(65), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(67), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(34), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [927] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(7), 1,
      sym_expression,
    STATE(72), 1,
      sym_value,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [962] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(192), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [997] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_BACKTICK,
    ACTIONS(61), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(63), 1,
      sym_NAME,
    STATE(7), 1,
      sym_expression,
    STATE(45), 1,
      sym_value,
    ACTIONS(65), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(67), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(34), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1032] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(170), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1067] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(198), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1102] = 10,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(108), 1,
      sym_NAME,
    STATE(72), 1,
      sym_value,
    STATE(209), 1,
      sym_expression,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
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
    ACTIONS(140), 8,
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
    ACTIONS(146), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(148), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1191] = 1,
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
  [1207] = 2,
    ACTIONS(152), 5,
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
  [1225] = 1,
    ACTIONS(148), 13,
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
    ACTIONS(140), 13,
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
  [1273] = 1,
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
  [1289] = 2,
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
  [1307] = 2,
    ACTIONS(160), 5,
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
  [1325] = 3,
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
  [1344] = 8,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(168), 1,
      sym_NAME,
    STATE(107), 1,
      sym_value,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1373] = 2,
    ACTIONS(144), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(140), 7,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1390] = 8,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_BACKTICK,
    ACTIONS(106), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(168), 1,
      sym_NAME,
    STATE(101), 1,
      sym_value,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(40), 3,
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
    STATE(85), 1,
      sym_shebang,
    STATE(86), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(140), 2,
      sym_recipeline,
      sym_comment,
    STATE(166), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1447] = 4,
    ACTIONS(182), 1,
      sym_INDENT,
    STATE(64), 1,
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
    STATE(52), 1,
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
    ACTIONS(190), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(188), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1501] = 2,
    ACTIONS(194), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(192), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1515] = 2,
    ACTIONS(198), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(196), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1529] = 2,
    ACTIONS(202), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(200), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1543] = 2,
    ACTIONS(206), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(204), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1557] = 2,
    ACTIONS(210), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(208), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1571] = 2,
    ACTIONS(214), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(212), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1585] = 2,
    ACTIONS(218), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(216), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1599] = 5,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(138), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    ACTIONS(222), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(124), 2,
      sym_boolean,
      sym_string,
  [1619] = 2,
    ACTIONS(226), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(224), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1633] = 2,
    ACTIONS(230), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(228), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1647] = 2,
    ACTIONS(234), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(232), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1661] = 2,
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
  [1675] = 2,
    ACTIONS(238), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(236), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1689] = 2,
    ACTIONS(242), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(240), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1703] = 2,
    ACTIONS(246), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(244), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1717] = 2,
    ACTIONS(250), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(248), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1731] = 2,
    ACTIONS(254), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(252), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1745] = 2,
    ACTIONS(258), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(256), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1759] = 2,
    ACTIONS(262), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(260), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1773] = 2,
    ACTIONS(264), 2,
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
  [1787] = 2,
    ACTIONS(268), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(266), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1801] = 2,
    ACTIONS(272), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(270), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1815] = 2,
    ACTIONS(276), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(274), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1829] = 6,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_NAME,
    STATE(173), 1,
      sym_variadic_parameters,
    ACTIONS(278), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(83), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1850] = 6,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_setting_repeat1,
    STATE(186), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1871] = 6,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_setting_repeat1,
    STATE(176), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1892] = 6,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_setting_repeat1,
    STATE(160), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1913] = 6,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_setting_repeat1,
    STATE(178), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1934] = 6,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_NAME,
    ACTIONS(296), 1,
      anon_sym_COLON_EQ,
    ACTIONS(298), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_parameters,
    STATE(76), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [1954] = 6,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_NAME,
    ACTIONS(306), 1,
      sym_NEWLINE,
    STATE(172), 1,
      sym_dependencies,
    STATE(109), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [1974] = 4,
    ACTIONS(310), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      sym_NAME,
    STATE(83), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(308), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1990] = 4,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_setting_repeat1,
    ACTIONS(321), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(319), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2006] = 5,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    STATE(201), 1,
      sym_shebang_body,
    STATE(88), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(140), 2,
      sym_recipeline,
      sym_comment,
  [2024] = 5,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    ACTIONS(323), 1,
      sym_DEDENT,
    STATE(90), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(140), 2,
      sym_recipeline,
      sym_comment,
  [2042] = 6,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_NAME,
    ACTIONS(325), 1,
      anon_sym_,
    ACTIONS(327), 1,
      sym_NEWLINE,
    STATE(155), 1,
      sym_dependencies,
    STATE(109), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2062] = 5,
    ACTIONS(172), 1,
      sym_notcomment,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_DEDENT,
    STATE(90), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(140), 2,
      sym_recipeline,
      sym_comment,
  [2080] = 6,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_NAME,
    ACTIONS(331), 1,
      anon_sym_,
    ACTIONS(333), 1,
      sym_NEWLINE,
    STATE(174), 1,
      sym_dependencies,
    STATE(109), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2100] = 5,
    ACTIONS(335), 1,
      sym_notcomment,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      sym_DEDENT,
    STATE(90), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(140), 2,
      sym_recipeline,
      sym_comment,
  [2118] = 5,
    ACTIONS(306), 1,
      sym_NEWLINE,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_NAME,
    STATE(172), 1,
      sym_dependencies,
    STATE(109), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2135] = 5,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_NAME,
    ACTIONS(347), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_parameters,
    STATE(76), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2152] = 4,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2167] = 5,
    ACTIONS(327), 1,
      sym_NEWLINE,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_NAME,
    STATE(155), 1,
      sym_dependencies,
    STATE(109), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2184] = 2,
    ACTIONS(353), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(351), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2195] = 4,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2210] = 2,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(357), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2221] = 5,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_NAME,
    ACTIONS(361), 1,
      sym_NEWLINE,
    STATE(175), 1,
      sym_dependencies,
    STATE(109), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2238] = 5,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_NAME,
    ACTIONS(363), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_parameters,
    STATE(76), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2255] = 2,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(365), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2266] = 1,
    ACTIONS(369), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2274] = 3,
    STATE(95), 1,
      sym_string,
    ACTIONS(110), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(112), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2286] = 2,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2296] = 4,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(376), 1,
      sym_TEXT,
    ACTIONS(379), 1,
      sym_NEWLINE,
    STATE(104), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2310] = 5,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(381), 1,
      anon_sym_COLON_EQ,
    STATE(69), 1,
      sym_comment,
    STATE(71), 1,
      sym_eol,
  [2326] = 4,
    ACTIONS(383), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(385), 1,
      sym_TEXT,
    ACTIONS(387), 1,
      sym_NEWLINE,
    STATE(110), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2340] = 1,
    ACTIONS(389), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2348] = 4,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      sym_NAME,
    ACTIONS(397), 1,
      sym_NEWLINE,
    STATE(108), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2362] = 4,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_NAME,
    ACTIONS(399), 1,
      sym_NEWLINE,
    STATE(108), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2376] = 4,
    ACTIONS(383), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(401), 1,
      sym_TEXT,
    ACTIONS(403), 1,
      sym_NEWLINE,
    STATE(104), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2390] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(69), 1,
      sym_comment,
    STATE(70), 1,
      sym_eol,
  [2403] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(67), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2416] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(66), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2429] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(69), 1,
      sym_comment,
    STATE(74), 1,
      sym_eol,
  [2442] = 1,
    ACTIONS(140), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2449] = 1,
    ACTIONS(154), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2456] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(55), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2469] = 1,
    ACTIONS(156), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2476] = 2,
    ACTIONS(166), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2485] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(54), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2498] = 2,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 3,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_RBRACE_RBRACE,
  [2507] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(69), 1,
      sym_comment,
    STATE(75), 1,
      sym_eol,
  [2520] = 1,
    ACTIONS(148), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2527] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(68), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2540] = 1,
    ACTIONS(150), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2547] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(57), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2560] = 1,
    ACTIONS(49), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2567] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(62), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2580] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(63), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2593] = 4,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(58), 1,
      sym_eol,
    STATE(69), 1,
      sym_comment,
  [2606] = 4,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      sym_NEWLINE,
    STATE(145), 1,
      sym_comment,
    STATE(152), 1,
      sym_eol,
  [2619] = 1,
    ACTIONS(413), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2625] = 2,
    ACTIONS(417), 1,
      sym_NEWLINE,
    ACTIONS(415), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2633] = 1,
    ACTIONS(419), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2639] = 1,
    ACTIONS(421), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2645] = 3,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(423), 1,
      sym_NAME,
    STATE(181), 1,
      sym_recipe_header,
  [2655] = 2,
    ACTIONS(166), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2663] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_NAME,
    STATE(168), 1,
      sym_parameter,
  [2673] = 1,
    ACTIONS(427), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2679] = 1,
    ACTIONS(429), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2685] = 1,
    ACTIONS(266), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2691] = 1,
    ACTIONS(431), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [2697] = 2,
    ACTIONS(433), 1,
      aux_sym_shebang_token1,
    ACTIONS(435), 1,
      anon_sym_SLASHusr_SLASHbin_SLASHenv,
  [2704] = 1,
    ACTIONS(96), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2709] = 1,
    ACTIONS(252), 2,
      anon_sym_AT,
      sym_NAME,
  [2714] = 1,
    ACTIONS(266), 2,
      anon_sym_AT,
      sym_NAME,
  [2719] = 1,
    ACTIONS(437), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [2724] = 1,
    ACTIONS(439), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2729] = 2,
    ACTIONS(441), 1,
      sym_NAME,
    STATE(169), 1,
      sym_depcall,
  [2736] = 2,
    ACTIONS(443), 1,
      anon_sym_shell,
    ACTIONS(445), 1,
      sym_NAME,
  [2743] = 1,
    ACTIONS(92), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2748] = 1,
    ACTIONS(447), 2,
      anon_sym_AT,
      sym_NAME,
  [2753] = 2,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [2760] = 2,
    ACTIONS(453), 1,
      sym_NAME,
    STATE(61), 1,
      sym_assignment,
  [2767] = 1,
    ACTIONS(361), 1,
      sym_NEWLINE,
  [2771] = 1,
    ACTIONS(455), 1,
      sym_NEWLINE,
  [2775] = 1,
    ACTIONS(457), 1,
      sym_NEWLINE,
  [2779] = 1,
    ACTIONS(459), 1,
      anon_sym_RBRACE_RBRACE,
  [2783] = 1,
    ACTIONS(461), 1,
      sym_NAME,
  [2787] = 1,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [2791] = 1,
    ACTIONS(465), 1,
      anon_sym_else,
  [2795] = 1,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [2799] = 1,
    ACTIONS(469), 1,
      sym_TEXT,
  [2803] = 1,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [2807] = 1,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
  [2811] = 1,
    ACTIONS(475), 1,
      sym_DEDENT,
  [2815] = 1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [2819] = 1,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2823] = 1,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [2827] = 1,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [2831] = 1,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
  [2835] = 1,
    ACTIONS(327), 1,
      sym_NEWLINE,
  [2839] = 1,
    ACTIONS(487), 1,
      anon_sym_COLON,
  [2843] = 1,
    ACTIONS(306), 1,
      sym_NEWLINE,
  [2847] = 1,
    ACTIONS(489), 1,
      sym_NEWLINE,
  [2851] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
  [2855] = 1,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [2859] = 1,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
  [2863] = 1,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
  [2867] = 1,
    ACTIONS(499), 1,
      sym_NAME,
  [2871] = 1,
    ACTIONS(501), 1,
      sym_NEWLINE,
  [2875] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [2879] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACE_RBRACE,
  [2883] = 1,
    ACTIONS(503), 1,
      sym_NAME,
  [2887] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACE_RBRACE,
  [2891] = 1,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
  [2895] = 1,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
  [2899] = 1,
    ACTIONS(509), 1,
      sym_NEWLINE,
  [2903] = 1,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [2907] = 1,
    ACTIONS(513), 1,
      anon_sym_COLON_EQ,
  [2911] = 1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [2915] = 1,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
  [2919] = 1,
    ACTIONS(296), 1,
      anon_sym_COLON_EQ,
  [2923] = 1,
    ACTIONS(519), 1,
      sym_NEWLINE,
  [2927] = 1,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [2931] = 1,
    ACTIONS(523), 1,
      anon_sym_COLON_EQ,
  [2935] = 1,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [2939] = 1,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
  [2943] = 1,
    ACTIONS(529), 1,
      aux_sym_comment_token2,
  [2947] = 1,
    ACTIONS(531), 1,
      sym_NEWLINE,
  [2951] = 1,
    ACTIONS(533), 1,
      sym_DEDENT,
  [2955] = 1,
    ACTIONS(535), 1,
      aux_sym_comment_token2,
  [2959] = 1,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [2963] = 1,
    ACTIONS(539), 1,
      aux_sym_comment_token2,
  [2967] = 1,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
  [2971] = 1,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
  [2975] = 1,
    ACTIONS(545), 1,
      anon_sym_else,
  [2979] = 1,
    ACTIONS(547), 1,
      anon_sym_else,
  [2983] = 1,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
  [2987] = 1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
  [2991] = 1,
    ACTIONS(553), 1,
      sym_NAME,
  [2995] = 1,
    ACTIONS(555), 1,
      sym_NAME,
  [2999] = 1,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
  [3003] = 1,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
  [3007] = 1,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
  [3011] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 323,
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
  [SMALL_STATE(23)] = 768,
  [SMALL_STATE(24)] = 803,
  [SMALL_STATE(25)] = 838,
  [SMALL_STATE(26)] = 873,
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
  [SMALL_STATE(38)] = 1207,
  [SMALL_STATE(39)] = 1225,
  [SMALL_STATE(40)] = 1241,
  [SMALL_STATE(41)] = 1257,
  [SMALL_STATE(42)] = 1273,
  [SMALL_STATE(43)] = 1289,
  [SMALL_STATE(44)] = 1307,
  [SMALL_STATE(45)] = 1325,
  [SMALL_STATE(46)] = 1344,
  [SMALL_STATE(47)] = 1373,
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
  [SMALL_STATE(61)] = 1619,
  [SMALL_STATE(62)] = 1633,
  [SMALL_STATE(63)] = 1647,
  [SMALL_STATE(64)] = 1661,
  [SMALL_STATE(65)] = 1675,
  [SMALL_STATE(66)] = 1689,
  [SMALL_STATE(67)] = 1703,
  [SMALL_STATE(68)] = 1717,
  [SMALL_STATE(69)] = 1731,
  [SMALL_STATE(70)] = 1745,
  [SMALL_STATE(71)] = 1759,
  [SMALL_STATE(72)] = 1773,
  [SMALL_STATE(73)] = 1787,
  [SMALL_STATE(74)] = 1801,
  [SMALL_STATE(75)] = 1815,
  [SMALL_STATE(76)] = 1829,
  [SMALL_STATE(77)] = 1850,
  [SMALL_STATE(78)] = 1871,
  [SMALL_STATE(79)] = 1892,
  [SMALL_STATE(80)] = 1913,
  [SMALL_STATE(81)] = 1934,
  [SMALL_STATE(82)] = 1954,
  [SMALL_STATE(83)] = 1974,
  [SMALL_STATE(84)] = 1990,
  [SMALL_STATE(85)] = 2006,
  [SMALL_STATE(86)] = 2024,
  [SMALL_STATE(87)] = 2042,
  [SMALL_STATE(88)] = 2062,
  [SMALL_STATE(89)] = 2080,
  [SMALL_STATE(90)] = 2100,
  [SMALL_STATE(91)] = 2118,
  [SMALL_STATE(92)] = 2135,
  [SMALL_STATE(93)] = 2152,
  [SMALL_STATE(94)] = 2167,
  [SMALL_STATE(95)] = 2184,
  [SMALL_STATE(96)] = 2195,
  [SMALL_STATE(97)] = 2210,
  [SMALL_STATE(98)] = 2221,
  [SMALL_STATE(99)] = 2238,
  [SMALL_STATE(100)] = 2255,
  [SMALL_STATE(101)] = 2266,
  [SMALL_STATE(102)] = 2274,
  [SMALL_STATE(103)] = 2286,
  [SMALL_STATE(104)] = 2296,
  [SMALL_STATE(105)] = 2310,
  [SMALL_STATE(106)] = 2326,
  [SMALL_STATE(107)] = 2340,
  [SMALL_STATE(108)] = 2348,
  [SMALL_STATE(109)] = 2362,
  [SMALL_STATE(110)] = 2376,
  [SMALL_STATE(111)] = 2390,
  [SMALL_STATE(112)] = 2403,
  [SMALL_STATE(113)] = 2416,
  [SMALL_STATE(114)] = 2429,
  [SMALL_STATE(115)] = 2442,
  [SMALL_STATE(116)] = 2449,
  [SMALL_STATE(117)] = 2456,
  [SMALL_STATE(118)] = 2469,
  [SMALL_STATE(119)] = 2476,
  [SMALL_STATE(120)] = 2485,
  [SMALL_STATE(121)] = 2498,
  [SMALL_STATE(122)] = 2507,
  [SMALL_STATE(123)] = 2520,
  [SMALL_STATE(124)] = 2527,
  [SMALL_STATE(125)] = 2540,
  [SMALL_STATE(126)] = 2547,
  [SMALL_STATE(127)] = 2560,
  [SMALL_STATE(128)] = 2567,
  [SMALL_STATE(129)] = 2580,
  [SMALL_STATE(130)] = 2593,
  [SMALL_STATE(131)] = 2606,
  [SMALL_STATE(132)] = 2619,
  [SMALL_STATE(133)] = 2625,
  [SMALL_STATE(134)] = 2633,
  [SMALL_STATE(135)] = 2639,
  [SMALL_STATE(136)] = 2645,
  [SMALL_STATE(137)] = 2655,
  [SMALL_STATE(138)] = 2663,
  [SMALL_STATE(139)] = 2673,
  [SMALL_STATE(140)] = 2679,
  [SMALL_STATE(141)] = 2685,
  [SMALL_STATE(142)] = 2691,
  [SMALL_STATE(143)] = 2697,
  [SMALL_STATE(144)] = 2704,
  [SMALL_STATE(145)] = 2709,
  [SMALL_STATE(146)] = 2714,
  [SMALL_STATE(147)] = 2719,
  [SMALL_STATE(148)] = 2724,
  [SMALL_STATE(149)] = 2729,
  [SMALL_STATE(150)] = 2736,
  [SMALL_STATE(151)] = 2743,
  [SMALL_STATE(152)] = 2748,
  [SMALL_STATE(153)] = 2753,
  [SMALL_STATE(154)] = 2760,
  [SMALL_STATE(155)] = 2767,
  [SMALL_STATE(156)] = 2771,
  [SMALL_STATE(157)] = 2775,
  [SMALL_STATE(158)] = 2779,
  [SMALL_STATE(159)] = 2783,
  [SMALL_STATE(160)] = 2787,
  [SMALL_STATE(161)] = 2791,
  [SMALL_STATE(162)] = 2795,
  [SMALL_STATE(163)] = 2799,
  [SMALL_STATE(164)] = 2803,
  [SMALL_STATE(165)] = 2807,
  [SMALL_STATE(166)] = 2811,
  [SMALL_STATE(167)] = 2815,
  [SMALL_STATE(168)] = 2819,
  [SMALL_STATE(169)] = 2823,
  [SMALL_STATE(170)] = 2827,
  [SMALL_STATE(171)] = 2831,
  [SMALL_STATE(172)] = 2835,
  [SMALL_STATE(173)] = 2839,
  [SMALL_STATE(174)] = 2843,
  [SMALL_STATE(175)] = 2847,
  [SMALL_STATE(176)] = 2851,
  [SMALL_STATE(177)] = 2855,
  [SMALL_STATE(178)] = 2859,
  [SMALL_STATE(179)] = 2863,
  [SMALL_STATE(180)] = 2867,
  [SMALL_STATE(181)] = 2871,
  [SMALL_STATE(182)] = 2875,
  [SMALL_STATE(183)] = 2879,
  [SMALL_STATE(184)] = 2883,
  [SMALL_STATE(185)] = 2887,
  [SMALL_STATE(186)] = 2891,
  [SMALL_STATE(187)] = 2895,
  [SMALL_STATE(188)] = 2899,
  [SMALL_STATE(189)] = 2903,
  [SMALL_STATE(190)] = 2907,
  [SMALL_STATE(191)] = 2911,
  [SMALL_STATE(192)] = 2915,
  [SMALL_STATE(193)] = 2919,
  [SMALL_STATE(194)] = 2923,
  [SMALL_STATE(195)] = 2927,
  [SMALL_STATE(196)] = 2931,
  [SMALL_STATE(197)] = 2935,
  [SMALL_STATE(198)] = 2939,
  [SMALL_STATE(199)] = 2943,
  [SMALL_STATE(200)] = 2947,
  [SMALL_STATE(201)] = 2951,
  [SMALL_STATE(202)] = 2955,
  [SMALL_STATE(203)] = 2959,
  [SMALL_STATE(204)] = 2963,
  [SMALL_STATE(205)] = 2967,
  [SMALL_STATE(206)] = 2971,
  [SMALL_STATE(207)] = 2975,
  [SMALL_STATE(208)] = 2979,
  [SMALL_STATE(209)] = 2983,
  [SMALL_STATE(210)] = 2987,
  [SMALL_STATE(211)] = 2991,
  [SMALL_STATE(212)] = 2995,
  [SMALL_STATE(213)] = 2999,
  [SMALL_STATE(214)] = 3003,
  [SMALL_STATE(215)] = 3007,
  [SMALL_STATE(216)] = 3011,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(44),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(44),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(47),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 17),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, .production_id = 9),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, .production_id = 9),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, .production_id = 7),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, .production_id = 7),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 11),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 12),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 12),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 13),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 13),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 14),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 16),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 16),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 15),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 15),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(184),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(100),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8), SHIFT_REPEAT(102),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(106),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(202),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 6),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(27),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(104),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(149),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(139),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 4, .production_id = 10),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [537] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
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
