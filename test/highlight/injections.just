
# Injection highlighting shows up as none during tests
localhost := `if [ -f "foo" ]; then; echo hi; fi`
# <- variable
#         ^^ operator
#            ^ punctuation.special
#                                               ^ punctuation.special

stuff := ```
	echo foo
	echo bar
```
# <- punctuation.special

foo:
	echo "hello {{ bar }}"
