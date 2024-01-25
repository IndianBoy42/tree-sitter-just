// Demo that parses the first argument. Useful for attaching a debugger.

#include "tree_sitter/api.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

TSLanguage *tree_sitter_just();

size_t MAX_LEN = 10 * 1024; // 10k

int main(int argc, char **argv) {
  TSParser *parser = ts_parser_new();
  ts_parser_set_language(parser, tree_sitter_just());

  assert(argc == 2);
  const char *data = argv[0];
  const size_t len = strlen(data);

  // Build a syntax tree based on source code stored in a string.
  TSTree *tree = ts_parser_parse_string(parser, NULL, data, len);
  TSNode root_node = ts_tree_root_node(tree);
  assert(ts_node_child_count(root_node) > 0);

  // Free all of the heap-allocated memory.
  ts_tree_delete(tree);
  ts_parser_delete(parser);
  return 0;
}
