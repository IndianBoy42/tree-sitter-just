#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 4
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
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(106);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(176);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == '`') ADVANCE(114);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '`') ADVANCE(113);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 71:
      if (lookahead == '}') ADVANCE(112);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_shell);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_BACKTICK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_BACKTICK);
      if (lookahead == '`') ADVANCE(21);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_INDENTED_BACKTICK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_NAME);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_RAW_STRING);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_INDENTED_RAW_STRING);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72, .external_lex_state = 2},
  [2] = {.lex_state = 72, .external_lex_state = 2},
  [3] = {.lex_state = 72, .external_lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 72, .external_lex_state = 3},
  [14] = {.lex_state = 72, .external_lex_state = 3},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 72, .external_lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 72, .external_lex_state = 3},
  [19] = {.lex_state = 72, .external_lex_state = 3},
  [20] = {.lex_state = 72, .external_lex_state = 3},
  [21] = {.lex_state = 72, .external_lex_state = 3},
  [22] = {.lex_state = 72, .external_lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 72, .external_lex_state = 3},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 72, .external_lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 72, .external_lex_state = 3},
  [56] = {.lex_state = 72, .external_lex_state = 3},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 72, .external_lex_state = 2},
  [60] = {.lex_state = 72, .external_lex_state = 2},
  [61] = {.lex_state = 72, .external_lex_state = 2},
  [62] = {.lex_state = 72, .external_lex_state = 2},
  [63] = {.lex_state = 72, .external_lex_state = 2},
  [64] = {.lex_state = 72, .external_lex_state = 2},
  [65] = {.lex_state = 72, .external_lex_state = 2},
  [66] = {.lex_state = 72, .external_lex_state = 2},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 72, .external_lex_state = 2},
  [69] = {.lex_state = 72, .external_lex_state = 2},
  [70] = {.lex_state = 72, .external_lex_state = 2},
  [71] = {.lex_state = 72, .external_lex_state = 2},
  [72] = {.lex_state = 72, .external_lex_state = 2},
  [73] = {.lex_state = 72, .external_lex_state = 2},
  [74] = {.lex_state = 72, .external_lex_state = 2},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 72, .external_lex_state = 2},
  [77] = {.lex_state = 72, .external_lex_state = 2},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 70, .external_lex_state = 2},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 70, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 70},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 70, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 70, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 72},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 72},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 72},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 28},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 72},
  [155] = {.lex_state = 72},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 72},
  [163] = {.lex_state = 72},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 72},
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

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_LINE] = true,
  },
  [5] = {
    [ts_external_token_NEWLINE] = true,
    [ts_external_token_LINE] = true,
  },
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
    [sym_source_file] = STATE(160),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(60),
    [sym_alias] = STATE(60),
    [sym_assignment] = STATE(60),
    [sym_export] = STATE(60),
    [sym_setting] = STATE(60),
    [sym_recipe] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_alias] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_COMMENT] = ACTIONS(13),
    [sym_NAME] = ACTIONS(15),
    [sym_NEWLINE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
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
      sym_COMMENT,
    ACTIONS(36), 1,
      sym_NAME,
    ACTIONS(39), 1,
      sym_NEWLINE,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(60), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [37] = 10,
    ACTIONS(5), 1,
      anon_sym_alias,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(15), 1,
      sym_NAME,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(60), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [74] = 2,
    ACTIONS(46), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(44), 10,
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
  [94] = 2,
    ACTIONS(50), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(48), 10,
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
  [114] = 11,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      sym_BACKTICK,
    ACTIONS(63), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(66), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(49), 1,
      sym_value,
    ACTIONS(69), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(72), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(6), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [151] = 12,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(148), 1,
      sym_sequence,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [190] = 12,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(125), 1,
      sym_sequence,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [229] = 12,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(143), 1,
      sym_sequence,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [268] = 11,
    ACTIONS(75), 1,
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
    STATE(11), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [305] = 11,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(103), 1,
      sym_NAME,
    ACTIONS(109), 1,
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
    STATE(6), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [342] = 12,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(137), 1,
      sym_sequence,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [381] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(73), 1,
      sym_body,
    STATE(18), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(113), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(115), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [407] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(72), 1,
      sym_body,
    STATE(46), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(121), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(123), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [433] = 11,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(119), 1,
      sym_expression,
    STATE(163), 1,
      sym_condition,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [469] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(61), 1,
      sym_body,
    STATE(46), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(125), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(127), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [495] = 11,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(119), 1,
      sym_expression,
    STATE(128), 1,
      sym_condition,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [531] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(66), 1,
      sym_body,
    STATE(46), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(129), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(131), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [557] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(61), 1,
      sym_body,
    STATE(20), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(125), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(127), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [583] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(73), 1,
      sym_body,
    STATE(46), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(113), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(115), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [609] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(70), 1,
      sym_body,
    STATE(16), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(133), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(135), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [635] = 6,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_INDENT,
    STATE(66), 1,
      sym_body,
    STATE(14), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(129), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(131), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [661] = 11,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(119), 1,
      sym_expression,
    STATE(162), 1,
      sym_condition,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [697] = 10,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(118), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [730] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(141), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [763] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(150), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [796] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(165), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [829] = 10,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      sym_BACKTICK,
    ACTIONS(147), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(149), 1,
      sym_NAME,
    STATE(97), 1,
      sym_value,
    STATE(113), 1,
      sym_string,
    STATE(116), 1,
      sym_expression,
    ACTIONS(151), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(153), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [862] = 2,
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
  [879] = 2,
    ACTIONS(159), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(161), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [896] = 10,
    ACTIONS(75), 1,
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
  [929] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(159), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [962] = 2,
    ACTIONS(163), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(165), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [979] = 10,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      sym_BACKTICK,
    ACTIONS(147), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(149), 1,
      sym_NAME,
    STATE(97), 1,
      sym_value,
    STATE(99), 1,
      sym_expression,
    STATE(113), 1,
      sym_string,
    ACTIONS(151), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(153), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1012] = 10,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_BACKTICK,
    ACTIONS(101), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(137), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(118), 1,
      sym_value,
    STATE(132), 1,
      sym_expression,
    ACTIONS(105), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(107), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1045] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1078] = 2,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 11,
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
  [1095] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(146), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1128] = 2,
    ACTIONS(171), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(167), 7,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1145] = 1,
    ACTIONS(165), 12,
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
  [1160] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(5), 1,
      sym_expression,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1193] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1226] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(149), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1259] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(144), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1292] = 10,
    ACTIONS(75), 1,
      anon_sym_if,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(85), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(78), 1,
      sym_value,
    STATE(126), 1,
      sym_expression,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1325] = 5,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_NAME,
    STATE(46), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(175), 3,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
    ACTIONS(173), 5,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
  [1348] = 1,
    ACTIONS(161), 11,
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
  [1362] = 1,
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
  [1376] = 3,
    ACTIONS(185), 1,
      anon_sym_PLUS,
    ACTIONS(183), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(187), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1394] = 2,
    ACTIONS(171), 5,
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
  [1410] = 1,
    ACTIONS(167), 11,
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
  [1424] = 2,
    ACTIONS(191), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(189), 6,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
  [1439] = 8,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(193), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(90), 1,
      sym_value,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1466] = 8,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_BACKTICK,
    ACTIONS(83), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(193), 1,
      sym_NAME,
    STATE(51), 1,
      sym_string,
    STATE(87), 1,
      sym_value,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1493] = 2,
    ACTIONS(197), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(195), 6,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
  [1508] = 2,
    ACTIONS(201), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(199), 6,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
  [1523] = 7,
    ACTIONS(203), 1,
      anon_sym_COLON_EQ,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      sym_NAME,
    STATE(145), 1,
      sym_variadic_parameters,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(58), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1547] = 6,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      sym_NAME,
    ACTIONS(213), 1,
      anon_sym_COLON,
    STATE(134), 1,
      sym_variadic_parameters,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(79), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1568] = 2,
    ACTIONS(215), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(217), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1581] = 2,
    ACTIONS(219), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(221), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1594] = 2,
    ACTIONS(113), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(115), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1607] = 2,
    ACTIONS(223), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(225), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1620] = 2,
    ACTIONS(227), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(229), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1633] = 2,
    ACTIONS(231), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(233), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1646] = 2,
    ACTIONS(235), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(237), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1659] = 2,
    ACTIONS(121), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(123), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1672] = 6,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      sym_NAME,
    ACTIONS(213), 1,
      anon_sym_COLON,
    STATE(134), 1,
      sym_variadic_parameters,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(75), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1693] = 2,
    ACTIONS(239), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(241), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1706] = 2,
    ACTIONS(243), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(245), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1719] = 2,
    ACTIONS(125), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(127), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1732] = 2,
    ACTIONS(247), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(249), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1745] = 2,
    ACTIONS(251), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(253), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1758] = 2,
    ACTIONS(129), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(131), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1771] = 2,
    ACTIONS(255), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(257), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1784] = 6,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      sym_NAME,
    ACTIONS(259), 1,
      anon_sym_COLON,
    STATE(129), 1,
      sym_variadic_parameters,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(79), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1805] = 2,
    ACTIONS(261), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(263), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1818] = 2,
    ACTIONS(265), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(267), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1831] = 2,
    ACTIONS(269), 1,
      anon_sym_PLUS,
    ACTIONS(187), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [1843] = 4,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      sym_NAME,
    STATE(79), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
    ACTIONS(271), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [1859] = 2,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(279), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1870] = 4,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_string,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1885] = 4,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      sym_TEXT,
    ACTIONS(289), 1,
      sym_NEWLINE,
    STATE(85), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1900] = 2,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(291), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1911] = 4,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_string,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1926] = 4,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(300), 1,
      sym_TEXT,
    ACTIONS(303), 1,
      sym_NEWLINE,
    STATE(85), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1941] = 3,
    STATE(121), 1,
      sym_string,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1953] = 1,
    ACTIONS(305), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1961] = 4,
    ACTIONS(307), 1,
      sym_DEDENT,
    ACTIONS(309), 1,
      sym_NEWLINE,
    ACTIONS(312), 1,
      sym_LINE,
    STATE(88), 2,
      sym_line,
      aux_sym_body_repeat1,
  [1975] = 4,
    ACTIONS(315), 1,
      sym_DEDENT,
    ACTIONS(317), 1,
      sym_NEWLINE,
    ACTIONS(319), 1,
      sym_LINE,
    STATE(88), 2,
      sym_line,
      aux_sym_body_repeat1,
  [1989] = 1,
    ACTIONS(321), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [1997] = 3,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      sym_TEXT,
    STATE(82), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [2009] = 5,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NEWLINE,
    ACTIONS(323), 1,
      anon_sym_COLON_EQ,
    STATE(76), 1,
      sym_eol,
    STATE(98), 1,
      sym_boolean,
  [2025] = 3,
    STATE(105), 1,
      sym_string,
    ACTIONS(87), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(89), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2037] = 2,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2046] = 3,
    ACTIONS(317), 1,
      sym_NEWLINE,
    ACTIONS(319), 1,
      sym_LINE,
    STATE(89), 2,
      sym_line,
      aux_sym_body_repeat1,
  [2057] = 2,
    ACTIONS(329), 1,
      anon_sym_shell,
    ACTIONS(327), 3,
      anon_sym_export,
      anon_sym_dotenv_DASHload,
      anon_sym_positional_DASHarguments,
  [2066] = 2,
    ACTIONS(331), 1,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2074] = 3,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(65), 1,
      sym_eol,
  [2084] = 3,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(63), 1,
      sym_eol,
  [2094] = 1,
    ACTIONS(333), 3,
      sym_DEDENT,
      sym_NEWLINE,
      sym_LINE,
  [2100] = 3,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_setting_repeat1,
  [2110] = 3,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      sym_NAME,
    STATE(131), 1,
      sym_parameter,
  [2120] = 1,
    ACTIONS(337), 3,
      sym_DEDENT,
      sym_NEWLINE,
      sym_LINE,
  [2126] = 3,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(74), 1,
      sym_eol,
  [2136] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_setting_repeat1,
  [2146] = 3,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(59), 1,
      sym_eol,
  [2156] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 2,
      anon_sym_PLUS,
      anon_sym_RBRACE_RBRACE,
  [2164] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_setting_repeat1,
  [2174] = 2,
    ACTIONS(352), 1,
      sym_NEWLINE,
    ACTIONS(350), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2182] = 1,
    ACTIONS(165), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2188] = 1,
    ACTIONS(161), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2194] = 2,
    ACTIONS(356), 1,
      sym_NEWLINE,
    ACTIONS(354), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2202] = 1,
    ACTIONS(167), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2208] = 3,
    ACTIONS(13), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NEWLINE,
    STATE(77), 1,
      sym_eol,
  [2218] = 1,
    ACTIONS(157), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2224] = 1,
    ACTIONS(48), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2229] = 2,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [2236] = 2,
    ACTIONS(187), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(362), 1,
      anon_sym_PLUS,
  [2243] = 1,
    ACTIONS(364), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2248] = 1,
    ACTIONS(44), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2253] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2258] = 1,
    ACTIONS(366), 2,
      anon_sym_true,
      anon_sym_false,
  [2263] = 1,
    ACTIONS(368), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2268] = 2,
    ACTIONS(370), 1,
      sym_NAME,
    STATE(64), 1,
      sym_assignment,
  [2275] = 1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [2279] = 1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [2283] = 1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
  [2287] = 1,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
  [2291] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [2295] = 1,
    ACTIONS(378), 1,
      sym_NAME,
  [2299] = 1,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [2303] = 1,
    ACTIONS(382), 1,
      anon_sym_RBRACE_RBRACE,
  [2307] = 1,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
  [2311] = 1,
    ACTIONS(259), 1,
      anon_sym_COLON,
  [2315] = 1,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
  [2319] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACE_RBRACE,
  [2323] = 1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [2327] = 1,
    ACTIONS(44), 1,
      anon_sym_RBRACE_RBRACE,
  [2331] = 1,
    ACTIONS(390), 1,
      anon_sym_else,
  [2335] = 1,
    ACTIONS(392), 1,
      sym_NAME,
  [2339] = 1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
  [2343] = 1,
    ACTIONS(394), 1,
      sym_NAME,
  [2347] = 1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [2351] = 1,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
  [2355] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [2359] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
  [2363] = 1,
    ACTIONS(402), 1,
      sym_NAME,
  [2367] = 1,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [2371] = 1,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [2375] = 1,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
  [2379] = 1,
    ACTIONS(410), 1,
      anon_sym_COLON_EQ,
  [2383] = 1,
    ACTIONS(203), 1,
      anon_sym_COLON_EQ,
  [2387] = 1,
    ACTIONS(412), 1,
      anon_sym_COLON_EQ,
  [2391] = 1,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [2395] = 1,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
  [2399] = 1,
    ACTIONS(418), 1,
      anon_sym_else,
  [2403] = 1,
    ACTIONS(420), 1,
      anon_sym_else,
  [2407] = 1,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
  [2411] = 1,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [2415] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [2419] = 1,
    ACTIONS(428), 1,
      sym_NEWLINE,
  [2423] = 1,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
  [2427] = 1,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
  [2431] = 1,
    ACTIONS(434), 1,
      sym_NAME,
  [2435] = 1,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 342,
  [SMALL_STATE(13)] = 381,
  [SMALL_STATE(14)] = 407,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 469,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 531,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 583,
  [SMALL_STATE(21)] = 609,
  [SMALL_STATE(22)] = 635,
  [SMALL_STATE(23)] = 661,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 730,
  [SMALL_STATE(26)] = 763,
  [SMALL_STATE(27)] = 796,
  [SMALL_STATE(28)] = 829,
  [SMALL_STATE(29)] = 862,
  [SMALL_STATE(30)] = 879,
  [SMALL_STATE(31)] = 896,
  [SMALL_STATE(32)] = 929,
  [SMALL_STATE(33)] = 962,
  [SMALL_STATE(34)] = 979,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1045,
  [SMALL_STATE(37)] = 1078,
  [SMALL_STATE(38)] = 1095,
  [SMALL_STATE(39)] = 1128,
  [SMALL_STATE(40)] = 1145,
  [SMALL_STATE(41)] = 1160,
  [SMALL_STATE(42)] = 1193,
  [SMALL_STATE(43)] = 1226,
  [SMALL_STATE(44)] = 1259,
  [SMALL_STATE(45)] = 1292,
  [SMALL_STATE(46)] = 1325,
  [SMALL_STATE(47)] = 1348,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1376,
  [SMALL_STATE(50)] = 1394,
  [SMALL_STATE(51)] = 1410,
  [SMALL_STATE(52)] = 1424,
  [SMALL_STATE(53)] = 1439,
  [SMALL_STATE(54)] = 1466,
  [SMALL_STATE(55)] = 1493,
  [SMALL_STATE(56)] = 1508,
  [SMALL_STATE(57)] = 1523,
  [SMALL_STATE(58)] = 1547,
  [SMALL_STATE(59)] = 1568,
  [SMALL_STATE(60)] = 1581,
  [SMALL_STATE(61)] = 1594,
  [SMALL_STATE(62)] = 1607,
  [SMALL_STATE(63)] = 1620,
  [SMALL_STATE(64)] = 1633,
  [SMALL_STATE(65)] = 1646,
  [SMALL_STATE(66)] = 1659,
  [SMALL_STATE(67)] = 1672,
  [SMALL_STATE(68)] = 1693,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1719,
  [SMALL_STATE(71)] = 1732,
  [SMALL_STATE(72)] = 1745,
  [SMALL_STATE(73)] = 1758,
  [SMALL_STATE(74)] = 1771,
  [SMALL_STATE(75)] = 1784,
  [SMALL_STATE(76)] = 1805,
  [SMALL_STATE(77)] = 1818,
  [SMALL_STATE(78)] = 1831,
  [SMALL_STATE(79)] = 1843,
  [SMALL_STATE(80)] = 1859,
  [SMALL_STATE(81)] = 1870,
  [SMALL_STATE(82)] = 1885,
  [SMALL_STATE(83)] = 1900,
  [SMALL_STATE(84)] = 1911,
  [SMALL_STATE(85)] = 1926,
  [SMALL_STATE(86)] = 1941,
  [SMALL_STATE(87)] = 1953,
  [SMALL_STATE(88)] = 1961,
  [SMALL_STATE(89)] = 1975,
  [SMALL_STATE(90)] = 1989,
  [SMALL_STATE(91)] = 1997,
  [SMALL_STATE(92)] = 2009,
  [SMALL_STATE(93)] = 2025,
  [SMALL_STATE(94)] = 2037,
  [SMALL_STATE(95)] = 2046,
  [SMALL_STATE(96)] = 2057,
  [SMALL_STATE(97)] = 2066,
  [SMALL_STATE(98)] = 2074,
  [SMALL_STATE(99)] = 2084,
  [SMALL_STATE(100)] = 2094,
  [SMALL_STATE(101)] = 2100,
  [SMALL_STATE(102)] = 2110,
  [SMALL_STATE(103)] = 2120,
  [SMALL_STATE(104)] = 2126,
  [SMALL_STATE(105)] = 2136,
  [SMALL_STATE(106)] = 2146,
  [SMALL_STATE(107)] = 2156,
  [SMALL_STATE(108)] = 2164,
  [SMALL_STATE(109)] = 2174,
  [SMALL_STATE(110)] = 2182,
  [SMALL_STATE(111)] = 2188,
  [SMALL_STATE(112)] = 2194,
  [SMALL_STATE(113)] = 2202,
  [SMALL_STATE(114)] = 2208,
  [SMALL_STATE(115)] = 2218,
  [SMALL_STATE(116)] = 2224,
  [SMALL_STATE(117)] = 2229,
  [SMALL_STATE(118)] = 2236,
  [SMALL_STATE(119)] = 2243,
  [SMALL_STATE(120)] = 2248,
  [SMALL_STATE(121)] = 2253,
  [SMALL_STATE(122)] = 2258,
  [SMALL_STATE(123)] = 2263,
  [SMALL_STATE(124)] = 2268,
  [SMALL_STATE(125)] = 2275,
  [SMALL_STATE(126)] = 2279,
  [SMALL_STATE(127)] = 2283,
  [SMALL_STATE(128)] = 2287,
  [SMALL_STATE(129)] = 2291,
  [SMALL_STATE(130)] = 2295,
  [SMALL_STATE(131)] = 2299,
  [SMALL_STATE(132)] = 2303,
  [SMALL_STATE(133)] = 2307,
  [SMALL_STATE(134)] = 2311,
  [SMALL_STATE(135)] = 2315,
  [SMALL_STATE(136)] = 2319,
  [SMALL_STATE(137)] = 2323,
  [SMALL_STATE(138)] = 2327,
  [SMALL_STATE(139)] = 2331,
  [SMALL_STATE(140)] = 2335,
  [SMALL_STATE(141)] = 2339,
  [SMALL_STATE(142)] = 2343,
  [SMALL_STATE(143)] = 2347,
  [SMALL_STATE(144)] = 2351,
  [SMALL_STATE(145)] = 2355,
  [SMALL_STATE(146)] = 2359,
  [SMALL_STATE(147)] = 2363,
  [SMALL_STATE(148)] = 2367,
  [SMALL_STATE(149)] = 2371,
  [SMALL_STATE(150)] = 2375,
  [SMALL_STATE(151)] = 2379,
  [SMALL_STATE(152)] = 2383,
  [SMALL_STATE(153)] = 2387,
  [SMALL_STATE(154)] = 2391,
  [SMALL_STATE(155)] = 2395,
  [SMALL_STATE(156)] = 2399,
  [SMALL_STATE(157)] = 2403,
  [SMALL_STATE(158)] = 2407,
  [SMALL_STATE(159)] = 2411,
  [SMALL_STATE(160)] = 2415,
  [SMALL_STATE(161)] = 2419,
  [SMALL_STATE(162)] = 2423,
  [SMALL_STATE(163)] = 2427,
  [SMALL_STATE(164)] = 2431,
  [SMALL_STATE(165)] = 2435,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(23),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(45),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(39),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(50),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(33),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(33),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(130),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(52),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(147),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(80),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(35),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(109),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(103),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(91),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(86),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [426] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
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
