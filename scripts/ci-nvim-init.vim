" This script is used by CI"

" Install vim-plug
let data_dir = has('nvim') ? stdpath('data') . '/site' : '~/.vim'
if empty(glob(data_dir . '/autoload/plug.vim'))
  silent execute '!curl -fLo '.data_dir.'/autoload/plug.vim --create-dirs  https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim'
  autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

call plug#begin()

" Install treesitter
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}

" Install our local workspace
require("nvim-treesitter.parsers").get_parser_configs().just = {
  install_info = {
    url = "${{ github.workspace }}/tree-sitter-just", -- local path or git repo
    files = { "src/parser.c", "src/scanner.c" },
    branch = "main",
    -- use_makefile = true -- this may be necessary on MacOS (try if you see compiler errors)
  },
  maintainers = { "@IndianBoy42" },
}

call plug#end()

lua <<ENDLUA

require'nvim-treesitter.configs'.setup {
  ensure_installed = {"just"},
  highlight = {enable = true},
  indent = {enable = true},
}

require"tree-sitter-just".setup {}

ENDLUA
