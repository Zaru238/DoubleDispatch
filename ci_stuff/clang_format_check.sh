#!/bin/bash

find -name "*.h" -o -name "*.hpp" -o -name "*.c" -o -name "*.cpp" |
xargs clang-format -style=file -output-replacements-xml |
grep "<replacement " >/dev/null
if [ $? -ne 1 ]; then
	echo "Commit didn't pass clang-format check"
	exit 1
fi

exit