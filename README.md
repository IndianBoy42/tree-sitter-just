# tree-sitter-just

WIP: Tree-sitter grammar for Justfiles ([casey/just](https://github.com/casey/just))

For local testing:
```
npm run gen
npm run test
tree-sitter parse test/test.just
```

You can try the parser by adding it to nvim-treesitter using
```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.just = {
  install_info = {
    url = "https://github.com/IndianBoy42/tree-sitter-just", -- local path or git repo
    files = { "src/parser.c", "src/scanner.cc" },
    branch = "main",
  },
  maintainers = { "@IndianBoy42" },
}
```

You can use the `nvim-treesitter/playground` plugin [from here](https://github.com/nvim-treesitter/playground), to explore the resulting parse tree.

To use treesitter based highlighting, folds etc. the queries need to be added to the runtimepath, until I get a PR into `nvim-treesitter/nvim-treesitter` you can install this repo as a plugin using Plug/packer/manual clone etc. This plugin also adds a simple `ftdetect` plugin for detecting 

```lua
use "IndianBoy42/tree-sitter-just"
```
```vimscript
Plug 'IndianBoy42/tree-sitter-just'
```
```
git clone https://github.com/IndianBoy42/tree-sitter-just ~/.local/share/nvim/site/pack/tree-sitter-queries/start/tree-sitter-just
```

## TODO

- [x] Implement a basic parser that is able to understand all features of Justfiles
- [x] Implement support for highlighting using `nvim-treesitter` ([reference](https://tree-sitter.github.io/tree-sitter/syntax-highlighting), `highlights.scm`)
  - [x] Write the queries
  - [x] Implement locals queries
- [x] Implement queries for textobjects compatible with [`nvim-treesitter/nvim-treesitter-textobjects`](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)
  - [x] Write the queries
    - [x] @block.inner|outer (recipe)
    - [x] @function.inner|outer (recipe)
    - [x] @call.inner|outer (dependencies)
    - [x] @comment.outer
    - [x] @parameter.inner|outer
    - [x] @conditional.inner|outer
    - [x] @statement.outer (recipe line or one variable)
  - [x] Definitions and references
  - [ ] Scopenames
- [ ] Implement support for indentation using `nvim-treesitter`
  - [x] Write the queries
- [x] Implement support for code folding using `nvim-treesitter` (`folds.scm`)
  - [x] Write the queries
- [ ] Write Tests
- [ ] Highlight the fish/bash/etc inside recipes (use tree-sitter injections)
    - [ ] Need to see if I can determine the injection from the shebang
- [ ] Fix weirdness around trailing whitespace (dont leave trailing whitespace after the recipe header)
