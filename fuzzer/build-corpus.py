#!/usr/bin/env python3
"""Turn our tests into a corpus for the fuzzer (one test per file)
"""

from pathlib import Path
import re

RE = r"===+\n(?P<name>.*?)\n===+\n(?P<source>.*?)\n---+"

def main():
    repo = Path(__file__).parent.parent
    ts_corpus_files = (repo / "test" / "corpus").glob("*.txt")

    corpus = {}

    for fname in ts_corpus_files:
        text = fname.read_text()
        prefix = fname.name.rstrip(".txt")

        for match in re.finditer(RE, text, re.MULTILINE | re.DOTALL):
            name = match.group("name").replace(" ", "_")
            name = f"{prefix}_{name}.just"
            source = match.group("source")
            corpus[name] = source

    out_dir = repo / "fuzzer" / "corpus"
    out_dir.mkdir(exist_ok=True)

    # Clear the corpus
    for existing in out_dir.iterdir():
        existing.unlink()

    for (name, source) in corpus.items():
        out_file: Path = out_dir / name
        out_file.write_text(source)


if __name__ == "__main__":
    main()
