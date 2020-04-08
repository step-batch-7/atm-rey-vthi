#! /bin/zsh

rm -rf bin

gcc -c *.c
mkdir bin
gcc -o ./bin/main *.o
rm -rf *.o

./bin/main