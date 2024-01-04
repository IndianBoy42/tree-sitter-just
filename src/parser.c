#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_alias = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_export = 3,
  anon_sym_import = 4,
  anon_sym_QMARK = 5,
  anon_sym_mod = 6,
  anon_sym_set = 7,
  anon_sym_LBRACK = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACK = 10,
  anon_sym_shell = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_if = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_else = 17,
  anon_sym_PLUS = 18,
  anon_sym_SLASH = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_EQ_TILDE = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_AT = 25,
  anon_sym_COLON = 26,
  anon_sym_ = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_EQ = 29,
  anon_sym_STAR = 30,
  anon_sym_POUND_BANG = 31,
  aux_sym_shebang_token1 = 32,
  sym_notcomment = 33,
  aux_sym_comment_token1 = 34,
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
  sym_import = 55,
  sym_module = 56,
  sym_setting = 57,
  sym_boolean = 58,
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
  [anon_sym_import] = "import",
  [anon_sym_QMARK] = "\?",
  [anon_sym_mod] = "mod",
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
  [sym_import] = "import",
  [sym_module] = "module",
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
  [anon_sym_import] = anon_sym_import,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_mod] = anon_sym_mod,
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
  [sym_import] = sym_import,
  [sym_module] = sym_module,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
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
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
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
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 22,
  [30] = 25,
  [31] = 21,
  [32] = 21,
  [33] = 33,
  [34] = 34,
  [35] = 25,
  [36] = 24,
  [37] = 22,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 6,
  [46] = 46,
  [47] = 6,
  [48] = 44,
  [49] = 43,
  [50] = 38,
  [51] = 42,
  [52] = 28,
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
  [84] = 54,
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
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 28,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 39,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 38,
  [133] = 42,
  [134] = 134,
  [135] = 28,
  [136] = 54,
  [137] = 137,
  [138] = 138,
  [139] = 43,
  [140] = 140,
  [141] = 44,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 54,
  [147] = 147,
  [148] = 78,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 78,
  [157] = 58,
  [158] = 158,
  [159] = 9,
  [160] = 10,
  [161] = 161,
  [162] = 62,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 10,
  [195] = 195,
  [196] = 9,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 191,
  [201] = 177,
  [202] = 202,
  [203] = 203,
  [204] = 174,
  [205] = 205,
  [206] = 199,
  [207] = 177,
  [208] = 208,
  [209] = 203,
  [210] = 174,
  [211] = 211,
  [212] = 212,
  [213] = 199,
  [214] = 211,
  [215] = 215,
  [216] = 172,
  [217] = 172,
  [218] = 168,
  [219] = 168,
  [220] = 183,
  [221] = 183,
  [222] = 222,
  [223] = 223,
  [224] = 170,
  [225] = 170,
  [226] = 226,
  [227] = 203,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '~') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(89);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(88);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
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
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '~') ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_notcomment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(24);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(16);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
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
  [11] = {.lex_state = 41, .external_lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 41, .external_lex_state = 2},
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
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 41, .external_lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 41, .external_lex_state = 3},
  [47] = {.lex_state = 41, .external_lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
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
  [73] = {.lex_state = 11, .external_lex_state = 4},
  [74] = {.lex_state = 41, .external_lex_state = 2},
  [75] = {.lex_state = 41, .external_lex_state = 2},
  [76] = {.lex_state = 41, .external_lex_state = 2},
  [77] = {.lex_state = 41, .external_lex_state = 2},
  [78] = {.lex_state = 41, .external_lex_state = 2},
  [79] = {.lex_state = 41, .external_lex_state = 2},
  [80] = {.lex_state = 41, .external_lex_state = 2},
  [81] = {.lex_state = 41, .external_lex_state = 2},
  [82] = {.lex_state = 41, .external_lex_state = 2},
  [83] = {.lex_state = 41, .external_lex_state = 2},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 12, .external_lex_state = 4},
  [96] = {.lex_state = 12, .external_lex_state = 4},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 12, .external_lex_state = 4},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2, .external_lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 2, .external_lex_state = 2},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2, .external_lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 38, .external_lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2, .external_lex_state = 2},
  [115] = {.lex_state = 2, .external_lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 41, .external_lex_state = 2},
  [118] = {.lex_state = 38, .external_lex_state = 2},
  [119] = {.lex_state = 41, .external_lex_state = 2},
  [120] = {.lex_state = 38, .external_lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
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
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41, .external_lex_state = 2},
  [137] = {.lex_state = 41, .external_lex_state = 2},
  [138] = {.lex_state = 41, .external_lex_state = 2},
  [139] = {.lex_state = 41, .external_lex_state = 2},
  [140] = {.lex_state = 41, .external_lex_state = 2},
  [141] = {.lex_state = 41, .external_lex_state = 2},
  [142] = {.lex_state = 41, .external_lex_state = 2},
  [143] = {.lex_state = 12, .external_lex_state = 4},
  [144] = {.lex_state = 12, .external_lex_state = 4},
  [145] = {.lex_state = 12, .external_lex_state = 4},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 12, .external_lex_state = 4},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2, .external_lex_state = 2},
  [151] = {.lex_state = 40},
  [152] = {.lex_state = 2, .external_lex_state = 2},
  [153] = {.lex_state = 38, .external_lex_state = 2},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 41, .external_lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 41, .external_lex_state = 2},
  [160] = {.lex_state = 41, .external_lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 80},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 80},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 40},
  [217] = {.lex_state = 40},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 40},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
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
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
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
    [sym_source_file] = STATE(212),
    [sym_item] = STATE(5),
    [sym_eol] = STATE(57),
    [sym_alias] = STATE(57),
    [sym_assignment] = STATE(57),
    [sym_export] = STATE(57),
    [sym_import] = STATE(57),
    [sym_module] = STATE(57),
    [sym_setting] = STATE(57),
    [sym_attribute] = STATE(147),
    [sym_recipe] = STATE(57),
    [sym_recipe_header] = STATE(205),
    [sym_shebang] = STATE(4),
    [sym_comment] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_alias] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_mod] = ACTIONS(11),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_POUND_BANG] = ACTIONS(19),
    [aux_sym_comment_token1] = ACTIONS(21),
    [sym_NAME] = ACTIONS(23),
    [sym_NEWLINE] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(32), 1,
      anon_sym_export,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_mod,
    ACTIONS(41), 1,
      anon_sym_set,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      sym_NAME,
    ACTIONS(56), 1,
      sym_NEWLINE,
    STATE(62), 1,
      sym_comment,
    STATE(147), 1,
      sym_attribute,
    STATE(205), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_import,
      sym_module,
      sym_setting,
      sym_recipe,
  [57] = 16,
    ACTIONS(5), 1,
      anon_sym_alias,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(13), 1,
      anon_sym_set,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_NAME,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(147), 1,
      sym_attribute,
    STATE(205), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_import,
      sym_module,
      sym_setting,
      sym_recipe,
  [114] = 16,
    ACTIONS(5), 1,
      anon_sym_alias,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(13), 1,
      anon_sym_set,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_NAME,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
    STATE(147), 1,
      sym_attribute,
    STATE(205), 1,
      sym_recipe_header,
    STATE(3), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_import,
      sym_module,
      sym_setting,
      sym_recipe,
  [171] = 16,
    ACTIONS(5), 1,
      anon_sym_alias,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_mod,
    ACTIONS(13), 1,
      anon_sym_set,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_NAME,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
    STATE(147), 1,
      sym_attribute,
    STATE(205), 1,
      sym_recipe_header,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_import,
      sym_module,
      sym_setting,
      sym_recipe,
  [228] = 2,
    ACTIONS(67), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(65), 16,
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
  [251] = 11,
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
    STATE(54), 1,
      sym_value,
    ACTIONS(86), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(7), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [290] = 11,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      sym_BACKTICK,
    ACTIONS(100), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(102), 1,
      sym_NAME,
    STATE(54), 1,
      sym_value,
    ACTIONS(104), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(106), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(7), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [329] = 2,
    ACTIONS(110), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(108), 11,
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
  [350] = 2,
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
  [371] = 5,
    STATE(76), 1,
      sym_string,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    ACTIONS(116), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(118), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [398] = 12,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    STATE(209), 1,
      sym_sequence,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [439] = 5,
    STATE(67), 1,
      sym_string,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    ACTIONS(138), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(140), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [466] = 12,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    STATE(227), 1,
      sym_sequence,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [507] = 12,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    STATE(203), 1,
      sym_sequence,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [548] = 11,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_BACKTICK,
    ACTIONS(100), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(102), 1,
      sym_NAME,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_value,
    ACTIONS(104), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(106), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(8), 2,
      sym_expression,
      aux_sym_depcall_repeat1,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [587] = 12,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    STATE(169), 1,
      sym_sequence,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [628] = 11,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    STATE(225), 1,
      sym_condition,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [666] = 11,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    STATE(170), 1,
      sym_condition,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [704] = 11,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(151), 1,
      sym_expression,
    STATE(224), 1,
      sym_condition,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [742] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(201), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [777] = 10,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_BACKTICK,
    ACTIONS(100), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(152), 1,
      sym_NAME,
    STATE(146), 1,
      sym_value,
    STATE(194), 1,
      sym_expression,
    ACTIONS(104), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(106), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [812] = 10,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      sym_BACKTICK,
    ACTIONS(160), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(162), 1,
      sym_NAME,
    STATE(136), 1,
      sym_value,
    STATE(160), 1,
      sym_expression,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(132), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [847] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(221), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [882] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(174), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [917] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(186), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [952] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(183), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [987] = 2,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 13,
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
  [1006] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_BACKTICK,
    ACTIONS(100), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(102), 1,
      sym_NAME,
    STATE(10), 1,
      sym_expression,
    STATE(54), 1,
      sym_value,
    ACTIONS(104), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(106), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1041] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(204), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1076] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(207), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1111] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(177), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1146] = 10,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      sym_BACKTICK,
    ACTIONS(160), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(162), 1,
      sym_NAME,
    STATE(136), 1,
      sym_value,
    STATE(137), 1,
      sym_expression,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(132), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1181] = 10,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_BACKTICK,
    ACTIONS(100), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(150), 1,
      anon_sym_if,
    ACTIONS(152), 1,
      sym_NAME,
    STATE(146), 1,
      sym_value,
    STATE(181), 1,
      sym_expression,
    ACTIONS(104), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(106), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(38), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1216] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(210), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1251] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(84), 1,
      sym_value,
    STATE(220), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1286] = 10,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(132), 1,
      sym_NAME,
    STATE(10), 1,
      sym_expression,
    STATE(84), 1,
      sym_value,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1321] = 2,
    ACTIONS(168), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(164), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1339] = 1,
    ACTIONS(170), 13,
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
  [1355] = 2,
    ACTIONS(172), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(170), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1373] = 4,
    ACTIONS(178), 1,
      sym_INDENT,
    STATE(63), 1,
      sym_body,
    ACTIONS(174), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(176), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1395] = 2,
    ACTIONS(180), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(182), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1413] = 2,
    ACTIONS(184), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(186), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1431] = 2,
    ACTIONS(188), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(190), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1449] = 2,
    ACTIONS(67), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(65), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1467] = 4,
    ACTIONS(178), 1,
      sym_INDENT,
    STATE(74), 1,
      sym_body,
    ACTIONS(192), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(194), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1489] = 2,
    ACTIONS(67), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
    ACTIONS(65), 7,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_comment_token1,
  [1507] = 1,
    ACTIONS(190), 13,
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
  [1523] = 1,
    ACTIONS(186), 13,
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
  [1539] = 1,
    ACTIONS(164), 13,
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
  [1555] = 1,
    ACTIONS(182), 13,
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
  [1571] = 2,
    ACTIONS(168), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1588] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(196), 1,
      sym_NAME,
    STATE(113), 1,
      sym_value,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1617] = 3,
    ACTIONS(200), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(198), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(202), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1636] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      sym_BACKTICK,
    ACTIONS(130), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(196), 1,
      sym_NAME,
    STATE(116), 1,
      sym_value,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(50), 3,
      sym_call,
      sym_cmd,
      sym_string,
  [1665] = 2,
    ACTIONS(204), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(206), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1681] = 2,
    ACTIONS(208), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(210), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1697] = 2,
    ACTIONS(212), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(214), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1713] = 2,
    ACTIONS(216), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(218), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1729] = 2,
    ACTIONS(220), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(222), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1745] = 2,
    ACTIONS(224), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(226), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1761] = 2,
    ACTIONS(228), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(230), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1777] = 2,
    ACTIONS(232), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(234), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1793] = 2,
    ACTIONS(236), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(238), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1809] = 2,
    ACTIONS(240), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(242), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1825] = 2,
    ACTIONS(244), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(246), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1841] = 2,
    ACTIONS(116), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(118), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1857] = 2,
    ACTIONS(248), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(250), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1873] = 2,
    ACTIONS(252), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(254), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1889] = 2,
    ACTIONS(256), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(258), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1905] = 2,
    ACTIONS(260), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(262), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1921] = 2,
    ACTIONS(264), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(266), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1937] = 8,
    ACTIONS(268), 1,
      anon_sym_POUND_BANG,
    ACTIONS(270), 1,
      sym_notcomment,
    ACTIONS(272), 1,
      aux_sym_comment_token1,
    ACTIONS(274), 1,
      sym_DEDENT,
    STATE(91), 1,
      sym_shebang,
    STATE(100), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(145), 2,
      sym_recipeline,
      sym_comment,
    STATE(180), 2,
      sym_shebang_recipe,
      sym_recipe_body,
  [1965] = 2,
    ACTIONS(174), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(176), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1981] = 2,
    ACTIONS(276), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(278), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [1997] = 2,
    ACTIONS(280), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(282), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2013] = 2,
    ACTIONS(284), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(286), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2029] = 2,
    ACTIONS(288), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(290), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2045] = 2,
    ACTIONS(292), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(294), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2061] = 2,
    ACTIONS(296), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(298), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2077] = 2,
    ACTIONS(300), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(302), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2093] = 2,
    ACTIONS(304), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(306), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2109] = 2,
    ACTIONS(308), 5,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      aux_sym_comment_token1,
    ACTIONS(310), 6,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_import,
      anon_sym_mod,
      anon_sym_set,
      sym_NAME,
  [2125] = 2,
    ACTIONS(312), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(202), 7,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_RPAREN,
  [2139] = 5,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_boolean,
      sym_string,
  [2159] = 6,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    ACTIONS(324), 1,
      sym_NAME,
    STATE(173), 1,
      sym_variadic_parameters,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(97), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2180] = 6,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_setting_repeat1,
    STATE(166), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2201] = 6,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_setting_repeat1,
    STATE(208), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2222] = 6,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_setting_repeat1,
    STATE(197), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2243] = 6,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_setting_repeat1,
    STATE(226), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2264] = 5,
    ACTIONS(270), 1,
      sym_notcomment,
    ACTIONS(336), 1,
      aux_sym_comment_token1,
    STATE(176), 1,
      sym_shebang_body,
    STATE(96), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(145), 2,
      sym_recipeline,
      sym_comment,
  [2282] = 6,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_,
    ACTIONS(342), 1,
      sym_NAME,
    ACTIONS(344), 1,
      sym_NEWLINE,
    STATE(167), 1,
      sym_dependencies,
    STATE(114), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2302] = 4,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_setting_repeat1,
    ACTIONS(351), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(349), 3,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2318] = 6,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym_NAME,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      sym_NEWLINE,
    STATE(175), 1,
      sym_dependencies,
    STATE(114), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2338] = 5,
    ACTIONS(357), 1,
      sym_notcomment,
    ACTIONS(360), 1,
      aux_sym_comment_token1,
    ACTIONS(363), 1,
      sym_DEDENT,
    STATE(95), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(145), 2,
      sym_recipeline,
      sym_comment,
  [2356] = 5,
    ACTIONS(270), 1,
      sym_notcomment,
    ACTIONS(336), 1,
      aux_sym_comment_token1,
    ACTIONS(365), 1,
      sym_DEDENT,
    STATE(95), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(145), 2,
      sym_recipeline,
      sym_comment,
  [2374] = 4,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(372), 1,
      sym_NAME,
    STATE(97), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
    ACTIONS(367), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [2390] = 6,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    ACTIONS(324), 1,
      sym_NAME,
    ACTIONS(375), 1,
      anon_sym_COLON_EQ,
    ACTIONS(377), 1,
      anon_sym_COLON,
    STATE(188), 1,
      sym_parameters,
    STATE(86), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2410] = 6,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym_NAME,
    ACTIONS(379), 1,
      anon_sym_,
    ACTIONS(381), 1,
      sym_NEWLINE,
    STATE(171), 1,
      sym_dependencies,
    STATE(114), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2430] = 5,
    ACTIONS(270), 1,
      sym_notcomment,
    ACTIONS(336), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      sym_DEDENT,
    STATE(95), 2,
      sym_line,
      aux_sym_shebang_body_repeat1,
    STATE(145), 2,
      sym_recipeline,
      sym_comment,
  [2448] = 5,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    ACTIONS(324), 1,
      sym_NAME,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(188), 1,
      sym_parameters,
    STATE(86), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2465] = 5,
    ACTIONS(344), 1,
      sym_NEWLINE,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_NAME,
    STATE(167), 1,
      sym_dependencies,
    STATE(114), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2482] = 4,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2497] = 5,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    ACTIONS(324), 1,
      sym_NAME,
    ACTIONS(393), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_parameters,
    STATE(86), 2,
      sym_parameter,
      aux_sym_parameters_repeat1,
  [2514] = 4,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2529] = 2,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(397), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2540] = 5,
    ACTIONS(381), 1,
      sym_NEWLINE,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_NAME,
    STATE(171), 1,
      sym_dependencies,
    STATE(114), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2557] = 2,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(401), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2568] = 4,
    ACTIONS(405), 1,
      anon_sym_QMARK,
    STATE(71), 1,
      sym_string,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2583] = 5,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_NAME,
    ACTIONS(407), 1,
      sym_NEWLINE,
    STATE(189), 1,
      sym_dependencies,
    STATE(114), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2600] = 2,
    ACTIONS(411), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(409), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2611] = 4,
    ACTIONS(413), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(416), 1,
      sym_TEXT,
    ACTIONS(419), 1,
      sym_NEWLINE,
    STATE(112), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2625] = 1,
    ACTIONS(421), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2633] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_NAME,
    ACTIONS(423), 1,
      sym_NEWLINE,
    STATE(115), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2647] = 4,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      sym_NAME,
    ACTIONS(431), 1,
      sym_NEWLINE,
    STATE(115), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [2661] = 1,
    ACTIONS(433), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2669] = 5,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      anon_sym_COLON_EQ,
    STATE(62), 1,
      sym_comment,
    STATE(64), 1,
      sym_eol,
  [2685] = 4,
    ACTIONS(437), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(439), 1,
      sym_TEXT,
    ACTIONS(441), 1,
      sym_NEWLINE,
    STATE(112), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2699] = 2,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2709] = 4,
    ACTIONS(437), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(445), 1,
      sym_TEXT,
    ACTIONS(447), 1,
      sym_NEWLINE,
    STATE(118), 2,
      sym_interpolation,
      aux_sym_recipeline_repeat1,
  [2723] = 3,
    STATE(111), 1,
      sym_string,
    ACTIONS(134), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(136), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2735] = 3,
    STATE(56), 1,
      sym_string,
    ACTIONS(120), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(122), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2747] = 1,
    ACTIONS(170), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2754] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(80), 1,
      sym_eol,
  [2767] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(70), 1,
      sym_eol,
  [2780] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(79), 1,
      sym_eol,
  [2793] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(69), 1,
      sym_eol,
  [2806] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(81), 1,
      sym_eol,
  [2819] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(82), 1,
      sym_eol,
  [2832] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(66), 1,
      sym_eol,
  [2845] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(83), 1,
      sym_eol,
  [2858] = 1,
    ACTIONS(164), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2865] = 1,
    ACTIONS(182), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2872] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(68), 1,
      sym_eol,
  [2885] = 2,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 3,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_RBRACE_RBRACE,
  [2894] = 2,
    ACTIONS(202), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
    ACTIONS(451), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2903] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(77), 1,
      sym_eol,
  [2916] = 4,
    ACTIONS(453), 1,
      aux_sym_comment_token1,
    ACTIONS(455), 1,
      sym_NEWLINE,
    STATE(162), 1,
      sym_comment,
    STATE(163), 1,
      sym_eol,
  [2929] = 1,
    ACTIONS(186), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2936] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    STATE(65), 1,
      sym_eol,
  [2949] = 1,
    ACTIONS(190), 4,
      sym_NEWLINE,
      anon_sym_PLUS,
      anon_sym_SLASH,
      aux_sym_comment_token1,
  [2956] = 4,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_eol,
    STATE(62), 1,
      sym_comment,
  [2969] = 1,
    ACTIONS(457), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2975] = 1,
    ACTIONS(459), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2981] = 1,
    ACTIONS(461), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [2987] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(463), 2,
      anon_sym_PLUS,
      anon_sym_SLASH,
  [2995] = 3,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      sym_NAME,
    STATE(187), 1,
      sym_recipe_header,
  [3005] = 1,
    ACTIONS(288), 3,
      sym_DEDENT,
      sym_notcomment,
      aux_sym_comment_token1,
  [3011] = 3,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    ACTIONS(324), 1,
      sym_NAME,
    STATE(179), 1,
      sym_parameter,
  [3021] = 1,
    ACTIONS(467), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [3027] = 1,
    ACTIONS(469), 3,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
  [3033] = 1,
    ACTIONS(471), 3,
      sym_NEWLINE,
      anon_sym_LPAREN,
      sym_NAME,
  [3039] = 2,
    ACTIONS(475), 1,
      sym_NEWLINE,
    ACTIONS(473), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [3047] = 2,
    ACTIONS(477), 1,
      anon_sym_shell,
    ACTIONS(479), 1,
      sym_NAME,
  [3054] = 1,
    ACTIONS(481), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [3059] = 1,
    ACTIONS(288), 2,
      anon_sym_AT,
      sym_NAME,
  [3064] = 1,
    ACTIONS(212), 2,
      sym_notcomment,
      aux_sym_comment_token1,
  [3069] = 2,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [3076] = 1,
    ACTIONS(108), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [3081] = 1,
    ACTIONS(112), 2,
      sym_NEWLINE,
      aux_sym_comment_token1,
  [3086] = 2,
    ACTIONS(487), 1,
      anon_sym_QMARK,
    ACTIONS(489), 1,
      sym_NAME,
  [3093] = 1,
    ACTIONS(228), 2,
      anon_sym_AT,
      sym_NAME,
  [3098] = 1,
    ACTIONS(491), 2,
      anon_sym_AT,
      sym_NAME,
  [3103] = 2,
    ACTIONS(493), 1,
      sym_NAME,
    STATE(59), 1,
      sym_assignment,
  [3110] = 2,
    ACTIONS(495), 1,
      sym_NAME,
    STATE(178), 1,
      sym_depcall,
  [3117] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
  [3121] = 1,
    ACTIONS(407), 1,
      sym_NEWLINE,
  [3125] = 1,
    ACTIONS(499), 1,
      anon_sym_else,
  [3129] = 1,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
  [3133] = 1,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
  [3137] = 1,
    ACTIONS(344), 1,
      sym_NEWLINE,
  [3141] = 1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
  [3145] = 1,
    ACTIONS(507), 1,
      anon_sym_COLON,
  [3149] = 1,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [3153] = 1,
    ACTIONS(381), 1,
      sym_NEWLINE,
  [3157] = 1,
    ACTIONS(511), 1,
      sym_DEDENT,
  [3161] = 1,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3165] = 1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3169] = 1,
    ACTIONS(517), 1,
      anon_sym_COLON,
  [3173] = 1,
    ACTIONS(519), 1,
      sym_DEDENT,
  [3177] = 1,
    ACTIONS(521), 1,
      anon_sym_RBRACE_RBRACE,
  [3181] = 1,
    ACTIONS(523), 1,
      anon_sym_COLON,
  [3185] = 1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
  [3189] = 1,
    ACTIONS(527), 1,
      anon_sym_LBRACK,
  [3193] = 1,
    ACTIONS(529), 1,
      sym_NAME,
  [3197] = 1,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
  [3201] = 1,
    ACTIONS(533), 1,
      sym_NEWLINE,
  [3205] = 1,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [3209] = 1,
    ACTIONS(535), 1,
      sym_NEWLINE,
  [3213] = 1,
    ACTIONS(537), 1,
      sym_NAME,
  [3217] = 1,
    ACTIONS(539), 1,
      sym_NEWLINE,
  [3221] = 1,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
  [3225] = 1,
    ACTIONS(543), 1,
      anon_sym_COLON_EQ,
  [3229] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE_RBRACE,
  [3233] = 1,
    ACTIONS(545), 1,
      sym_NAME,
  [3237] = 1,
    ACTIONS(108), 1,
      anon_sym_RBRACE_RBRACE,
  [3241] = 1,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
  [3245] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON_EQ,
  [3249] = 1,
    ACTIONS(549), 1,
      sym_NEWLINE,
  [3253] = 1,
    ACTIONS(551), 1,
      sym_NEWLINE,
  [3257] = 1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [3261] = 1,
    ACTIONS(555), 1,
      anon_sym_COLON_EQ,
  [3265] = 1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3269] = 1,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
  [3273] = 1,
    ACTIONS(561), 1,
      sym_NEWLINE,
  [3277] = 1,
    ACTIONS(563), 1,
      sym_NEWLINE,
  [3281] = 1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [3285] = 1,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
  [3289] = 1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [3293] = 1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
  [3297] = 1,
    ACTIONS(573), 1,
      aux_sym_shebang_token1,
  [3301] = 1,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
  [3305] = 1,
    ACTIONS(577), 1,
      sym_NEWLINE,
  [3309] = 1,
    ACTIONS(579), 1,
      aux_sym_shebang_token1,
  [3313] = 1,
    ACTIONS(581), 1,
      sym_NAME,
  [3317] = 1,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
  [3321] = 1,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
  [3325] = 1,
    ACTIONS(587), 1,
      anon_sym_else,
  [3329] = 1,
    ACTIONS(589), 1,
      anon_sym_else,
  [3333] = 1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
  [3337] = 1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [3341] = 1,
    ACTIONS(595), 1,
      sym_NAME,
  [3345] = 1,
    ACTIONS(597), 1,
      sym_NAME,
  [3349] = 1,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
  [3353] = 1,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
  [3357] = 1,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
  [3361] = 1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 251,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 329,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 371,
  [SMALL_STATE(12)] = 398,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 548,
  [SMALL_STATE(17)] = 587,
  [SMALL_STATE(18)] = 628,
  [SMALL_STATE(19)] = 666,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 777,
  [SMALL_STATE(23)] = 812,
  [SMALL_STATE(24)] = 847,
  [SMALL_STATE(25)] = 882,
  [SMALL_STATE(26)] = 917,
  [SMALL_STATE(27)] = 952,
  [SMALL_STATE(28)] = 987,
  [SMALL_STATE(29)] = 1006,
  [SMALL_STATE(30)] = 1041,
  [SMALL_STATE(31)] = 1076,
  [SMALL_STATE(32)] = 1111,
  [SMALL_STATE(33)] = 1146,
  [SMALL_STATE(34)] = 1181,
  [SMALL_STATE(35)] = 1216,
  [SMALL_STATE(36)] = 1251,
  [SMALL_STATE(37)] = 1286,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1339,
  [SMALL_STATE(40)] = 1355,
  [SMALL_STATE(41)] = 1373,
  [SMALL_STATE(42)] = 1395,
  [SMALL_STATE(43)] = 1413,
  [SMALL_STATE(44)] = 1431,
  [SMALL_STATE(45)] = 1449,
  [SMALL_STATE(46)] = 1467,
  [SMALL_STATE(47)] = 1489,
  [SMALL_STATE(48)] = 1507,
  [SMALL_STATE(49)] = 1523,
  [SMALL_STATE(50)] = 1539,
  [SMALL_STATE(51)] = 1555,
  [SMALL_STATE(52)] = 1571,
  [SMALL_STATE(53)] = 1588,
  [SMALL_STATE(54)] = 1617,
  [SMALL_STATE(55)] = 1636,
  [SMALL_STATE(56)] = 1665,
  [SMALL_STATE(57)] = 1681,
  [SMALL_STATE(58)] = 1697,
  [SMALL_STATE(59)] = 1713,
  [SMALL_STATE(60)] = 1729,
  [SMALL_STATE(61)] = 1745,
  [SMALL_STATE(62)] = 1761,
  [SMALL_STATE(63)] = 1777,
  [SMALL_STATE(64)] = 1793,
  [SMALL_STATE(65)] = 1809,
  [SMALL_STATE(66)] = 1825,
  [SMALL_STATE(67)] = 1841,
  [SMALL_STATE(68)] = 1857,
  [SMALL_STATE(69)] = 1873,
  [SMALL_STATE(70)] = 1889,
  [SMALL_STATE(71)] = 1905,
  [SMALL_STATE(72)] = 1921,
  [SMALL_STATE(73)] = 1937,
  [SMALL_STATE(74)] = 1965,
  [SMALL_STATE(75)] = 1981,
  [SMALL_STATE(76)] = 1997,
  [SMALL_STATE(77)] = 2013,
  [SMALL_STATE(78)] = 2029,
  [SMALL_STATE(79)] = 2045,
  [SMALL_STATE(80)] = 2061,
  [SMALL_STATE(81)] = 2077,
  [SMALL_STATE(82)] = 2093,
  [SMALL_STATE(83)] = 2109,
  [SMALL_STATE(84)] = 2125,
  [SMALL_STATE(85)] = 2139,
  [SMALL_STATE(86)] = 2159,
  [SMALL_STATE(87)] = 2180,
  [SMALL_STATE(88)] = 2201,
  [SMALL_STATE(89)] = 2222,
  [SMALL_STATE(90)] = 2243,
  [SMALL_STATE(91)] = 2264,
  [SMALL_STATE(92)] = 2282,
  [SMALL_STATE(93)] = 2302,
  [SMALL_STATE(94)] = 2318,
  [SMALL_STATE(95)] = 2338,
  [SMALL_STATE(96)] = 2356,
  [SMALL_STATE(97)] = 2374,
  [SMALL_STATE(98)] = 2390,
  [SMALL_STATE(99)] = 2410,
  [SMALL_STATE(100)] = 2430,
  [SMALL_STATE(101)] = 2448,
  [SMALL_STATE(102)] = 2465,
  [SMALL_STATE(103)] = 2482,
  [SMALL_STATE(104)] = 2497,
  [SMALL_STATE(105)] = 2514,
  [SMALL_STATE(106)] = 2529,
  [SMALL_STATE(107)] = 2540,
  [SMALL_STATE(108)] = 2557,
  [SMALL_STATE(109)] = 2568,
  [SMALL_STATE(110)] = 2583,
  [SMALL_STATE(111)] = 2600,
  [SMALL_STATE(112)] = 2611,
  [SMALL_STATE(113)] = 2625,
  [SMALL_STATE(114)] = 2633,
  [SMALL_STATE(115)] = 2647,
  [SMALL_STATE(116)] = 2661,
  [SMALL_STATE(117)] = 2669,
  [SMALL_STATE(118)] = 2685,
  [SMALL_STATE(119)] = 2699,
  [SMALL_STATE(120)] = 2709,
  [SMALL_STATE(121)] = 2723,
  [SMALL_STATE(122)] = 2735,
  [SMALL_STATE(123)] = 2747,
  [SMALL_STATE(124)] = 2754,
  [SMALL_STATE(125)] = 2767,
  [SMALL_STATE(126)] = 2780,
  [SMALL_STATE(127)] = 2793,
  [SMALL_STATE(128)] = 2806,
  [SMALL_STATE(129)] = 2819,
  [SMALL_STATE(130)] = 2832,
  [SMALL_STATE(131)] = 2845,
  [SMALL_STATE(132)] = 2858,
  [SMALL_STATE(133)] = 2865,
  [SMALL_STATE(134)] = 2872,
  [SMALL_STATE(135)] = 2885,
  [SMALL_STATE(136)] = 2894,
  [SMALL_STATE(137)] = 2903,
  [SMALL_STATE(138)] = 2916,
  [SMALL_STATE(139)] = 2929,
  [SMALL_STATE(140)] = 2936,
  [SMALL_STATE(141)] = 2949,
  [SMALL_STATE(142)] = 2956,
  [SMALL_STATE(143)] = 2969,
  [SMALL_STATE(144)] = 2975,
  [SMALL_STATE(145)] = 2981,
  [SMALL_STATE(146)] = 2987,
  [SMALL_STATE(147)] = 2995,
  [SMALL_STATE(148)] = 3005,
  [SMALL_STATE(149)] = 3011,
  [SMALL_STATE(150)] = 3021,
  [SMALL_STATE(151)] = 3027,
  [SMALL_STATE(152)] = 3033,
  [SMALL_STATE(153)] = 3039,
  [SMALL_STATE(154)] = 3047,
  [SMALL_STATE(155)] = 3054,
  [SMALL_STATE(156)] = 3059,
  [SMALL_STATE(157)] = 3064,
  [SMALL_STATE(158)] = 3069,
  [SMALL_STATE(159)] = 3076,
  [SMALL_STATE(160)] = 3081,
  [SMALL_STATE(161)] = 3086,
  [SMALL_STATE(162)] = 3093,
  [SMALL_STATE(163)] = 3098,
  [SMALL_STATE(164)] = 3103,
  [SMALL_STATE(165)] = 3110,
  [SMALL_STATE(166)] = 3117,
  [SMALL_STATE(167)] = 3121,
  [SMALL_STATE(168)] = 3125,
  [SMALL_STATE(169)] = 3129,
  [SMALL_STATE(170)] = 3133,
  [SMALL_STATE(171)] = 3137,
  [SMALL_STATE(172)] = 3141,
  [SMALL_STATE(173)] = 3145,
  [SMALL_STATE(174)] = 3149,
  [SMALL_STATE(175)] = 3153,
  [SMALL_STATE(176)] = 3157,
  [SMALL_STATE(177)] = 3161,
  [SMALL_STATE(178)] = 3165,
  [SMALL_STATE(179)] = 3169,
  [SMALL_STATE(180)] = 3173,
  [SMALL_STATE(181)] = 3177,
  [SMALL_STATE(182)] = 3181,
  [SMALL_STATE(183)] = 3185,
  [SMALL_STATE(184)] = 3189,
  [SMALL_STATE(185)] = 3193,
  [SMALL_STATE(186)] = 3197,
  [SMALL_STATE(187)] = 3201,
  [SMALL_STATE(188)] = 3205,
  [SMALL_STATE(189)] = 3209,
  [SMALL_STATE(190)] = 3213,
  [SMALL_STATE(191)] = 3217,
  [SMALL_STATE(192)] = 3221,
  [SMALL_STATE(193)] = 3225,
  [SMALL_STATE(194)] = 3229,
  [SMALL_STATE(195)] = 3233,
  [SMALL_STATE(196)] = 3237,
  [SMALL_STATE(197)] = 3241,
  [SMALL_STATE(198)] = 3245,
  [SMALL_STATE(199)] = 3249,
  [SMALL_STATE(200)] = 3253,
  [SMALL_STATE(201)] = 3257,
  [SMALL_STATE(202)] = 3261,
  [SMALL_STATE(203)] = 3265,
  [SMALL_STATE(204)] = 3269,
  [SMALL_STATE(205)] = 3273,
  [SMALL_STATE(206)] = 3277,
  [SMALL_STATE(207)] = 3281,
  [SMALL_STATE(208)] = 3285,
  [SMALL_STATE(209)] = 3289,
  [SMALL_STATE(210)] = 3293,
  [SMALL_STATE(211)] = 3297,
  [SMALL_STATE(212)] = 3301,
  [SMALL_STATE(213)] = 3305,
  [SMALL_STATE(214)] = 3309,
  [SMALL_STATE(215)] = 3313,
  [SMALL_STATE(216)] = 3317,
  [SMALL_STATE(217)] = 3321,
  [SMALL_STATE(218)] = 3325,
  [SMALL_STATE(219)] = 3329,
  [SMALL_STATE(220)] = 3333,
  [SMALL_STATE(221)] = 3337,
  [SMALL_STATE(222)] = 3341,
  [SMALL_STATE(223)] = 3345,
  [SMALL_STATE(224)] = 3349,
  [SMALL_STATE(225)] = 3353,
  [SMALL_STATE(226)] = 3357,
  [SMALL_STATE(227)] = 3361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(20),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(43),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(43),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(52),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(45),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depcall_repeat1, 2), SHIFT_REPEAT(45),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9, .production_id = 16),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9, .production_id = 16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depcall, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, .production_id = 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, .production_id = 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 6, .production_id = 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 6, .production_id = 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, .production_id = 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, .production_id = 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7, .production_id = 9),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7, .production_id = 9),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 5, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 5, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 15),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 15),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9, .production_id = 14),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 13),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 12),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 12),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 11),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 11),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8, .production_id = 10),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8, .production_id = 10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 4),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8), SHIFT_REPEAT(121),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 8),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(120),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2), SHIFT_REPEAT(206),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shebang_body_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_body, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(190),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(108),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_body, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2, .production_id = 6),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(34),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipeline_repeat1, 2), SHIFT_REPEAT(112),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipeline_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(165),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2), SHIFT_REPEAT(152),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipeline, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang_recipe, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_header, 6),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [575] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
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
