#include "tree_sitter/parser.h"
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

#ifdef NDEBUG
#error "expected assertions to be enabled"
#endif

// Enable this for debugging
// #define DEBUG_PRINT
#ifdef DEBUG_PRINT
#define dbg_print(...)                                                         \
  do {                                                                         \
    fprintf(stderr, "    \033[96;1mparse: \033[0m");                           \
    fprintf(stderr, __VA_ARGS__);                                              \
  } while (0)
#else
#define dbg_print(...)
#endif

#define SCAN_SIZE sizeof(Scanner)

// Make our array the rest of the allowed buffer size
#define ARR_SIZE TREE_SITTER_SERIALIZATION_BUFFER_SIZE - SCAN_SIZE

// Our scanner is always stored in a buffer of length
// TREE_SITTER_SERIALIZATION_BUFFER_SIZE. We use the rest of the data as the
// buffer for our dynamic array.
#define ARR_PTR(state_ptr) ((uint8_t *)state_ptr + SCAN_SIZE)

#define IS_SINGLE false
#define IS_TRIPLE true

enum TokenType {
  INDENT,           // Start of indentation
  DEDENT,           // End of indentation
  NEWLINE,          // EOL or EOF, excluding backslashes
  STRING_START,     // `"`, or its tripled version
  STRING_END,       // Same as the above
  STRING_BODY,      // Raw contents of any string or command. Does not include
                    // escapes or interpolations.
  RAW_STRING_START, // `'`, or its tripled version
  RAW_STRING_END,   // Same as the above
  COMMAND_START,    // `` ` `` or its triple`
  COMMAND_END,      // Same as the above
  TOKEN_TYPE_END,   // Marker to make sure we never get an OOB element from TS
};

// A lot of this was taken from the Julia scanner,
// https://github.com/tree-sitter/tree-sitter-julia/

// Store the delimiter as itself if single, `self + SCHAR_MAX` if triple
// (since we never search for characters in extended ascii)
typedef uint8_t Delimiter;
typedef bool IsTriple;

typedef struct Scanner {
  size_t len;
  uint32_t prev_indent;
  bool has_seen_eof;
} Scanner;

char *arr_ptr(Scanner *state) { return ((char *)state + SCAN_SIZE); }

void push(Scanner *state, char c, IsTriple is_triple) {
  assert(c < SCHAR_MAX);
  assert(state->len <= ARR_SIZE);
  // print_arr(state, "before push");
  arr_ptr(state)[state->len++] = is_triple ? (c + SCHAR_MAX) : c;
}

Delimiter pop(Scanner *state) {
  assert(state->len > 0);
  return arr_ptr(state)[--state->len];
}

/// Initialize our struct. We allocate once and store the array after our
/// struct. This makes serializing and deserializing much easier.
void *tree_sitter_just_external_scanner_create(void) {
  char *buf = malloc(TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  assert(buf);

  Scanner *state = (Scanner *)buf;
  state->len = 0;
  state->prev_indent = 0;
  state->has_seen_eof = false;

  return state;
}

void tree_sitter_just_external_scanner_destroy(void *payload) { free(payload); }

unsigned tree_sitter_just_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  Scanner *state = (Scanner *)payload;
  size_t to_write = SCAN_SIZE + state->len;

  assert(to_write <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  memcpy(buffer, state, to_write);

  return to_write;
}

void tree_sitter_just_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  Scanner *state = (Scanner *)payload;

  // No state to deserialize, just reset ourselves
  if (length == 0) {
    state->prev_indent = 0;
    state->has_seen_eof = false;
    return;
  }
  memcpy(state, buffer, length);
}

// Continue and include the preceding character in the token
void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

// Continue and discard the preceding character
void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }
bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

/// Identify the start of a string. Detects the beginning of single or tripled
/// `'`, `"`, and `` ` `` block.
bool scan_string_start(TSLexer *lexer, Scanner *state, const char start_char) {
  if (lexer->lookahead != start_char)
    return false;

  advance(lexer);
  mark_end(lexer);

  for (unsigned count = 1; count < 3; ++count) {
    if (lexer->lookahead != start_char) {
      // It's not a triple quoted delimiter, return a single
      push(state, start_char, IS_SINGLE);
      return true;
    }
    advance(lexer);
  }

  // We did find a triple quoted string
  mark_end(lexer);
  push(state, start_char, IS_TRIPLE);
  return true;
}

bool scan_string_content(TSLexer *lexer, Scanner *state) {
  if (state->len == 0) {
    dbg_print("empty stack, scan_string_content = false\n");
    return false; // Stack is empty. We're not in a string.
  }

  Delimiter end_char = arr_ptr(state)[state->len - 1]; // peek
  bool is_triple = false;

  if (end_char > SCHAR_MAX) {
    is_triple = true;
    end_char -= SCHAR_MAX;
  }

  bool backslash_escapes = false;
  bool brace_escapes = false;
  TSSymbol end_symbol = 0;
  TSSymbol end_body = STRING_BODY;

  switch (end_char) {
  case '"':
    end_symbol = STRING_END;
    backslash_escapes = true;
    break;
  case '\'':
    end_symbol = RAW_STRING_END;
    break;
  case '`':
    end_symbol = COMMAND_END;
    brace_escapes = true;
    break;
  default:
    printf("unexpected end char: %c with len: %zu\n", end_char, state->len);
    assert(false);
  }

  dbg_print("scanning for end char %c, is triple: %d \n", end_char, is_triple);

  bool has_content = false;

  while (!eof(lexer)) {
    if (backslash_escapes && lexer->lookahead == '\\') {
      // detected escape, stop parsing
      mark_end(lexer);
      lexer->result_symbol = end_body;

      dbg_print("located escape, scan_string_content = %d\n", has_content);
      return has_content;
    }

    if (brace_escapes && lexer->lookahead == '{') {
      mark_end(lexer);
      unsigned braces_count = 0;

      while (lexer->lookahead == '{') {
        ++braces_count;
        advance(lexer);
      }

      if (braces_count >= 2 && braces_count < 4) {
        // 2 brackets make an interpolation, 4 escapes one
        lexer->result_symbol = end_body;

        dbg_print("located interpolation start, scan_string_content = true\n");
        return has_content;
      }

      // no escape found, continue matching a string
      mark_end(lexer);
    }

    if (lexer->lookahead == end_char) {
      if (is_triple) {
        mark_end(lexer);

        for (unsigned count = 1; count < 3; ++count) {
          advance(lexer);

          if (lexer->lookahead != end_char) {
            pop(state);
            mark_end(lexer);
            lexer->result_symbol = end_body;

            dbg_print(
                "located end of triple string, scan_string_content = true\n");
            return true;
          }
        }
      }

      if (has_content) {
        lexer->result_symbol = end_body;
      } else {
        pop(state);
        advance(lexer);
        mark_end(lexer);
        lexer->result_symbol = end_symbol;
      }

      dbg_print("located end of single string, scan_string_content = true\n");
      return true;
    }

    advance(lexer);
    mark_end(lexer);
    has_content = true;
  }

  dbg_print("string content not found, scan_string_content = false");
  return false;
}

// An EOF works as a dedent
bool handle_eof(TSLexer *lexer, Scanner *state, const bool *valid_symbols) {
  assert(eof(lexer));
  lexer->mark_end(lexer);

  if (valid_symbols[DEDENT]) {
    lexer->result_symbol = DEDENT;
    return true;
  } else if (valid_symbols[NEWLINE]) {
    if (state->has_seen_eof) {
      // allow EOF to count for a single symbol. Don't return true moer than
      // once, otherwise it will keep calling us thinking there are more tokens.
      return false;
    }

    lexer->result_symbol = NEWLINE;
    state->has_seen_eof = true;
    return true;
  }
  return false;
}

// This function is responsible for recognizing external tokens. It should
// return true if a token was recognized, and false otherwise.
bool tree_sitter_just_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *state = (Scanner *)(payload);
  int32_t *lookahead = &lexer->lookahead;

#ifdef DEBUG_PRINT
  dbg_print("valid symbols:");
  for (unsigned i = 0; i < TOKEN_TYPE_END; ++i) {
    fprintf(stderr, " %d", valid_symbols[i]);
  }
  fprintf(stderr, "\n");
#endif

  if (eof(lexer)) {
    return handle_eof(lexer, state, valid_symbols);
  }

  // Handle backslash escaping for newlines
  if (valid_symbols[NEWLINE]) {
    bool escape = false;
    if (*lookahead == '\\') {
      escape = true;
      skip(lexer);
    }

    bool eol = false;
    while (*lookahead == '\n' || *lookahead == '\r') {
      eol = true;
      skip(lexer);
    }

    if (eol && !escape) {
      lexer->result_symbol = NEWLINE;
      dbg_print("located newline; returning true\n");
      return true;
    }
  }

  if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
    while (!eof(lexer) && isspace(*lookahead)) {
      switch (*lookahead) {
      case '\n':
        dbg_print("found newline, no indent change; returning false\n");
        return false;

      case '\t':
      case ' ':
        skip(lexer);
        break;
      }
    }

    if (eof(lexer)) {
      return handle_eof(lexer, state, valid_symbols);
    }

    uint32_t indent = lexer->get_column(lexer);
    if (indent > state->prev_indent && valid_symbols[INDENT] &&
        state->prev_indent == 0) {
      lexer->result_symbol = INDENT;
      state->prev_indent = indent;
      dbg_print("located indent; returning\n");
      return true;
    } else if (indent < state->prev_indent && valid_symbols[DEDENT] &&
               indent == 0) {
      lexer->result_symbol = DEDENT;
      state->prev_indent = indent;
      dbg_print("located dedent; returning\n");
      return true;
    }
  }

  // no longer looking at whitespace, we can skip it
  while (!eof(lexer) && isspace(*lookahead)) {
    skip(lexer);
  }

  if (eof(lexer)) {
    return handle_eof(lexer, state, valid_symbols);
  }

  if ((valid_symbols[STRING_END] || valid_symbols[STRING_BODY] ||
       valid_symbols[RAW_STRING_END] || valid_symbols[COMMAND_END]) &&
      scan_string_content(lexer, payload)) {
    // Just check the precondition, since `scan_string_content` always assumes
    // either body or end is always valid.
    assert(valid_symbols[lexer->result_symbol]);
    return true;
  }

  if (valid_symbols[STRING_START] && scan_string_start(lexer, state, '"')) {
    dbg_print("scanned string start; returning\n");
    lexer->result_symbol = STRING_START;
    return true;
  }

  if (valid_symbols[RAW_STRING_START] &&
      scan_string_start(lexer, state, '\'')) {
    dbg_print("located raw string start; returning\n");
    lexer->result_symbol = RAW_STRING_START;
    return true;
  }

  if (valid_symbols[COMMAND_START] && scan_string_start(lexer, state, '`')) {
    dbg_print("located command start; returning\n");
    lexer->result_symbol = COMMAND_START;
    return true;
  }

  dbg_print("no tokens found; returning false\n");
  return false;
}
