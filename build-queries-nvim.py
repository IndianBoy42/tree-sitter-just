#!/usr/bin/env python3
"""Generate NeoVim queries.

Everything in `queries/` uses tree-sitter syntax, as defined at
<https://tree-sitter.github.io/tree-sitter/syntax-highlighting#theme>. However, NVim
has a slightly different syntax.

This file performs conversions so two sets of files don't need to be maintained.

<https://docs.helix-editor.com/master/themes.html#syntax-highlighting> has a bit better
guide for these parameters than tree-sitter does.
    
"""

REPLACEMENTS = [
    ("@local.definition", "@definition.variable"),
    ("@constants.builtin.boolean", "@boolean"),
    ("@keyword.control.conditional", "@conditional"),
    ("@variable.parameter", "@parameter"),
    ("@comment.line", "@comment"),
]
