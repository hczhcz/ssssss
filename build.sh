#!/bin/sh
# simple builder, for convenience only
echo "## Cleanup"
rm ./*.o
rm ./project.out
echo "## Lint"
cppcheck --enable=all -f --inconclusive -q -v ./
echo "## Compile"
g++ -c -Wall -Werror -pedantic -g -ggdb -pg -o "common.o" "common.cpp"
g++ -c -Wall -Werror -pedantic -g -ggdb -pg -o "project.o" "project.cpp"
g++ "common.o" "project.o" -Wall -Werror -o "project.out"
# g++ -Wall -Werror -pedantic -g -ggdb -pg -o "project.out" "project.cpp"
# g++ -O3 -o "project.out" "project.cpp"
echo "## Run"
valgrind -q ./project.out
echo "## Fin"
read var
