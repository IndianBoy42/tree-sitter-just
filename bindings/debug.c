// Demo that parses the first argument. Useful for attaching a debugger.

#include "tree_sitter/api.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

TSLanguage *tree_sitter_just();

size_t MAX_LEN = 10 * 1024; // 10k

int main(int argc, char **argv) {
  TSParser *parser = ts_parser_new();
  ts_parser_set_language(parser, tree_sitter_just());

  assert(argc == 2 && "must provide a file name");

  if (argc < 2) {
    printf("must provide one or more file names\n");
    return 1;
  }

  size_t alloc_size = 1024;
  char *data = malloc(alloc_size);
  assert(data);

  for (int i = 1; i < argc; ++i) {
    FILE *fp = fopen(argv[i], "r");
    fseek(fp, 0L, SEEK_END);
    size_t file_size = ftell(fp);
    rewind(fp);

    if (file_size > alloc_size) {
      data = realloc(data, file_size);
      assert(data);
      alloc_size = file_size;
    }

    // Build a syntax tree based on source code stored in a string.
    TSTree *tree = ts_parser_parse_string(parser, NULL, data, file_size);
    TSNode root_node = ts_tree_root_node(tree);
    assert(ts_node_child_count(root_node) > 0);

    // Free all of the heap-allocated memory.
    ts_tree_delete(tree);
    ts_parser_delete(parser);
  }
  return 0;
}
