#!/bin/sh
# git committing tool, for convenience only
echo "## Add"
git add *.cpp
git add *.hpp
git add *.sh
git add *.md
git add LICENSE
echo "## Commit"
git commit
echo "## Show"
gitk
