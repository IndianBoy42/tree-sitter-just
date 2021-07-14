#include <stdio.h>
#include <tree_sitter/parser.h>

#include <algorithm>
#include <cassert>
#include <cstring>
#include <cwctype>
#include <string>
#include <vector>

enum TokenType { INDENT, DEDENT, NEWLINE };

struct ScannerState {
	uint32_t prev_indent;
};

extern "C" {

// This function should create your scanner object. It will only be called once anytime your
// language is set on a parser. Often, you will want to allocate memory on the heap and return a
// pointer to it. If your external scanner doesn’t need to maintain any state, it’s ok to return
// NULL.
void *tree_sitter_just_external_scanner_create() { return new ScannerState(); }

// This function should free any memory used by your scanner. It is called once when a parser is
// deleted or assigned a different language. It receives as an argument the same pointer that was
// returned from the create function. If your create function didn’t allocate any memory, this
// function can be a noop.
void tree_sitter_just_external_scanner_destroy(void *payload) {
	delete static_cast<ScannerState *>(payload);
}

// Serialize the state of the scanner. This is called when the parser is serialized. It receives as
// an argument the same pointer that was returned from the create function.
unsigned tree_sitter_just_external_scanner_serialize(void *payload, char *buffer) {
	// ...
	char *start = buffer;
	const ScannerState *state = static_cast<ScannerState *>(payload);
	// Convert curr_indent and prev_indent to string and push to buffer
	auto curr = std::to_string(state->prev_indent);
	memcpy(buffer, curr.c_str(), curr.size());
	buffer += curr.size();
	return buffer - start;
}

// Reconstruct a scanner from the serialized state. This is called when the parser is deserialized.
void tree_sitter_just_external_scanner_deserialize(void *payload, const char *buffer,
												   unsigned length) {
	// ...
	ScannerState *state = static_cast<ScannerState *>(payload);
	const char *end = buffer + length;
	// convert string to curr_indent
	state->prev_indent = std::stoi(std::string(buffer, end));
}

// This function is responsible for recognizing external tokens. It should return true if a token
// was recognized, and false otherwise.
bool tree_sitter_just_external_scanner_scan(void *payload, TSLexer *lexer,
											const bool *valid_symbols) {
	ScannerState *state = static_cast<ScannerState *>(payload);
	int32_t &lookahead = lexer->lookahead;
	TSSymbol &result_symbol = lexer->result_symbol;
	auto advance = [lexer] { lexer->advance(lexer, false); };
	auto skip = [lexer] { lexer->advance(lexer, true); };
	void (*mark_end)(TSLexer *) = lexer->mark_end;
	auto get_column = [lexer] { return lexer->get_column(lexer); };
	bool (*is_at_included_range_start)(const TSLexer *) = lexer->is_at_included_range_start;

	bool eol = false;
	int indent = 0;
	while (std::iswspace(lookahead)) {
		switch (lookahead) {
			case '\n':
			case '\r':
				eol = true;
				skip();
				break;

			case '\t':
			case ' ':
				indent++;
				break;

			case '#':
				// Skip past the whole comment
				while (lexer->lookahead && lexer->lookahead != '\n') {
					skip();
				}
				skip();
				indent = 0;
				break;

			default:
				break;
		}
	}

	if (eol) {
		if (indent != 0 && state->prev_indent == 0) {
			result_symbol = INDENT;
		} else if (indent == 0 && state->prev_indent != 0) {
			result_symbol = DEDENT;
		} else if (indent != state->prev_indent) {
			// Technically an error, idk what to do
			return false;
		}
		if (valid_symbols[result_symbol]) {
			return true;
		} else if (valid_symbols[NEWLINE]) {
			// This should be if indent == state->prev_indent
			result_symbol = NEWLINE;
			return true;
		}
	}

	return false;
}
}