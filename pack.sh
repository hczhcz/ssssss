#!/bin/sh
# 7z packing tool, for convenience only
echo "## Cleanup"
rm ./work.zip
echo "## Add"
zip work.zip *.cpp *.hpp *.cppgen *.sh *.md LICENSE project.out
echo "## Fin"
read var
