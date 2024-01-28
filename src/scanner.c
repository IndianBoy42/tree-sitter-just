#include "tree_sitter/parser.h"

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <wctype.h>

#ifdef NDEBUG
#error "expected assertions to be enabled"
#endif

#define SBYTES sizeof(Scanner)

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE,
  TEXT,
  ERROR_RECOVERY,
};

typedef struct Scanner {
  uint32_t prev_indent;
  uint16_t advance_brace_count;
  bool has_seen_eof;

} Scanner;

// This function should create your scanner object. It will only be called once
// anytime your language is set on a parser. Often, you will want to allocate
// memory on the heap and return a pointer to it. If your external scanner
// doesn’t need to maintain any state, it’s ok to return NULL.
void *tree_sitter_just_external_scanner_create(void) {
  Scanner *ptr = (Scanner *)calloc(SBYTES, 1);
  assert(ptr);
  return ptr;
}

// This function should free any memory used by your scanner. It is called once
// when a parser is deleted or assigned a different language. It receives as an
// argument the same pointer that was returned from the create function. If your
// create function didn’t allocate any memory, this function can be a noop.
void tree_sitter_just_external_scanner_destroy(void *payload) {
  free((Scanner *)payload);
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
  Scanner *ptr = (Scanner *)payload;
  if (length == 0) {
    ptr->prev_indent = 0;
    ptr->has_seen_eof = false;
    return;
  }
  memcpy(ptr, buffer, SBYTES);
}

// Continue and include the preceding character in the token
static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

// Continue and discard the preceding character
static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// An EOF works as a dedent
static bool handle_eof(TSLexer *lexer, Scanner *state,
                       const bool *valid_symbols) {
  assert(lexer->eof(lexer));
  lexer->mark_end(lexer);

  if (valid_symbols[DEDENT]) {
    lexer->result_symbol = DEDENT;
    return true;
  }
  if (valid_symbols[NEWLINE]) {
    if (state->has_seen_eof) {
      // allow EOF to count for a single symbol. Don't return true more than
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
  Scanner *scanner = (Scanner *)(payload);

  if (lexer->eof(lexer)) {
    return handle_eof(lexer, scanner, valid_symbols);
  }

  // Handle backslash escaping for newlines
  if (valid_symbols[NEWLINE]) {
    bool escape = false;
    if (lexer->lookahead == '\\') {
      escape = true;
      skip(lexer);
    }

    bool eol_found = false;
    while (iswspace(lexer->lookahead)) {
      if (lexer->lookahead == '\n') {
        skip(lexer);
        eol_found = true;
        break;
      }
      skip(lexer);
    }

    if (eol_found && !escape) {
      lexer->result_symbol = NEWLINE;
      return true;
    }
  }

  if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
    while (!lexer->eof(lexer) && isspace(lexer->lookahead)) {
      switch (lexer->lookahead) {
      case '\n':
        if (valid_symbols[INDENT]) {
          return false;
        }

      case '\t':
      case ' ':
        skip(lexer);
        break;

      default:
        return false;
      }
    }

    if (lexer->eof(lexer)) {
      return handle_eof(lexer, scanner, valid_symbols);
    }

    uint32_t indent = lexer->get_column(lexer);

    if (indent > scanner->prev_indent && valid_symbols[INDENT] &&
        scanner->prev_indent == 0) {
      lexer->result_symbol = INDENT;
      scanner->prev_indent = indent;
      return true;
    }
    if (indent < scanner->prev_indent && valid_symbols[DEDENT] && indent == 0) {
      lexer->result_symbol = DEDENT;
      scanner->prev_indent = indent;
      return true;
    }
  }

  if (valid_symbols[TEXT]) {
    uint8_t skipped = 0;
    while (iswspace(lexer->lookahead)) {
      if (skipped == scanner->prev_indent) {
        break;
      }
      skip(lexer);
      skipped++;
    }

    if (lexer->lookahead == '\n') {
      return false;
    }

    bool advanced_once = false;

    while (lexer->lookahead == '{' && scanner->advance_brace_count > 0 &&
           !lexer->eof(lexer)) {
      scanner->advance_brace_count--;
      advance(lexer);
      advanced_once = true;
    }

    while (1) {
      if (lexer->eof(lexer)) {
        return handle_eof(lexer, scanner, valid_symbols);
      }

      while (!lexer->eof(lexer) && lexer->lookahead != '\n' &&
             lexer->lookahead != '{') {
        // Can't start with #!

        if (lexer->lookahead == '#') {
          advance(lexer);
          if (lexer->lookahead == '!') {
            return false;
          }
        }

        advance(lexer);
        advanced_once = true;
      }

      if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = TEXT;
        if (advanced_once) {
          return true;
        }
      } else if (lexer->lookahead == '{') {
        lexer->mark_end(lexer);
        advance(lexer);

        if (lexer->eof(lexer) ||
            lexer->lookahead == '\n') { // EOF without anything after {
          lexer->mark_end(lexer);
          lexer->result_symbol = TEXT;
          return advanced_once;
        }

        if (lexer->lookahead == '{') {
          advance(lexer);

          while (lexer->lookahead == '{') { // more braces!
            scanner->advance_brace_count++;
            advance(lexer);
          }

          // scan till a balanced pair of }} are found, then assume it's a valid
          // interpolation

          while (!lexer->eof(lexer) && lexer->lookahead != '\n') {
            advance(lexer);
            // printf("[[]]lookahead: %d\n", lexer->lookahead);
            if (lexer->lookahead == '}') {
              advance(lexer);
              if (lexer->lookahead == '}') {
                // printf("got text\n");
                lexer->result_symbol = TEXT;
                return advanced_once;
              }
            }
          }

          if (!advanced_once) {
            return false;
          }
        }
      }
    }
  }

  return false;
}
