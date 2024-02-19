set shell := ["python", "-c"]
set dotenv-filename := ".env-local"
set dotenv-load

recipe:
	print("foo") \
	if bar: \
		a += b \
	if (baz) { \
		abcd() \
	}
