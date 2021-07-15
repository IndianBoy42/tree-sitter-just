# tree-sitter-just

WIP: Tree-sitter grammar for Justfiles ([casey/just](https://github.com/casey/just))

```
npm run gen
npm run test
tree-sitter parse test/test.just
```

You can try it by adding it to nvim-treesitter using

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.just = {
  install_info = {
    url = "https://github.com/IndianBoy42/tree-sitter-just", -- local path or git repo
    files = { "src/parser.c", "src/scanner.cc" },
  },
}
```

You can use the `nvim-treesitter/playground` plugin [from here](https://github.com/nvim-treesitter/playground), to explore the resulting parse tree.

## TODO

- [x] Implement a basic parser that is able to understand all features of Justfiles
- [ ] Implement queries for highlighting using `nvim-treesitter` ([reference](https://tree-sitter.github.io/tree-sitter/syntax-highlighting), `highlights.scm`)
- [ ] Implement queries for textobjects compatible with [`nvim-treesitter/nvim-treesitter-textobjects`](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)
  - [ ] @block.inner|outer
  - [ ] @call.inner|outer
  - [ ] @class.inner|outer
  - [ ] @comment.outer
  - [ ] @conditional.inner|outer
  - [ ] @frame.inner|outer
  - [ ] @function.inner|outer
  - [ ] @loop.inner|outer
  - [ ] @parameter.inner|outer
  - [ ] @scopename.inner|outer
- [ ] Implement support for indentation using `nvim-treesitter`
- [ ] Implement support for code folding using `nvim-treesitter` (`folds.scm`)
