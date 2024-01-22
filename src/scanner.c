#include "tree_sitter/parser.h"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#ifdef NDEBUG
#error "expected assertions to be enabled"
#endif

#define SBYTES sizeof(Scanner)

enum TokenType { INDENT, DEDENT, NEWLINE };

typedef struct Scanner {
  uint32_t prev_indent;
  bool has_seen_eof;
} Scanner;

// This function should create your scanner object. It will only be called once
// anytime your language is set on a parser. Often, you will want to allocate
// memory on the heap and return a pointer to it. If your external scanner
// doesn’t need to maintain any state, it’s ok to return NULL.
void *tree_sitter_just_external_scanner_create() {
  Scanner *ptr = (Scanner *)malloc(SBYTES);
  assert(ptr);
  return ptr;
}

// This function should free any memory used by your scanner. It is called once
// when a parser is deleted or assigned a different language. It receives as an
// argument the same pointer that was returned from the create function. If your
// create function didn’t allocate any memory, this function can be a noop.
void tree_sitter_just_external_scanner_destroy(void *payload) {
    free((Scanner *) payload);
}

// Serialize the state of the scanner. This is called when the parser is
// serialized. It receives as an argument the same pointer that was returned
// from the create function.
unsigned tree_sitter_just_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  assert(SBYTES < TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  memcpy(buffer, payload, SBYTES);
  return SBYTES;
}

// Reconstruct a scanner from the serialized state. This is called when the
// parser is deserialized.
void tree_sitter_just_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  Scanner* ptr = (Scanner *)payload;
  if (length == 0) {
    ptr->prev_indent = 0;
    ptr->has_seen_eof = false;
    return;    
  }
  memcpy(ptr, buffer, SBYTES);
}

// Continue and include the preceding character in the token
void advance(TSLexer *lexer) { return lexer->advance(lexer, false); }

// Continue and discard the preceding character
void skip(TSLexer *lexer) { return lexer->advance(lexer, true); }

// An EOF works as a dedent
bool handle_eof(TSLexer *lexer, Scanner *state, const bool *valid_symbols) {
  assert(lexer->eof(lexer));
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
  bool (*eof)(const TSLexer *) = lexer->eof;

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
      return true;
    }
  }

  if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
    while (!lexer->eof(lexer) && isspace(*lookahead)) {
      switch (*lookahead) {
      case '\n':
        return false;

      case '\t':
      case ' ':
        skip(lexer);
        break;
      }
    }

    if (lexer->eof(lexer)) {
      return handle_eof(lexer, state, valid_symbols);
    }

    uint32_t indent = lexer->get_column(lexer);
    if (indent > state->prev_indent && valid_symbols[INDENT] &&
        state->prev_indent == 0) {
      lexer->result_symbol = INDENT;
      state->prev_indent = indent;
      return true;
    } else if (indent < state->prev_indent && valid_symbols[DEDENT] &&
               indent == 0) {
      lexer->result_symbol = DEDENT;
      state->prev_indent = indent;
      return true;
    }
  }

  return false;
}
