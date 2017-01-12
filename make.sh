#!/bin/bash

cd memphis-1.9/memphis && ./build && cd ../../
cd memphis-1.9/mrts && ./build && cd ../../
lex scanner.l
yacc -d grammer.y
memphis-1.9/memphis/memphis -h ast.m
memphis-1.9/memphis/memphis ast.m
memphis-1.9/memphis/memphis interpreter.m
gcc -c lex.yy.c
gcc -c y.tab.c
g++ -c ast.cpp
g++ -c interpreter.cpp
g++ -o interpreter *.o memphis-1.9/mrts/mrts.o
