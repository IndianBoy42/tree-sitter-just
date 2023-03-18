# tree-sitter-just

WIP: Tree-sitter grammar for Justfiles ([casey/just](https://github.com/casey/just))

To use treesitter based highlighting, folds etc. the queries need to be added to the runtimepath, until I get a PR into `nvim-treesitter/nvim-treesitter` you can install this repo as a plugin using Plug/packer/manual clone etc. This plugin also adds a simple `ftdetect` plugin for detecting

Packer:

```lua
use "IndianBoy42/tree-sitter-just"
```

Plug

```vimscript
Plug 'IndianBoy42/tree-sitter-just'
```

Manual

```
git clone https://github.com/IndianBoy42/tree-sitter-just ~/.local/share/nvim/site/pack/tree-sitter-queries/start/tree-sitter-just
```

You can then do `require('tree-sitter-just').setup()` to register the parser with tree-sitter. You can then do `TSInstall`/`TSUpdate` as usual to install the parser

You can also add the parser manually using (This is similar to what is done in `require"tree-sitter-just".setup()`)

```lua
require("nvim-treesitter.parsers").get_parser_configs().just = {
  install_info = {
    url = "https://github.com/IndianBoy42/tree-sitter-just", -- local path or git repo
    files = { "src/parser.c", "src/scanner.cc" },
    branch = "main",
    -- use_makefile = true -- this may be necessary on MacOS (try if you see compiler errors)
  },
  maintainers = { "@IndianBoy42" },
}
```

Dont forget to `:TSInstall` after adding this. With this method you do not have to add this repo as a plugin

## Testing

Building locally:

```
npm run gen
npm run test
tree-sitter parse test/test.just
```

You can use the `nvim-treesitter/playground` plugin [from here](https://github.com/nvim-treesitter/playground), to explore the resulting parse tree. Use `TSPlaygroundToggle` to view the parse tree, and use `TSHighlightCapturesUnderCursor` to view highlight groups

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
  - [ ] Write the queries
- [x] Implement support for code folding using `nvim-treesitter` (`folds.scm`)
  - [x] Write the queries
- [ ] Write Tests
- [x] Highlight the fish/bash/etc inside recipes (use tree-sitter injections)
- [ ] Fix weirdness around trailing whitespace (dont leave trailing whitespace after the recipe header)
