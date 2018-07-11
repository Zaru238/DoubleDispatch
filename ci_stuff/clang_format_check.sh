#!/bin/bash

git diff --cached --name-only --diff-filter=ACMRT |
grep -E -i ".*\.(h|hpp|c|cpp)" |
xargs clang-format -style=file -output-replacements-xml |
grep "<replacement " >/dev/null
if [ $? -ne 1 ]; then
	echo "Commit didn't pass clang-format check"
	exit 1
fi

exit
