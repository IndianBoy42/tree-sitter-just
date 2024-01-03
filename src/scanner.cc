#include "tree_sitter/parser.h"
#include <stdio.h>

#include <algorithm>
#include <cassert>
#include <cstring>
#include <cwctype>
#include <iostream>
#include <string>
#include <vector>

enum TokenType { INDENT, DEDENT, NEWLINE, LINE };

struct Scanner {
  uint32_t prev_indent;
  // bool eol;
};

extern "C" {

// This function should create your scanner object. It will only be called once
// anytime your language is set on a parser. Often, you will want to allocate
// memory on the heap and return a pointer to it. If your external scanner
// doesn’t need to maintain any state, it’s ok to return NULL.
void *tree_sitter_just_external_scanner_create() { return new Scanner(); }

// This function should free any memory used by your scanner. It is called once
// when a parser is deleted or assigned a different language. It receives as an
// argument the same pointer that was returned from the create function. If your
// create function didn’t allocate any memory, this function can be a noop.
void tree_sitter_just_external_scanner_destroy(void *payload) {
  delete static_cast<Scanner *>(payload);
}

// Serialize the state of the scanner. This is called when the parser is
// serialized. It receives as an argument the same pointer that was returned
// from the create function.
unsigned tree_sitter_just_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  // ...
  char *start = buffer;
  const Scanner *state = static_cast<Scanner *>(payload);

  // *buffer++ = state->eol;

  // Convert curr_indent and prev_indent to string and push to buffer
  std::string curr = std::to_string(state->prev_indent);
  memcpy(buffer, curr.c_str(), curr.size());
  buffer += curr.size();

  return buffer - start;
}

// Reconstruct a scanner from the serialized state. This is called when the
// parser is deserialized.
void tree_sitter_just_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  // ...
  Scanner *state = static_cast<Scanner *>(payload);
  const char *end = buffer + length;

  if (length == 0) {
    state->prev_indent = 0;
    return;
  }

  // state->eol = (Scanner::State)*buffer++;
  // state->sw = Scanner::State::NONE;

  // convert string to prev_indent
  state->prev_indent = std::stoi(std::string(buffer, end));
}

// Continue and include the preceding character in the token
void advance(TSLexer *lexer) {
  return lexer->advance(lexer, false);
}

// Continue and discard the preceding character
void skip(TSLexer *lexer) {
  return lexer->advance(lexer, true);
}

// This function is responsible for recognizing external tokens. It should
// return true if a token was recognized, and false otherwise.
bool tree_sitter_just_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {

  if (!lexer->lookahead) {
    lexer->mark_end(lexer);
    return false;
  }

  Scanner *state = static_cast<Scanner *>(payload);
  int32_t &lookahead = lexer->lookahead;
  TSSymbol &result_symbol = lexer->result_symbol;
  void (*mark_end)(TSLexer *) = lexer->mark_end;
  bool (*is_at_included_range_start)(const TSLexer *) =
      lexer->is_at_included_range_start;

  // Handle backslash escaping for newlines
  if (valid_symbols[NEWLINE]) {
    bool escape = false;
    if (lookahead == '\\') {
      escape = true;
      skip(lexer);
    }

    bool eol = false;
    while (lookahead == '\n' || lookahead == '\r') {
      eol = true;
      skip(lexer);
    }
    if (eol && !escape) {
      result_symbol = NEWLINE;
      return true;
    }
  }

  if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
    while (std::iswspace(lookahead)) {
      switch (lookahead) {
      case '\n':
        return false;

      case '\t':
      case ' ':
        skip(lexer);
        break;
      }

      // if (lexer->eof(lexer)) {
      //   if (valid_symbols[DEDENT]) {
      //     return true;
      //   }
      // }
    }

    uint32_t indent = lexer->get_column(lexer);
    if (indent > state->prev_indent && valid_symbols[INDENT] &&
        state->prev_indent == 0) {
      result_symbol = INDENT;
      state->prev_indent = indent;
      return true;
    } else if (indent < state->prev_indent && valid_symbols[DEDENT] &&
               indent == 0) {
      result_symbol = DEDENT;
      state->prev_indent = indent;
      return true;
    }
  }

  return false;
}
}
