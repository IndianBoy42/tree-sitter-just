#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

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
  sym_notcomment = 30,
  aux_sym_comment_token1 = 31,
  anon_sym_LBRACE_LBRACE = 32,
  anon_sym_RBRACE_RBRACE = 33,
  sym_BACKTICK = 34,
  sym_INDENTED_BACKTICK = 35,
  sym_NAME = 36,
  sym_RAW_STRING = 37,
  sym_INDENTED_RAW_STRING = 38,
  sym_STRING = 39,
  sym_INDENTED_STRING = 40,
  sym_TEXT = 41,
  sym_INDENT = 42,
  sym_DEDENT = 43,
  sym_NEWLINE = 44,
  sym_LINE = 45,
  sym_source_file = 46,
  sym_item = 47,
  sym_eol = 48,
  sym_alias = 49,
  sym_assignment = 50,
  sym_export = 51,
  sym_setting = 52,
  sym_boolean = 53,
  sym_expression = 54,
  sym_condition = 55,
  sym_value = 56,
  sym_call = 57,
  sym_cmd = 58,
  sym_string = 59,
  sym_sequence = 60,
  sym_attribute = 61,
  sym_recipe = 62,
  sym_recipe_header = 63,
  sym_parameters = 64,
  sym_parameter = 65,
  sym_variadic_parameters = 66,
  sym_dependencies = 67,
  sym_dependency = 68,
  sym_depcall = 69,
  sym_body = 70,
  sym_shebang_recipe = 71,
  sym_shebang_body = 72,
  sym_shebang = 73,
  sym_recipe_body = 74,
  sym_line = 75,
  sym_recipeline = 76,
  sym_comment = 77,
  sym_interpolation = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_setting_repeat1 = 80,
  aux_sym_parameters_repeat1 = 81,
  aux_sym_dependencies_repeat1 = 82,
  aux_sym_depcall_repeat1 = 83,
  aux_sym_shebang_body_repeat1 = 84,
  aux_sym_recipeline_repeat1 = 85,
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
  [sym_notcomment] = "notcomment",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_notcomment] = sym_notcomment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_notcomment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
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
  field_left = 5,
  field_name = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_array_item] = "array_item",
  [field_else] = "else",
  [field_if] = "if",
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
  [10] = {.index = 23, .length = 4},
  [11] = {.index = 27, .length = 5},
  [12] = {.index = 32, .length = 6},
  [13] = {.index = 38, .length = 7},
  [14] = {.index = 45, .length = 6},
  [15] = {.index = 51, .length = 8},
  [16] = {.index = 59, .length = 2},
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
    {field_array, 3},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5},
  [27] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
  [32] =
    {field_array, 3},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5},
    {field_name, 1},
    {field_right, 2},
  [38] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 6},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
    {field_name, 1},
    {field_right, 2},
  [45] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 7},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
    {field_array_item, 6},
  [51] =
    {field_array, 3},
    {field_array, 5},
    {field_array, 7},
    {field_array_item, 4},
    {field_array_item, 5, .inherited = true},
    {field_array_item, 6},
    {field_name, 1},
    {field_right, 2},
  [59] =
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
  [12] = 11,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 20,
  [29] = 21,
  [30] = 20,
  [31] = 20,
  [32] = 19,
  [33] = 33,
  [34] = 25,
  [35] = 35,
  [36] = 6,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 41,
  [46] = 43,
  [47] = 33,
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
  [72] = 72,
  [73] = 48,
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
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 33,
  [114] = 43,
  [115] = 41,
  [116] = 116,
  [117] = 33,
  [118] = 118,
  [119] = 119,
  [120] = 6,
  [121] = 121,
  [122] = 122,
  [123] = 38,
  [124] = 42,
  [125] = 125,
  [126] = 126,
  [127] = 37,
  [128] = 48,
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
  [141] = 48,
  [142] = 142,
  [143] = 70,
  [144] = 144,
  [145] = 145,
  [146] = 64,
  [147] = 70,
  [148] = 148,
  [149] = 71,
  [150] = 8,
  [151] = 9,
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
  [183] = 183,
  [184] = 9,
  [185] = 185,
  [186] = 8,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 185,
  [191] = 172,
  [192] = 192,
  [193] = 165,
  [194] = 170,
  [195] = 195,
  [196] = 189,
  [197] = 172,
  [198] = 198,
  [199] = 165,
  [200] = 170,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 189,
  [205] = 201,
  [206] = 157,
  [207] = 157,
  [208] = 161,
  [209] = 161,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 173,
  [215] = 173,
  [216] = 216,
  [217] = 210,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(118);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(86);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(85);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(84);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '~') ADVANCE(65);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_notcomment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(24);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 40, .external_lex_state = 2},
  [2] = {.lex_state = 41, .external_lex_state = 2},
  [3] = {.lex_state = 41, .external_lex_state = 2},
  [4] = {.lex_state = 41, .external_lex_state = 2},
  [5] = {.lex_state = 41, .external_lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
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
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 41, .external_lex_state = 3},
  [52] = {.lex_state = 11, .external_lex_state = 4},
  [53] = {.lex_state = 41, .external_lex_state = 3},
  [54] = {.lex_state = 41, .external_lex_state = 2},
  [55] = {.lex_state = 41, .external_lex_state = 2},
  [56] = {.lex_state = 41, .external_lex_state = 2},
  [57] = {.lex_state = 41, .external_lex_state = 2},
  [58] = {.lex_state = 41, .external_lex_state = 2},
  [59] = {.lex_state = 41, .external_lex_state = 2},
  [60] = {.lex_state = 41, .external_lex_state = 2},
  [61] = {.lex_state = 41, .external_lex_state = 2},
  [62] = {.lex_state = 41, .external_lex_state = 2},
  [63] = {.lex_state = 41, .external_lex_state = 2},
  [64] = {.lex_state = 41, .external_lex_state = 2},
  [65] = {.lex_state = 41, .external_lex_state = 2},
  [66] = {.lex_state = 41, .external_lex_state = 2},
  [67] = {.lex_state = 41, .external_lex_state = 2},
  [68] = {.lex_state = 41, .external_lex_state = 2},
  [69] = {.lex_state = 41, .external_lex_state = 2},
  [70] = {.lex_state = 41, .external_lex_state = 2},
  [71] = {.lex_state = 41, .external_lex_state = 2},
  [72] = {.lex_state = 41, .external_lex_state = 2},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 41, .external_lex_state = 2},
  [75] = {.lex_state = 41, .external_lex_state = 2},
  [76] = {.lex_state = 41, .external_lex_state = 2},
  [77] = {.lex_state = 41, .external_lex_state = 2},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 12, .external_lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12, .external_lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 4},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2, .external_lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 2, .external_lex_state = 2},
  [101] = {.lex_state = 2, .external_lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2, .external_lex_state = 2},
  [105] = {.lex_state = 38, .external_lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 38, .external_lex_state = 2},
  [108] = {.lex_state = 41, .external_lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2, .external_lex_state = 2},
  [112] = {.lex_state = 38, .external_lex_state = 2},
  [113] = {.lex_state = 41, .external_lex_state = 2},
  [114] = {.lex_state = 41, .external_lex_state = 2},
  [115] = {.lex_state = 41, .external_lex_state = 2},
  [116] = {.lex_state = 41, .external_lex_state = 2},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 41, .external_lex_state = 2},
  [119] = {.lex_state = 41, .external_lex_state = 2},
  [120] = {.lex_state = 41, .external_lex_state = 2},
  [121] = {.lex_state = 41, .external_lex_state = 2},
  [122] = {.lex_state = 41, .external_lex_state = 2},
  [123] = {.lex_state = 41, .external_lex_state = 2},
  [124] = {.lex_state = 41, .external_lex_state = 2},
  [125] = {.lex_state = 41, .external_lex_state = 2},
  [126] = {.lex_state = 41, .external_lex_state = 2},
  [127] = {.lex_state = 41, .external_lex_state = 2},
  [128] = {.lex_state = 41, .external_lex_state = 2},
  [129] = {.lex_state = 41, .external_lex_state = 2},
  [130] = {.lex_state = 41, .external_lex_state = 2},
  [131] = {.lex_state = 41, .external_lex_state = 2},
  [132] = {.lex_state = 41, .external_lex_state = 2},
  [133] = {.lex_state = 41, .external_lex_state = 2},
  [134] = {.lex_state = 41, .external_lex_state = 2},
  [135] = {.lex_state = 2, .external_lex_state = 2},
  [136] = {.lex_state = 2, .external_lex_state = 2},
  [137] = {.lex_state = 12, .external_lex_state = 4},
  [138] = {.lex_state = 40},
  [139] = {.lex_state = 12, .external_lex_state = 4},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 12, .external_lex_state = 4},
  [144] = {.lex_state = 12, .external_lex_state = 4},
  [145] = {.lex_state = 38, .external_lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 41, .external_lex_state = 2},
  [151] = {.lex_state = 41, .external_lex_state = 2},
  [152] = {.lex_state = 41, .external_lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 40},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 77},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 77},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 40},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 40},
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
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
    [sym_item] = STATE(5),
    [sym_eol] = STATE(58),
    [sym_alias] = STATE(58),
    [sym_assignment] = STATE(58),
    [sym_export] = STATE(58),
    [sym_setting] = STATE(58),
    [sym_attribute] = STATE(140),
    [sym_recipe] = STATE(58),
    [sym_recipe_header] = STATE(198),
    [sym_shebang] = STATE(4),
    [sym_comment] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_alias] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_POUND_BANG] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(17),
    [sym_NAME] = ACTIONS(19),
    [sym_NEWLINE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_alias,
    ACTIONS(28), 1,
      anon_sym_export,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(40), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      sym_NAME,
    ACTIONS(46), 1,
      sym_NEWLINE,
    STATE(64), 1,
      sym_comment,
    STATE(140), 1,
      sym_attribute,
    STATE(198), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(58), 6,
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
    ACTIONS(19), 1,
      sym_NAME,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(140), 1,
      sym_attribute,
    STATE(198), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(58), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [98] = 14,
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
    ACTIONS(19), 1,
      sym_NAME,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
    STATE(140), 1,
      sym_attribute,
    STATE(198), 1,
      sym_recipe_header,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(58), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [147] = 14,
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
    ACTIONS(19), 1,
      sym_NAME,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
    STATE(140), 1,
      sym_attribute,
    STATE(198), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(58), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [196] = 2,
    ACTIONS(57), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(55), 16,
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
  [219] = 11,
    ACTIONS(59), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      sym_BACKTICK,
    ACTIONS(70), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(73), 1,
      sym_NAME,
    STATE(48), 1,
      sym_value,
    ACTIONS(76), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(79), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(7), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [258] = 2,
    ACTIONS(84), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(82), 11,
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
  [279] = 2,
    ACTIONS(88), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(86), 11,
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
  [300] = 12,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(162), 1,
      sym_sequence,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [341] = 12,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(165), 1,
      sym_sequence,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [382] = 12,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(199), 1,
      sym_sequence,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [423] = 11,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      sym_BACKTICK,
    ACTIONS(116), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(118), 1,
      sym_NAME,
    STATE(48), 1,
      sym_value,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(15), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [462] = 12,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_value,
    STATE(153), 1,
      sym_expression,
    STATE(193), 1,
      sym_sequence,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [503] = 11,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_BACKTICK,
    ACTIONS(116), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(118), 1,
      sym_NAME,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_value,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(7), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [542] = 11,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(138), 1,
      sym_expression,
    STATE(215), 1,
      sym_condition,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [580] = 11,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(138), 1,
      sym_expression,
    STATE(214), 1,
      sym_condition,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [618] = 11,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(138), 1,
      sym_expression,
    STATE(173), 1,
      sym_condition,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [656] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(170), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [691] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(9), 1,
      sym_expression,
    STATE(73), 1,
      sym_value,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [726] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(217), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [761] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(210), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [796] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(179), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [831] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(200), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [866] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(172), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [901] = 10,
    ACTIONS(128), 1,
      anon_sym_if,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_BACKTICK,
    ACTIONS(134), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(136), 1,
      sym_NAME,
    STATE(128), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    ACTIONS(138), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(140), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(123), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [936] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(197), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [971] = 10,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_BACKTICK,
    ACTIONS(116), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(142), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      sym_NAME,
    STATE(141), 1,
      sym_value,
    STATE(184), 1,
      sym_expression,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1006] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(211), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1041] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_BACKTICK,
    ACTIONS(116), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(118), 1,
      sym_NAME,
    STATE(9), 1,
      sym_expression,
    STATE(48), 1,
      sym_value,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1076] = 10,
    ACTIONS(128), 1,
      anon_sym_if,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_BACKTICK,
    ACTIONS(134), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(136), 1,
      sym_NAME,
    STATE(128), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    ACTIONS(138), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(140), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(123), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1111] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(194), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1146] = 2,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
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
  [1165] = 10,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(100), 1,
      sym_NAME,
    STATE(73), 1,
      sym_value,
    STATE(191), 1,
      sym_expression,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1200] = 10,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_BACKTICK,
    ACTIONS(116), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(142), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      sym_NAME,
    STATE(141), 1,
      sym_value,
    STATE(159), 1,
      sym_expression,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1235] = 2,
    ACTIONS(57), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(55), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1253] = 1,
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
  [1269] = 2,
    ACTIONS(152), 5,
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
  [1287] = 1,
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
  [1303] = 2,
    ACTIONS(154), 5,
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
  [1321] = 2,
    ACTIONS(156), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(158), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1339] = 1,
    ACTIONS(160), 13,
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
  [1355] = 1,
    ACTIONS(162), 13,
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
  [1371] = 2,
    ACTIONS(164), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(160), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1389] = 1,
    ACTIONS(158), 13,
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
  [1405] = 2,
    ACTIONS(166), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(162), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1423] = 2,
    ACTIONS(152), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(146), 7,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1440] = 3,
    ACTIONS(170), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(168), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(172), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1459] = 8,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(174), 1,
      sym_NAME,
    STATE(110), 1,
      sym_value,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1488] = 8,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_BACKTICK,
    ACTIONS(98), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(174), 1,
      sym_NAME,
    STATE(106), 1,
      sym_value,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(39), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1517] = 4,
    ACTIONS(180), 1,
      sym_INDENT,
    STATE(65), 1,
      sym_body,
    ACTIONS(178), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(176), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1537] = 8,
    ACTIONS(182), 1,
      anon_sym_POUND_BANG,
    ACTIONS(184), 1,
      sym_notcomment,
    ACTIONS(186), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      sym_DEDENT,
    STATE(88), 1,
      sym_shebang,
    STATE(89), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(137), 2,
      sym_recipeline,
      sym_comment,
    STATE(168), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1565] = 4,
    ACTIONS(180), 1,
      sym_INDENT,
    STATE(59), 1,
      sym_body,
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
  [1585] = 2,
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
  [1599] = 2,
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
  [1613] = 2,
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
  [1627] = 2,
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
  [1641] = 2,
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
  [1655] = 2,
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
  [1669] = 2,
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
  [1683] = 2,
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
  [1697] = 2,
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
  [1711] = 2,
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
  [1725] = 2,
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
  [1739] = 2,
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
  [1753] = 2,
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
  [1767] = 2,
    ACTIONS(244), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(242), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1781] = 2,
    ACTIONS(248), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(246), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1795] = 2,
    ACTIONS(252), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(250), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1809] = 2,
    ACTIONS(256), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(254), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1823] = 2,
    ACTIONS(260), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(258), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1837] = 2,
    ACTIONS(264), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(262), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1851] = 2,
    ACTIONS(266), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(172), 7,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
  [1865] = 2,
    ACTIONS(270), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(268), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1879] = 2,
    ACTIONS(274), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(272), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1893] = 2,
    ACTIONS(278), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(276), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1907] = 2,
    ACTIONS(282), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(280), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1921] = 5,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(140), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    ACTIONS(286), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(126), 2,
      sym_boolean,
      sym_string,
  [1941] = 6,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_setting_repeat1,
    STATE(202), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1962] = 6,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_setting_repeat1,
    STATE(188), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1983] = 6,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      sym_NAME,
    STATE(175), 1,
      sym_variadic_parameters,
    ACTIONS(294), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(90), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2004] = 6,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_setting_repeat1,
    STATE(216), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2025] = 6,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_setting_repeat1,
    STATE(160), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2046] = 5,
    ACTIONS(184), 1,
      sym_notcomment,
    ACTIONS(306), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      sym_DEDENT,
    STATE(91), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(137), 2,
      sym_recipeline,
      sym_comment,
  [2064] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_setting_repeat1,
    ACTIONS(315), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(313), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2080] = 6,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_,
    ACTIONS(321), 1,
      sym_NAME,
    ACTIONS(323), 1,
      sym_NEWLINE,
    STATE(176), 1,
      sym_dependencies,
    STATE(104), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2100] = 6,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      sym_NAME,
    ACTIONS(325), 1,
      anon_sym_COLON_EQ,
    ACTIONS(327), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_parameters,
    STATE(81), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2120] = 5,
    ACTIONS(184), 1,
      sym_notcomment,
    ACTIONS(306), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
      sym_shebang_body,
    STATE(84), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(137), 2,
      sym_recipeline,
      sym_comment,
  [2138] = 5,
    ACTIONS(184), 1,
      sym_notcomment,
    ACTIONS(306), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_DEDENT,
    STATE(91), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(137), 2,
      sym_recipeline,
      sym_comment,
  [2156] = 4,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    ACTIONS(336), 1,
      sym_NAME,
    STATE(90), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(331), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [2172] = 5,
    ACTIONS(339), 1,
      sym_notcomment,
    ACTIONS(342), 1,
      aux_sym_comment_token1,
    ACTIONS(345), 1,
      sym_DEDENT,
    STATE(91), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(137), 2,
      sym_recipeline,
      sym_comment,
  [2190] = 6,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      sym_NAME,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(349), 1,
      sym_NEWLINE,
    STATE(174), 1,
      sym_dependencies,
    STATE(104), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2210] = 6,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      sym_NAME,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(353), 1,
      sym_NEWLINE,
    STATE(166), 1,
      sym_dependencies,
    STATE(104), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2230] = 4,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2245] = 2,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(357), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2256] = 2,
    ACTIONS(363), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(361), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2267] = 5,
    ACTIONS(349), 1,
      sym_NEWLINE,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_NAME,
    STATE(174), 1,
      sym_dependencies,
    STATE(104), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2284] = 5,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      sym_NAME,
    ACTIONS(369), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_parameters,
    STATE(81), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2301] = 2,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(371), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2312] = 5,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_NAME,
    ACTIONS(375), 1,
      sym_NEWLINE,
    STATE(167), 1,
      sym_dependencies,
    STATE(104), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2329] = 5,
    ACTIONS(353), 1,
      sym_NEWLINE,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_NAME,
    STATE(166), 1,
      sym_dependencies,
    STATE(104), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2346] = 5,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      sym_NAME,
    ACTIONS(377), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_parameters,
    STATE(81), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2363] = 4,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2378] = 4,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_NAME,
    ACTIONS(381), 1,
      sym_NEWLINE,
    STATE(111), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2392] = 4,
    ACTIONS(383), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_TEXT,
    ACTIONS(389), 1,
      sym_NEWLINE,
    STATE(105), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2406] = 1,
    ACTIONS(391), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2414] = 4,
    ACTIONS(393), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(395), 1,
      sym_TEXT,
    ACTIONS(397), 1,
      sym_NEWLINE,
    STATE(112), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2428] = 5,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_COLON_EQ,
    STATE(64), 1,
      sym_comment,
    STATE(77), 1,
      sym_eol,
  [2444] = 3,
    STATE(96), 1,
      sym_string,
    ACTIONS(102), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(104), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2456] = 1,
    ACTIONS(401), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2464] = 4,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      sym_NAME,
    ACTIONS(409), 1,
      sym_NEWLINE,
    STATE(111), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2478] = 4,
    ACTIONS(393), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(411), 1,
      sym_TEXT,
    ACTIONS(413), 1,
      sym_NEWLINE,
    STATE(105), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2492] = 2,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2502] = 1,
    ACTIONS(162), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2509] = 1,
    ACTIONS(158), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2516] = 4,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      sym_NEWLINE,
    STATE(146), 1,
      sym_comment,
    STATE(155), 1,
      sym_eol,
  [2529] = 2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 3,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_RBRACE_RBRACE,
  [2538] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_eol,
    STATE(64), 1,
      sym_comment,
  [2551] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_eol,
    STATE(64), 1,
      sym_comment,
  [2564] = 1,
    ACTIONS(55), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2571] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_eol,
    STATE(64), 1,
      sym_comment,
  [2584] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_eol,
    STATE(64), 1,
      sym_comment,
  [2597] = 1,
    ACTIONS(146), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2604] = 1,
    ACTIONS(160), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2611] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_eol,
    STATE(64), 1,
      sym_comment,
  [2624] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(74), 1,
      sym_eol,
  [2637] = 1,
    ACTIONS(150), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2644] = 2,
    ACTIONS(172), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2653] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(66), 1,
      sym_eol,
  [2666] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(68), 1,
      sym_eol,
  [2679] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(75), 1,
      sym_eol,
  [2692] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(76), 1,
      sym_eol,
  [2705] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_eol,
    STATE(64), 1,
      sym_comment,
  [2718] = 4,
    ACTIONS(21), 1,
      sym_NEWLINE,
    ACTIONS(51), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    STATE(72), 1,
      sym_eol,
  [2731] = 1,
    ACTIONS(425), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2737] = 1,
    ACTIONS(427), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [2743] = 1,
    ACTIONS(429), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2749] = 1,
    ACTIONS(431), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [2755] = 1,
    ACTIONS(433), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2761] = 3,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(435), 1,
      sym_NAME,
    STATE(181), 1,
      sym_recipe_header,
  [2771] = 2,
    ACTIONS(172), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(437), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2779] = 3,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      sym_NAME,
    STATE(169), 1,
      sym_parameter,
  [2789] = 1,
    ACTIONS(254), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2795] = 1,
    ACTIONS(439), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2801] = 2,
    ACTIONS(443), 1,
      sym_NEWLINE,
    ACTIONS(441), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2809] = 1,
    ACTIONS(234), 2,
      anon_sym_AT,
      sym_NAME,
  [2814] = 1,
    ACTIONS(254), 2,
      anon_sym_AT,
      sym_NAME,
  [2819] = 2,
    ACTIONS(445), 1,
      sym_NAME,
    STATE(67), 1,
      sym_assignment,
  [2826] = 1,
    ACTIONS(258), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [2831] = 1,
    ACTIONS(82), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2836] = 1,
    ACTIONS(86), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2841] = 1,
    ACTIONS(447), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [2846] = 2,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [2853] = 2,
    ACTIONS(453), 1,
      sym_NAME,
    STATE(171), 1,
      sym_depcall,
  [2860] = 1,
    ACTIONS(455), 2,
      anon_sym_AT,
      sym_NAME,
  [2865] = 2,
    ACTIONS(457), 1,
      anon_sym_shell,
    ACTIONS(459), 1,
      sym_NAME,
  [2872] = 1,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
  [2876] = 1,
    ACTIONS(463), 1,
      anon_sym_COLON_EQ,
  [2880] = 1,
    ACTIONS(465), 1,
      anon_sym_RBRACE_RBRACE,
  [2884] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
  [2888] = 1,
    ACTIONS(469), 1,
      anon_sym_else,
  [2892] = 1,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [2896] = 1,
    ACTIONS(473), 1,
      sym_DEDENT,
  [2900] = 1,
    ACTIONS(475), 1,
      sym_NAME,
  [2904] = 1,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [2908] = 1,
    ACTIONS(375), 1,
      sym_NEWLINE,
  [2912] = 1,
    ACTIONS(479), 1,
      sym_NEWLINE,
  [2916] = 1,
    ACTIONS(481), 1,
      sym_DEDENT,
  [2920] = 1,
    ACTIONS(483), 1,
      anon_sym_COLON,
  [2924] = 1,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
  [2928] = 1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [2932] = 1,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
  [2936] = 1,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
  [2940] = 1,
    ACTIONS(353), 1,
      sym_NEWLINE,
  [2944] = 1,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [2948] = 1,
    ACTIONS(349), 1,
      sym_NEWLINE,
  [2952] = 1,
    ACTIONS(495), 1,
      anon_sym_COLON,
  [2956] = 1,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
  [2960] = 1,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
  [2964] = 1,
    ACTIONS(501), 1,
      sym_NAME,
  [2968] = 1,
    ACTIONS(503), 1,
      sym_NEWLINE,
  [2972] = 1,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [2976] = 1,
    ACTIONS(505), 1,
      sym_NAME,
  [2980] = 1,
    ACTIONS(86), 1,
      anon_sym_RBRACE_RBRACE,
  [2984] = 1,
    ACTIONS(507), 1,
      sym_NEWLINE,
  [2988] = 1,
    ACTIONS(82), 1,
      anon_sym_RBRACE_RBRACE,
  [2992] = 1,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
  [2996] = 1,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
  [3000] = 1,
    ACTIONS(513), 1,
      sym_NEWLINE,
  [3004] = 1,
    ACTIONS(515), 1,
      sym_NEWLINE,
  [3008] = 1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3012] = 1,
    ACTIONS(325), 1,
      anon_sym_COLON_EQ,
  [3016] = 1,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3020] = 1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
  [3024] = 1,
    ACTIONS(523), 1,
      anon_sym_COLON_EQ,
  [3028] = 1,
    ACTIONS(525), 1,
      sym_NEWLINE,
  [3032] = 1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [3036] = 1,
    ACTIONS(529), 1,
      sym_NEWLINE,
  [3040] = 1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [3044] = 1,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
  [3048] = 1,
    ACTIONS(535), 1,
      aux_sym_shebang_token1,
  [3052] = 1,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
  [3056] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [3060] = 1,
    ACTIONS(541), 1,
      sym_NEWLINE,
  [3064] = 1,
    ACTIONS(543), 1,
      aux_sym_shebang_token1,
  [3068] = 1,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
  [3072] = 1,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
  [3076] = 1,
    ACTIONS(549), 1,
      anon_sym_else,
  [3080] = 1,
    ACTIONS(551), 1,
      anon_sym_else,
  [3084] = 1,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
  [3088] = 1,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
  [3092] = 1,
    ACTIONS(557), 1,
      sym_NAME,
  [3096] = 1,
    ACTIONS(559), 1,
      sym_NAME,
  [3100] = 1,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [3104] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [3108] = 1,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
  [3112] = 1,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 341,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 542,
  [SMALL_STATE(17)] = 580,
  [SMALL_STATE(18)] = 618,
  [SMALL_STATE(19)] = 656,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 796,
  [SMALL_STATE(24)] = 831,
  [SMALL_STATE(25)] = 866,
  [SMALL_STATE(26)] = 901,
  [SMALL_STATE(27)] = 936,
  [SMALL_STATE(28)] = 971,
  [SMALL_STATE(29)] = 1006,
  [SMALL_STATE(30)] = 1041,
  [SMALL_STATE(31)] = 1076,
  [SMALL_STATE(32)] = 1111,
  [SMALL_STATE(33)] = 1146,
  [SMALL_STATE(34)] = 1165,
  [SMALL_STATE(35)] = 1200,
  [SMALL_STATE(36)] = 1235,
  [SMALL_STATE(37)] = 1253,
  [SMALL_STATE(38)] = 1269,
  [SMALL_STATE(39)] = 1287,
  [SMALL_STATE(40)] = 1303,
  [SMALL_STATE(41)] = 1321,
  [SMALL_STATE(42)] = 1339,
  [SMALL_STATE(43)] = 1355,
  [SMALL_STATE(44)] = 1371,
  [SMALL_STATE(45)] = 1389,
  [SMALL_STATE(46)] = 1405,
  [SMALL_STATE(47)] = 1423,
  [SMALL_STATE(48)] = 1440,
  [SMALL_STATE(49)] = 1459,
  [SMALL_STATE(50)] = 1488,
  [SMALL_STATE(51)] = 1517,
  [SMALL_STATE(52)] = 1537,
  [SMALL_STATE(53)] = 1565,
  [SMALL_STATE(54)] = 1585,
  [SMALL_STATE(55)] = 1599,
  [SMALL_STATE(56)] = 1613,
  [SMALL_STATE(57)] = 1627,
  [SMALL_STATE(58)] = 1641,
  [SMALL_STATE(59)] = 1655,
  [SMALL_STATE(60)] = 1669,
  [SMALL_STATE(61)] = 1683,
  [SMALL_STATE(62)] = 1697,
  [SMALL_STATE(63)] = 1711,
  [SMALL_STATE(64)] = 1725,
  [SMALL_STATE(65)] = 1739,
  [SMALL_STATE(66)] = 1753,
  [SMALL_STATE(67)] = 1767,
  [SMALL_STATE(68)] = 1781,
  [SMALL_STATE(69)] = 1795,
  [SMALL_STATE(70)] = 1809,
  [SMALL_STATE(71)] = 1823,
  [SMALL_STATE(72)] = 1837,
  [SMALL_STATE(73)] = 1851,
  [SMALL_STATE(74)] = 1865,
  [SMALL_STATE(75)] = 1879,
  [SMALL_STATE(76)] = 1893,
  [SMALL_STATE(77)] = 1907,
  [SMALL_STATE(78)] = 1921,
  [SMALL_STATE(79)] = 1941,
  [SMALL_STATE(80)] = 1962,
  [SMALL_STATE(81)] = 1983,
  [SMALL_STATE(82)] = 2004,
  [SMALL_STATE(83)] = 2025,
  [SMALL_STATE(84)] = 2046,
  [SMALL_STATE(85)] = 2064,
  [SMALL_STATE(86)] = 2080,
  [SMALL_STATE(87)] = 2100,
  [SMALL_STATE(88)] = 2120,
  [SMALL_STATE(89)] = 2138,
  [SMALL_STATE(90)] = 2156,
  [SMALL_STATE(91)] = 2172,
  [SMALL_STATE(92)] = 2190,
  [SMALL_STATE(93)] = 2210,
  [SMALL_STATE(94)] = 2230,
  [SMALL_STATE(95)] = 2245,
  [SMALL_STATE(96)] = 2256,
  [SMALL_STATE(97)] = 2267,
  [SMALL_STATE(98)] = 2284,
  [SMALL_STATE(99)] = 2301,
  [SMALL_STATE(100)] = 2312,
  [SMALL_STATE(101)] = 2329,
  [SMALL_STATE(102)] = 2346,
  [SMALL_STATE(103)] = 2363,
  [SMALL_STATE(104)] = 2378,
  [SMALL_STATE(105)] = 2392,
  [SMALL_STATE(106)] = 2406,
  [SMALL_STATE(107)] = 2414,
  [SMALL_STATE(108)] = 2428,
  [SMALL_STATE(109)] = 2444,
  [SMALL_STATE(110)] = 2456,
  [SMALL_STATE(111)] = 2464,
  [SMALL_STATE(112)] = 2478,
  [SMALL_STATE(113)] = 2492,
  [SMALL_STATE(114)] = 2502,
  [SMALL_STATE(115)] = 2509,
  [SMALL_STATE(116)] = 2516,
  [SMALL_STATE(117)] = 2529,
  [SMALL_STATE(118)] = 2538,
  [SMALL_STATE(119)] = 2551,
  [SMALL_STATE(120)] = 2564,
  [SMALL_STATE(121)] = 2571,
  [SMALL_STATE(122)] = 2584,
  [SMALL_STATE(123)] = 2597,
  [SMALL_STATE(124)] = 2604,
  [SMALL_STATE(125)] = 2611,
  [SMALL_STATE(126)] = 2624,
  [SMALL_STATE(127)] = 2637,
  [SMALL_STATE(128)] = 2644,
  [SMALL_STATE(129)] = 2653,
  [SMALL_STATE(130)] = 2666,
  [SMALL_STATE(131)] = 2679,
  [SMALL_STATE(132)] = 2692,
  [SMALL_STATE(133)] = 2705,
  [SMALL_STATE(134)] = 2718,
  [SMALL_STATE(135)] = 2731,
  [SMALL_STATE(136)] = 2737,
  [SMALL_STATE(137)] = 2743,
  [SMALL_STATE(138)] = 2749,
  [SMALL_STATE(139)] = 2755,
  [SMALL_STATE(140)] = 2761,
  [SMALL_STATE(141)] = 2771,
  [SMALL_STATE(142)] = 2779,
  [SMALL_STATE(143)] = 2789,
  [SMALL_STATE(144)] = 2795,
  [SMALL_STATE(145)] = 2801,
  [SMALL_STATE(146)] = 2809,
  [SMALL_STATE(147)] = 2814,
  [SMALL_STATE(148)] = 2819,
  [SMALL_STATE(149)] = 2826,
  [SMALL_STATE(150)] = 2831,
  [SMALL_STATE(151)] = 2836,
  [SMALL_STATE(152)] = 2841,
  [SMALL_STATE(153)] = 2846,
  [SMALL_STATE(154)] = 2853,
  [SMALL_STATE(155)] = 2860,
  [SMALL_STATE(156)] = 2865,
  [SMALL_STATE(157)] = 2872,
  [SMALL_STATE(158)] = 2876,
  [SMALL_STATE(159)] = 2880,
  [SMALL_STATE(160)] = 2884,
  [SMALL_STATE(161)] = 2888,
  [SMALL_STATE(162)] = 2892,
  [SMALL_STATE(163)] = 2896,
  [SMALL_STATE(164)] = 2900,
  [SMALL_STATE(165)] = 2904,
  [SMALL_STATE(166)] = 2908,
  [SMALL_STATE(167)] = 2912,
  [SMALL_STATE(168)] = 2916,
  [SMALL_STATE(169)] = 2920,
  [SMALL_STATE(170)] = 2924,
  [SMALL_STATE(171)] = 2928,
  [SMALL_STATE(172)] = 2932,
  [SMALL_STATE(173)] = 2936,
  [SMALL_STATE(174)] = 2940,
  [SMALL_STATE(175)] = 2944,
  [SMALL_STATE(176)] = 2948,
  [SMALL_STATE(177)] = 2952,
  [SMALL_STATE(178)] = 2956,
  [SMALL_STATE(179)] = 2960,
  [SMALL_STATE(180)] = 2964,
  [SMALL_STATE(181)] = 2968,
  [SMALL_STATE(182)] = 2972,
  [SMALL_STATE(183)] = 2976,
  [SMALL_STATE(184)] = 2980,
  [SMALL_STATE(185)] = 2984,
  [SMALL_STATE(186)] = 2988,
  [SMALL_STATE(187)] = 2992,
  [SMALL_STATE(188)] = 2996,
  [SMALL_STATE(189)] = 3000,
  [SMALL_STATE(190)] = 3004,
  [SMALL_STATE(191)] = 3008,
  [SMALL_STATE(192)] = 3012,
  [SMALL_STATE(193)] = 3016,
  [SMALL_STATE(194)] = 3020,
  [SMALL_STATE(195)] = 3024,
  [SMALL_STATE(196)] = 3028,
  [SMALL_STATE(197)] = 3032,
  [SMALL_STATE(198)] = 3036,
  [SMALL_STATE(199)] = 3040,
  [SMALL_STATE(200)] = 3044,
  [SMALL_STATE(201)] = 3048,
  [SMALL_STATE(202)] = 3052,
  [SMALL_STATE(203)] = 3056,
  [SMALL_STATE(204)] = 3060,
  [SMALL_STATE(205)] = 3064,
  [SMALL_STATE(206)] = 3068,
  [SMALL_STATE(207)] = 3072,
  [SMALL_STATE(208)] = 3076,
  [SMALL_STATE(209)] = 3080,
  [SMALL_STATE(210)] = 3084,
  [SMALL_STATE(211)] = 3088,
  [SMALL_STATE(212)] = 3092,
  [SMALL_STATE(213)] = 3096,
  [SMALL_STATE(214)] = 3100,
  [SMALL_STATE(215)] = 3104,
  [SMALL_STATE(216)] = 3108,
  [SMALL_STATE(217)] = 3112,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(40),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(40),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(47),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 16),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 16),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 12),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 12),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, .production_id = 9),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, .production_id = 9),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, .production_id = 7),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, .production_id = 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 15),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 15),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 10),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 10),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 11),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 11),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 13),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 13),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 14),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 14),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8), SHIFT_REPEAT(109),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(183),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(95),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(107),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(196),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(35),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(105),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(154),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(136),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [539] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
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
