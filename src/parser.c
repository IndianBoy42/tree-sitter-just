#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 3
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
  sym_SPACE = 35,
  sym_STRING = 36,
  sym_INDENTED_STRING = 37,
  sym_TEXT = 38,
  sym_INDENT = 39,
  sym_DEDENT = 40,
  sym_NEWLINE = 41,
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
  [sym_SPACE] = "SPACE",
  [sym_STRING] = "STRING",
  [sym_INDENTED_STRING] = "INDENTED_STRING",
  [sym_TEXT] = "TEXT",
  [sym_INDENT] = "INDENT",
  [sym_DEDENT] = "DEDENT",
  [sym_NEWLINE] = "NEWLINE",
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
  [sym_SPACE] = sym_SPACE,
  [sym_STRING] = sym_STRING,
  [sym_INDENTED_STRING] = sym_INDENTED_STRING,
  [sym_TEXT] = sym_TEXT,
  [sym_INDENT] = sym_INDENT,
  [sym_DEDENT] = sym_DEDENT,
  [sym_NEWLINE] = sym_NEWLINE,
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
  [sym_SPACE] = {
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
          lookahead == ' ') ADVANCE(177);
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
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
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
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
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
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(180);
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
          lookahead == ' ') ADVANCE(177);
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
          lookahead == ' ') ADVANCE(177);
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
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(182);
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
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
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
          lookahead != ' ') ADVANCE(182);
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
      ACCEPT_TOKEN(sym_SPACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_INDENTED_STRING);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(182);
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 72, .external_lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 72, .external_lex_state = 3},
  [18] = {.lex_state = 72, .external_lex_state = 3},
  [19] = {.lex_state = 72, .external_lex_state = 3},
  [20] = {.lex_state = 72, .external_lex_state = 3},
  [21] = {.lex_state = 72, .external_lex_state = 3},
  [22] = {.lex_state = 72, .external_lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 72, .external_lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
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
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 72, .external_lex_state = 3},
  [54] = {.lex_state = 72, .external_lex_state = 3},
  [55] = {.lex_state = 72, .external_lex_state = 3},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 70, .external_lex_state = 4},
  [59] = {.lex_state = 70, .external_lex_state = 4},
  [60] = {.lex_state = 72, .external_lex_state = 2},
  [61] = {.lex_state = 72, .external_lex_state = 2},
  [62] = {.lex_state = 72, .external_lex_state = 2},
  [63] = {.lex_state = 72, .external_lex_state = 2},
  [64] = {.lex_state = 72, .external_lex_state = 2},
  [65] = {.lex_state = 72, .external_lex_state = 2},
  [66] = {.lex_state = 72, .external_lex_state = 2},
  [67] = {.lex_state = 70, .external_lex_state = 2},
  [68] = {.lex_state = 72, .external_lex_state = 2},
  [69] = {.lex_state = 72, .external_lex_state = 2},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 72, .external_lex_state = 2},
  [72] = {.lex_state = 72, .external_lex_state = 2},
  [73] = {.lex_state = 72, .external_lex_state = 2},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 72, .external_lex_state = 2},
  [76] = {.lex_state = 72, .external_lex_state = 2},
  [77] = {.lex_state = 72, .external_lex_state = 2},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 72, .external_lex_state = 2},
  [80] = {.lex_state = 72, .external_lex_state = 2},
  [81] = {.lex_state = 72},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 70, .external_lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 70, .external_lex_state = 2},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 70, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 70, .external_lex_state = 4},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 70, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 70, .external_lex_state = 2},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 28},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 72},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 72},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 72},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 72},
  [154] = {.lex_state = 72},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 72},
  [162] = {.lex_state = 72},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 72},
};

enum {
  ts_external_token_INDENT = 0,
  ts_external_token_DEDENT = 1,
  ts_external_token_NEWLINE = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_INDENT] = sym_INDENT,
  [ts_external_token_DEDENT] = sym_DEDENT,
  [ts_external_token_NEWLINE] = sym_NEWLINE,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_INDENT] = true,
    [ts_external_token_DEDENT] = true,
    [ts_external_token_NEWLINE] = true,
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
    [sym_SPACE] = ACTIONS(3),
    [sym_STRING] = ACTIONS(1),
    [sym_INDENTED_STRING] = ACTIONS(1),
    [sym_INDENT] = ACTIONS(1),
    [sym_DEDENT] = ACTIONS(1),
    [sym_NEWLINE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(159),
    [sym_item] = STATE(3),
    [sym_eol] = STATE(68),
    [sym_alias] = STATE(68),
    [sym_assignment] = STATE(68),
    [sym_export] = STATE(68),
    [sym_setting] = STATE(68),
    [sym_recipe] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_set] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_COMMENT] = ACTIONS(15),
    [sym_NAME] = ACTIONS(17),
    [sym_SPACE] = ACTIONS(3),
    [sym_NEWLINE] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_alias,
    ACTIONS(26), 1,
      anon_sym_export,
    ACTIONS(29), 1,
      anon_sym_set,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_COMMENT,
    ACTIONS(38), 1,
      sym_NAME,
    ACTIONS(41), 1,
      sym_NEWLINE,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(68), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [40] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(7), 1,
      anon_sym_alias,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_set,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(17), 1,
      sym_NAME,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_item,
      aux_sym_source_file_repeat1,
    STATE(68), 6,
      sym_eol,
      sym_alias,
      sym_assignment,
      sym_export,
      sym_setting,
      sym_recipe,
  [80] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(48), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(46), 10,
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
  [103] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(52), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(50), 10,
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
  [126] = 12,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(54), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      sym_BACKTICK,
    ACTIONS(65), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(68), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(51), 1,
      sym_value,
    ACTIONS(71), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(74), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(6), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [166] = 12,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(87), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(51), 1,
      sym_value,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(11), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [206] = 13,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(145), 1,
      sym_sequence,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [248] = 13,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(142), 1,
      sym_sequence,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [290] = 13,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(147), 1,
      sym_sequence,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [332] = 12,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(87), 1,
      sym_NAME,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_string,
    STATE(51), 1,
      sym_value,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
    STATE(6), 2,
      sym_expression,
      aux_sym_dependency_repeat1,
  [372] = 13,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(116), 1,
      sym_expression,
    STATE(124), 1,
      sym_sequence,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [414] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(60), 1,
      sym_body,
    STATE(18), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(115), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(117), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [443] = 12,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(162), 1,
      sym_condition,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [482] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(66), 1,
      sym_body,
    STATE(24), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(123), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(125), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [511] = 12,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(129), 1,
      sym_condition,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [550] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(69), 1,
      sym_body,
    STATE(20), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(127), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(129), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [579] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(69), 1,
      sym_body,
    STATE(24), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(127), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(129), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [608] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(66), 1,
      sym_body,
    STATE(22), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(123), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(125), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [637] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(76), 1,
      sym_body,
    STATE(24), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(131), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(133), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [666] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(64), 1,
      sym_body,
    STATE(15), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(135), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(137), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [695] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_INDENT,
    STATE(60), 1,
      sym_body,
    STATE(24), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(115), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(117), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [724] = 12,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(117), 1,
      sym_expression,
    STATE(161), 1,
      sym_condition,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [763] = 6,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_NAME,
    STATE(24), 2,
      sym_dependency,
      aux_sym_recipe_repeat2,
    ACTIONS(141), 3,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
    ACTIONS(139), 5,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
  [789] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym_BACKTICK,
    ACTIONS(155), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(157), 1,
      sym_NAME,
    STATE(98), 1,
      sym_value,
    STATE(112), 1,
      sym_string,
    STATE(118), 1,
      sym_expression,
    ACTIONS(159), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(161), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [825] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(4), 1,
      sym_expression,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [861] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(135), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [897] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(167), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(169), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [917] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(158), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [953] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(171), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(173), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [973] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(87), 1,
      sym_NAME,
    STATE(4), 1,
      sym_expression,
    STATE(39), 1,
      sym_string,
    STATE(51), 1,
      sym_value,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1009] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(157), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(175), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(177), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1065] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(148), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1101] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym_BACKTICK,
    ACTIONS(155), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(157), 1,
      sym_NAME,
    STATE(98), 1,
      sym_value,
    STATE(102), 1,
      sym_expression,
    STATE(112), 1,
      sym_string,
    ACTIONS(159), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(161), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1137] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(128), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(177), 12,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1191] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(136), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(179), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(181), 7,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1247] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(140), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1283] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(164), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1319] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(101), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(81), 1,
      sym_value,
    STATE(125), 1,
      sym_expression,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1355] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(127), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1391] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(149), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1427] = 11,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_BACKTICK,
    ACTIONS(85), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      sym_NAME,
    STATE(39), 1,
      sym_string,
    STATE(122), 1,
      sym_value,
    STATE(143), 1,
      sym_expression,
    ACTIONS(89), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(91), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 11,
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
  [1483] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(169), 11,
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
  [1500] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
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
  [1519] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(173), 11,
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
  [1536] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(181), 11,
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
  [1553] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(185), 5,
      anon_sym_if,
      sym_BACKTICK,
      sym_NAME,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(189), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_INDENTED_BACKTICK,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1574] = 9,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(191), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(93), 1,
      sym_value,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1604] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(195), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(193), 6,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
  [1622] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(199), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(197), 6,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
  [1640] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(203), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
    ACTIONS(201), 6,
      sym_INDENT,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_COMMENT,
  [1658] = 9,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      sym_BACKTICK,
    ACTIONS(99), 1,
      sym_INDENTED_BACKTICK,
    ACTIONS(191), 1,
      sym_NAME,
    STATE(50), 1,
      sym_string,
    STATE(91), 1,
      sym_value,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [1688] = 8,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(205), 1,
      anon_sym_COLON_EQ,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_NAME,
    STATE(144), 1,
      sym_variadic_parameters,
    ACTIONS(207), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(74), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1715] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(215), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(218), 1,
      sym_TEXT,
    ACTIONS(221), 1,
      sym_DEDENT,
    ACTIONS(223), 1,
      sym_NEWLINE,
    STATE(58), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(87), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1740] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(226), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(228), 1,
      sym_TEXT,
    ACTIONS(230), 1,
      sym_DEDENT,
    ACTIONS(232), 1,
      sym_NEWLINE,
    STATE(58), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(87), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(127), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(129), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1781] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(234), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(236), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1797] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(238), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(240), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(242), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(244), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1829] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(123), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(125), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(246), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(248), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(115), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(117), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1877] = 6,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(226), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(228), 1,
      sym_TEXT,
    ACTIONS(232), 1,
      sym_NEWLINE,
    STATE(59), 2,
      sym_line,
      aux_sym_body_repeat1,
    STATE(87), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [1899] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(250), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(252), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1915] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(131), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(133), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1931] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_NAME,
    ACTIONS(254), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_variadic_parameters,
    ACTIONS(207), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(82), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [1955] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(256), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(258), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(260), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(262), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [1987] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(264), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(266), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2003] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_NAME,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_variadic_parameters,
    ACTIONS(207), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(82), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(270), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(272), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(274), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(276), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(278), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(280), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2075] = 7,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_NAME,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_variadic_parameters,
    ACTIONS(207), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    STATE(70), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(282), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(284), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2115] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(286), 4,
      sym_NEWLINE,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_COMMENT,
    ACTIONS(288), 4,
      anon_sym_alias,
      anon_sym_export,
      anon_sym_set,
      sym_NAME,
  [2131] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(290), 1,
      anon_sym_PLUS,
    ACTIONS(189), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [2146] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_NAME,
    STATE(82), 2,
      sym_parameter,
      aux_sym_recipe_repeat1,
    ACTIONS(292), 3,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_STAR,
  [2165] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(300), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2179] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(304), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(307), 1,
      sym_TEXT,
    ACTIONS(310), 1,
      sym_NEWLINE,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [2197] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_string,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2215] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_string,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2233] = 5,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(226), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(228), 1,
      sym_TEXT,
    ACTIONS(316), 1,
      sym_NEWLINE,
    STATE(84), 3,
      sym_text,
      sym_interpolation,
      aux_sym_line_repeat1,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(320), 1,
      anon_sym_EQ,
    ACTIONS(318), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2265] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    STATE(121), 1,
      sym_string,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2280] = 6,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    ACTIONS(322), 1,
      anon_sym_COLON_EQ,
    STATE(71), 1,
      sym_eol,
    STATE(110), 1,
      sym_boolean,
  [2299] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(324), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2310] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    STATE(107), 1,
      sym_string,
    ACTIONS(103), 2,
      sym_RAW_STRING,
      sym_STRING,
    ACTIONS(105), 2,
      sym_INDENTED_RAW_STRING,
      sym_INDENTED_STRING,
  [2325] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(326), 5,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      sym_NAME,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(328), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
    ACTIONS(330), 2,
      sym_DEDENT,
      sym_NEWLINE,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2360] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(334), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
    ACTIONS(336), 2,
      sym_DEDENT,
      sym_NEWLINE,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(340), 1,
      anon_sym_shell,
    ACTIONS(338), 3,
      anon_sym_export,
      anon_sym_dotenv_DASHload,
      anon_sym_positional_DASHarguments,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(342), 1,
      anon_sym_PLUS,
    ACTIONS(189), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(173), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(169), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2413] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(346), 1,
      sym_NEWLINE,
    ACTIONS(344), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(65), 1,
      sym_eol,
  [2437] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(63), 1,
      sym_eol,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(79), 1,
      sym_eol,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(350), 1,
      sym_NEWLINE,
    ACTIONS(348), 2,
      anon_sym_LBRACE_LBRACE,
      sym_TEXT,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_NAME,
    STATE(132), 1,
      sym_parameter,
  [2487] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_setting_repeat1,
  [2500] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_setting_repeat1,
  [2513] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      anon_sym_PLUS,
  [2524] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(75), 1,
      sym_eol,
  [2537] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(177), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(181), 3,
      sym_NEWLINE,
      anon_sym_PLUS,
      sym_COMMENT,
  [2555] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(15), 1,
      sym_COMMENT,
    ACTIONS(19), 1,
      sym_NEWLINE,
    STATE(80), 1,
      sym_eol,
  [2568] = 4,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_setting_repeat1,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(365), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2589] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [2599] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(371), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(46), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(50), 2,
      sym_NEWLINE,
      sym_COMMENT,
  [2623] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(373), 2,
      anon_sym_true,
      anon_sym_false,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2639] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      anon_sym_PLUS,
  [2649] = 3,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(377), 1,
      sym_NAME,
    STATE(72), 1,
      sym_assignment,
  [2659] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(389), 1,
      sym_NAME,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(391), 1,
      anon_sym_COLON,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
  [2743] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(395), 1,
      anon_sym_RBRACE_RBRACE,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(397), 1,
      anon_sym_else,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(399), 1,
      sym_NAME,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(401), 1,
      sym_NAME,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [2792] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
  [2799] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(409), 1,
      sym_NAME,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(417), 1,
      anon_sym_COLON_EQ,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(205), 1,
      anon_sym_COLON_EQ,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(419), 1,
      anon_sym_COLON_EQ,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
  [2869] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [2876] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(425), 1,
      anon_sym_else,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(427), 1,
      anon_sym_else,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(435), 1,
      sym_NEWLINE,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
  [2925] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [2932] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(441), 1,
      sym_NAME,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_SPACE,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 372,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 511,
  [SMALL_STATE(17)] = 550,
  [SMALL_STATE(18)] = 579,
  [SMALL_STATE(19)] = 608,
  [SMALL_STATE(20)] = 637,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 763,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 825,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 897,
  [SMALL_STATE(29)] = 917,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 973,
  [SMALL_STATE(32)] = 1009,
  [SMALL_STATE(33)] = 1045,
  [SMALL_STATE(34)] = 1065,
  [SMALL_STATE(35)] = 1101,
  [SMALL_STATE(36)] = 1137,
  [SMALL_STATE(37)] = 1173,
  [SMALL_STATE(38)] = 1191,
  [SMALL_STATE(39)] = 1227,
  [SMALL_STATE(40)] = 1247,
  [SMALL_STATE(41)] = 1283,
  [SMALL_STATE(42)] = 1319,
  [SMALL_STATE(43)] = 1355,
  [SMALL_STATE(44)] = 1391,
  [SMALL_STATE(45)] = 1427,
  [SMALL_STATE(46)] = 1463,
  [SMALL_STATE(47)] = 1483,
  [SMALL_STATE(48)] = 1500,
  [SMALL_STATE(49)] = 1519,
  [SMALL_STATE(50)] = 1536,
  [SMALL_STATE(51)] = 1553,
  [SMALL_STATE(52)] = 1574,
  [SMALL_STATE(53)] = 1604,
  [SMALL_STATE(54)] = 1622,
  [SMALL_STATE(55)] = 1640,
  [SMALL_STATE(56)] = 1658,
  [SMALL_STATE(57)] = 1688,
  [SMALL_STATE(58)] = 1715,
  [SMALL_STATE(59)] = 1740,
  [SMALL_STATE(60)] = 1765,
  [SMALL_STATE(61)] = 1781,
  [SMALL_STATE(62)] = 1797,
  [SMALL_STATE(63)] = 1813,
  [SMALL_STATE(64)] = 1829,
  [SMALL_STATE(65)] = 1845,
  [SMALL_STATE(66)] = 1861,
  [SMALL_STATE(67)] = 1877,
  [SMALL_STATE(68)] = 1899,
  [SMALL_STATE(69)] = 1915,
  [SMALL_STATE(70)] = 1931,
  [SMALL_STATE(71)] = 1955,
  [SMALL_STATE(72)] = 1971,
  [SMALL_STATE(73)] = 1987,
  [SMALL_STATE(74)] = 2003,
  [SMALL_STATE(75)] = 2027,
  [SMALL_STATE(76)] = 2043,
  [SMALL_STATE(77)] = 2059,
  [SMALL_STATE(78)] = 2075,
  [SMALL_STATE(79)] = 2099,
  [SMALL_STATE(80)] = 2115,
  [SMALL_STATE(81)] = 2131,
  [SMALL_STATE(82)] = 2146,
  [SMALL_STATE(83)] = 2165,
  [SMALL_STATE(84)] = 2179,
  [SMALL_STATE(85)] = 2197,
  [SMALL_STATE(86)] = 2215,
  [SMALL_STATE(87)] = 2233,
  [SMALL_STATE(88)] = 2251,
  [SMALL_STATE(89)] = 2265,
  [SMALL_STATE(90)] = 2280,
  [SMALL_STATE(91)] = 2299,
  [SMALL_STATE(92)] = 2310,
  [SMALL_STATE(93)] = 2325,
  [SMALL_STATE(94)] = 2336,
  [SMALL_STATE(95)] = 2348,
  [SMALL_STATE(96)] = 2360,
  [SMALL_STATE(97)] = 2372,
  [SMALL_STATE(98)] = 2384,
  [SMALL_STATE(99)] = 2395,
  [SMALL_STATE(100)] = 2404,
  [SMALL_STATE(101)] = 2413,
  [SMALL_STATE(102)] = 2424,
  [SMALL_STATE(103)] = 2437,
  [SMALL_STATE(104)] = 2450,
  [SMALL_STATE(105)] = 2463,
  [SMALL_STATE(106)] = 2474,
  [SMALL_STATE(107)] = 2487,
  [SMALL_STATE(108)] = 2500,
  [SMALL_STATE(109)] = 2513,
  [SMALL_STATE(110)] = 2524,
  [SMALL_STATE(111)] = 2537,
  [SMALL_STATE(112)] = 2546,
  [SMALL_STATE(113)] = 2555,
  [SMALL_STATE(114)] = 2568,
  [SMALL_STATE(115)] = 2581,
  [SMALL_STATE(116)] = 2589,
  [SMALL_STATE(117)] = 2599,
  [SMALL_STATE(118)] = 2607,
  [SMALL_STATE(119)] = 2615,
  [SMALL_STATE(120)] = 2623,
  [SMALL_STATE(121)] = 2631,
  [SMALL_STATE(122)] = 2639,
  [SMALL_STATE(123)] = 2649,
  [SMALL_STATE(124)] = 2659,
  [SMALL_STATE(125)] = 2666,
  [SMALL_STATE(126)] = 2673,
  [SMALL_STATE(127)] = 2680,
  [SMALL_STATE(128)] = 2687,
  [SMALL_STATE(129)] = 2694,
  [SMALL_STATE(130)] = 2701,
  [SMALL_STATE(131)] = 2708,
  [SMALL_STATE(132)] = 2715,
  [SMALL_STATE(133)] = 2722,
  [SMALL_STATE(134)] = 2729,
  [SMALL_STATE(135)] = 2736,
  [SMALL_STATE(136)] = 2743,
  [SMALL_STATE(137)] = 2750,
  [SMALL_STATE(138)] = 2757,
  [SMALL_STATE(139)] = 2764,
  [SMALL_STATE(140)] = 2771,
  [SMALL_STATE(141)] = 2778,
  [SMALL_STATE(142)] = 2785,
  [SMALL_STATE(143)] = 2792,
  [SMALL_STATE(144)] = 2799,
  [SMALL_STATE(145)] = 2806,
  [SMALL_STATE(146)] = 2813,
  [SMALL_STATE(147)] = 2820,
  [SMALL_STATE(148)] = 2827,
  [SMALL_STATE(149)] = 2834,
  [SMALL_STATE(150)] = 2841,
  [SMALL_STATE(151)] = 2848,
  [SMALL_STATE(152)] = 2855,
  [SMALL_STATE(153)] = 2862,
  [SMALL_STATE(154)] = 2869,
  [SMALL_STATE(155)] = 2876,
  [SMALL_STATE(156)] = 2883,
  [SMALL_STATE(157)] = 2890,
  [SMALL_STATE(158)] = 2897,
  [SMALL_STATE(159)] = 2904,
  [SMALL_STATE(160)] = 2911,
  [SMALL_STATE(161)] = 2918,
  [SMALL_STATE(162)] = 2925,
  [SMALL_STATE(163)] = 2932,
  [SMALL_STATE(164)] = 2939,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 9),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 9),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(23),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(39),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(48),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(33),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2), SHIFT_REPEAT(33),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(131),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat2, 2), SHIFT_REPEAT(53),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(38),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(105),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(96),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 7),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 7),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 8),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 9),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 9),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(146),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(38),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(105),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(89),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variadic_parameters, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
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
