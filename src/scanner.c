#include "tree_sitter/parser.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Enable this for debugging
// #define DEBUG_PRINT

#ifndef __FILE_NAME__
#define __FILE_NAME__ __FILE__
#endif

#ifdef DEBUG_PRINT
#define dbg_print(...)                                                         \
  do {                                                                         \
    fprintf(stderr, "    \033[96;1mparse: \033[0m");                           \
    fprintf(stderr, __VA_ARGS__);                                              \
  } while (0)
#else
#define dbg_print(...)
#endif

#define panic(...)                                                             \
  do {                                                                         \
    fprintf(stderr, "panic at %s:%d: ", __FILE_NAME__, __LINE__);              \
    fprintf(stderr, __VA_ARGS__);                                              \
    fprintf(stderr, "\n");                                                     \
    exit(1);                                                                   \
  } while (0);

#define assertf(condition, ...)                                                \
  do {                                                                         \
    if (__builtin_expect(!(condition), 0)) {                                   \
      panic(__VA_ARGS__);                                                      \
    }                                                                          \
  } while (0);

#ifndef __GNUC__
#define __builtin_expect(a, b) a
#endif

#define SCAN_BASE_SIZE 64

// Make our array almost as large as the max buffer, with room for our Scanner
#define STACK_SIZE TREE_SITTER_SERIALIZATION_BUFFER_SIZE - SCAN_BASE_SIZE

typedef enum TokenType {
  INDENT,            // Start of indentation
  DEDENT,            // End of indentation
  NEWLINE,           // EOL or EOF, excluding backslashes
  STRING_START,      // `"`, or its tripled version
  STRING_END,        // Same as the above
  CONTENT_COMPONENT, // Raw contents of any string or command. Does not include
                     // escapes or interpolations.
  RAW_STRING_START,  // `'`, or its tripled version
  RAW_STRING_END,    // Same as the above
  COMMAND_START,     // `` ` `` or its triple`
  COMMAND_END,       // Same as the above
  INTERP_START,
  INTERP_END,
  TOKEN_TYPE_END, // Marker to make sure we never get an OOB element from TS
} TokenType;

void assert_valid_token(const TSSymbol sym) {
  assertf(sym >= INDENT && sym < TOKEN_TYPE_END, "invalid symbol %d", sym);
}

// Make our own enum for end delimiter (don't use a builting enum to save space)
typedef uint8_t Delimiter;
#define DELIM_START (Delimiter)0
#define DELIM_1_SINGLE_QUOTE (Delimiter)1  /* '   */
#define DELIM_3_SINGLE_QUOTES (Delimiter)2 /* ''' */
#define DELIM_1_DOUBLE_QUOTE (Delimiter)3  /* "   */
#define DELIM_3_DOUBLE_QUOTES (Delimiter)4 /* """ */
#define DELIM_1_BACKTICK (Delimiter)5      /* `   */
#define DELIM_3_BACKTICKS (Delimiter)6     /* ``` */
#define DELIM_2_BRACES (Delimiter)8        /* {{..}} */
#define DELIM_MAX (Delimiter)9

void assert_valid_delim(const Delimiter delim) {
  assertf(delim > DELIM_START && delim < DELIM_MAX, "invalid delimiter%d",
          delim);
}

/// If a tripled form exists, return it
bool to_triple(const Delimiter delim, Delimiter *out) {
  assert_valid_delim(delim);
  if (delim == DELIM_1_SINGLE_QUOTE) {
    *out = DELIM_3_SINGLE_QUOTES;
    return true;
  } else if (delim == DELIM_1_DOUBLE_QUOTE) {
    *out = DELIM_3_DOUBLE_QUOTES;
    return true;
  } else if (delim == DELIM_1_BACKTICK) {
    *out = DELIM_3_BACKTICKS;
    return true;
  } else {
    return false;
  }
}

/// Information about a given
typedef struct DelimInfo {
  TSSymbol end_symbol;  // Symbol to return with this delimiter
  char start_char;      // The start character to look for
  char end_char;        // The end character to look for
  uint8_t repeat;       // How many times this end character must be repeated
  bool backslash_pause; // if a `\` should the end of a content block
  bool braces_pause;    // if a `{{` should pause this content block
} DelimInfo;

DelimInfo delimiter_info(const Delimiter delim) {
  assert_valid_delim(delim);

  DelimInfo ret = {
      .end_symbol = 0,
      .start_char = 0,
      .end_char = 0,
      .repeat = 1,
      .backslash_pause = false,
      .braces_pause = false,
  };

  if (delim == DELIM_1_DOUBLE_QUOTE || delim == DELIM_3_DOUBLE_QUOTES) {
    ret.start_char = ret.end_char = '"';
    ret.end_symbol = STRING_END;
    ret.backslash_pause = true;
  } else if (delim == DELIM_1_SINGLE_QUOTE || delim == DELIM_3_SINGLE_QUOTES) {
    ret.start_char = ret.end_char = '\'';
    ret.end_symbol = RAW_STRING_END;
  } else if (delim == DELIM_1_BACKTICK || delim == DELIM_3_BACKTICKS) {
    ret.start_char = ret.end_char = '`';
    ret.end_symbol = COMMAND_END;
    ret.braces_pause = true;
  } else if (delim == DELIM_2_BRACES) {
    ret.start_char = '{';
    ret.end_char = '}';
    ret.end_symbol = INTERP_END;
  } else {
    panic("unreachable; got delimiter %d", delim);
  }

  if (delim == DELIM_3_SINGLE_QUOTES || delim == DELIM_3_DOUBLE_QUOTES ||
      delim == DELIM_3_BACKTICKS) {
    ret.repeat = 3;
  } else if (delim == DELIM_2_BRACES) {
    ret.repeat = 2;
  }

  return ret;
}

/// Our main state that is preserved between calls from Tree-Sitter
typedef struct Scanner {
  size_t len;           // length of the array stack
  uint32_t prev_indent; // indent level that will qualify for a dedent
  bool has_seen_eof;    // EOF has been counted and should not be accepted again
  Delimiter stack[STACK_SIZE];
} Scanner;

void scanner_debug(const Scanner *state) {
#ifdef DEBUG_PRINT
  dbg_print("scanner: len %zu indent %u eof %u stack [", state->len,
            state->prev_indent, state->has_seen_eof);
  for (size_t i = 0; i < state->len; ++i) {
    fprintf(stderr, "%d", state->stack[i]);
    if (i + 1 < state->len) {
      fprintf(stderr, ", ");
    }
  }
  fprintf(stderr, "]\n");
#endif
}

void push(Scanner *state, const Delimiter delim) {
  assertf(state->len <= STACK_SIZE, "attempting to push to full array");
  state->stack[state->len++] = delim;
}

Delimiter pop(Scanner *state) {
  assertf(state->len > 0, "attempting to pop empty array");
  return state->stack[--state->len];
}

Delimiter last(const Scanner *state) {
  assertf(state->len > 0, "attempting to peek empty array");
  return state->stack[state->len - 1];
}

/// Initialize our struct. We allocate once and store the array after our
/// struct. This makes serializing and deserializing much easier.
void *tree_sitter_just_external_scanner_create(void) {
  Scanner *state = malloc(sizeof(Scanner));
  assertf(state, "memory allocation failed");
  state->len = 0;
  state->prev_indent = 0;
  state->has_seen_eof = false;

  return state;
}

/// Deinitialize our scanner
void tree_sitter_just_external_scanner_destroy(void *payload) {
  assertf(payload, "got null payload at destroy");
  free(payload);
}

/// Serialize our scanner to a buffer
unsigned tree_sitter_just_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  Scanner *state = (Scanner *)payload;
  size_t to_write = SCAN_BASE_SIZE + state->len;

  assertf(to_write <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE,
          "invalid serialization; tried to write %zu bytes", to_write);
  memcpy(buffer, state, to_write);

  return to_write;
}

/// Deserialize our scanner from a buffer
void tree_sitter_just_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  Scanner *new_state = (Scanner *)payload;

  if (length == 0) {
    // No state to deserialize, just reset ourselves
    memset(new_state, 0, sizeof(Scanner));
  } else {
    // Otherwise, restore our copied data
    memcpy(new_state, buffer, length);
  }
}

/// Continue and include the preceding character in the token
void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

/// Continue and discard the preceding character
void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }
bool eof(const TSLexer *lexer) { return lexer->eof(lexer); }

/// Identify the start of a string. Detects the beginning of single or tripled
/// `'`, `"`, and `` ` `` block.
bool scan_string_start(TSLexer *lexer, Scanner *state, const Delimiter delim) {
  DelimInfo dinfo = delimiter_info(delim);
  if (lexer->lookahead != dinfo.start_char)
    return false;

  Delimiter tripled;
  assertf(to_triple(delim, &tripled),
          "got a delimiter that does not have a triple form");

  advance(lexer);
  mark_end(lexer);

  for (uint8_t count = 1; count < 3; ++count) {
    if (lexer->lookahead != dinfo.start_char) {
      // It's not a triple quoted delimiter, return a single
      push(state, delim);
      return true;
    }
    advance(lexer);
  }

  // We did find a triple quoted string
  mark_end(lexer);
  push(state, tripled);
  return true;
}

/// Identify the start of a `{{ ... }}` block
bool scan_interp_start(TSLexer *lexer, Scanner *state) {
  size_t braces_count = 0;
  while (lexer->lookahead == '{') {
    ++braces_count;
    advance(lexer);
  }

  if (braces_count >= 2 && braces_count < 4) {
    // 2 brackets make an interpolation, 4 escapes one
    dbg_print("located interpolation start\n");
    return true;
  }

  return false;
}

/// Scan for a `CONTENT_COMPONENT` body or for an `*_END` token.
///
/// Precondition: this may only be called when body or end symbols are valid,
/// i.e. we have already parsed an opening symbol and have it in our stack.
bool scan_body_or_end(TSLexer *lexer, Scanner *state) {
  if (state->len == 0) {
    dbg_print("empty stack, scan_string_content = false\n");
    return false; // Stack is empty. We're not in a string.
  }

  Delimiter end_delim = last(state); // peek
  DelimInfo dinfo = delimiter_info(end_delim);

  dbg_print(
      "scanning for end char '%c', repeat %d backslash %d, braces %d end %d\n",
      dinfo.end_char, dinfo.repeat, dinfo.backslash_pause, dinfo.braces_pause,
      dinfo.end_symbol);

  // If returning `CONTENT_COMPONENT`, only return `true` if we actually
  // parsed something nonempty.
  bool has_content = false;

  while (!eof(lexer)) {
    // Handle string escapes
    if (dinfo.backslash_pause && lexer->lookahead == '\\') {
      mark_end(lexer);

      dbg_print("located escape, scan_string_content = %d\n", has_content);
      lexer->result_symbol = CONTENT_COMPONENT;
      return has_content;
    }

    // Handle interpolation starts
    if (dinfo.braces_pause && lexer->lookahead == '{') {
      mark_end(lexer);
      size_t braces_count = 0;

      while (lexer->lookahead == '{') {
        ++braces_count;
        advance(lexer);
      }

      if (braces_count >= 2 && braces_count < 4) {
        // 2 brackets make an interpolation, 4 escapes one
        dbg_print("located interpolation start, scan_string_content = true\n");
        lexer->result_symbol = CONTENT_COMPONENT;
        return has_content;
      }

      // no escape found, continue matching a string
      mark_end(lexer);
    }

    if (lexer->lookahead == dinfo.end_char) {
      bool found_end = true;
      if (dinfo.repeat > 1) {
        mark_end(lexer);

        for (uint8_t count = 1; count < dinfo.repeat; ++count) {
          advance(lexer);
          dbg_print("advance to '%c' %d\n", lexer->lookahead, count);
          if (lexer->lookahead != dinfo.end_char) {
            found_end = false;
            break;
          }
        }
      }

      if (found_end) {
        dbg_print("located end of %n*%d-delimited string\n", dinfo.end_char,
                  dinfo.repeat);
        if (has_content) {
          // Found the end of content
          lexer->result_symbol = CONTENT_COMPONENT;
        } else {
          // No further content, return the end delimiter
          pop(state);
          advance(lexer);
          mark_end(lexer);
          lexer->result_symbol = dinfo.end_symbol;
        }
      }

      return true;
    }

    advance(lexer);
    mark_end(lexer);
    has_content = true;
  }

  dbg_print("string content not found");
  return false;
}

/// An EOF works as a dedent
bool handle_eof(TSLexer *lexer, Scanner *state, const bool *valid_symbols) {
  assertf(eof(lexer), "expected EOF");
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
  fprintf(stderr, ", lookahead: '%c' (0x%x)\n", *lookahead, *lookahead);
  scanner_debug(state);
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
      dbg_print("located newline\n");
      lexer->result_symbol = NEWLINE;
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
      default:
        skip(lexer);
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

  if ((valid_symbols[CONTENT_COMPONENT] || valid_symbols[STRING_END] ||
       valid_symbols[RAW_STRING_END] || valid_symbols[COMMAND_END]) &&
      scan_body_or_end(lexer, payload)) {
    assertf(valid_symbols[lexer->result_symbol], "invalid result symbol %d",
            lexer->result_symbol);
    return true;
  }

  if (valid_symbols[STRING_START] &&
      scan_string_start(lexer, state, DELIM_1_DOUBLE_QUOTE)) {
    dbg_print("scanned string start; returning\n");
    lexer->result_symbol = STRING_START;
    return true;
  }

  if (valid_symbols[RAW_STRING_START] &&
      scan_string_start(lexer, state, DELIM_1_SINGLE_QUOTE)) {
    dbg_print("located raw string start; returning\n");
    lexer->result_symbol = RAW_STRING_START;
    return true;
  }

  if (valid_symbols[COMMAND_START] &&
      scan_string_start(lexer, state, DELIM_1_BACKTICK)) {
    dbg_print("located command start; returning\n");
    lexer->result_symbol = COMMAND_START;
    return true;
  }

  dbg_print("no tokens found; returning false\n");
  return false;
}
