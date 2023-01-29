#!/bin/bash

echo -e "Please give a command.\n"
echo -e "Command must be either 0 or 1!"
echo "0 = Run flex and bison along with the outputs."
echo -e "1 = Delete all output files after the run process (Must run 0 first).\n"

read -p "Give command: " value

echo "Running command $value:"

if [ $value -eq 0 ]
then
    echo -e "\nExecuting Flex and Bison.\n"
    echo "flex lexer.l && bison -v -d bison.y"
    flex lexer.l && bison -v -d bison.y
    echo -e "\nCompiling C programs with gcc compiler.\n"
    echo -e "gcc bison.tab.c lex.yy.c -lfl -lm \n"
    gcc bison.tab.c lex.yy.c -lfl -lm
    echo -e "\nExecuting a.out using argument from pointer yyin.\n"
    ./a.out ../pasc200tests/test1.p

elif [ $value -eq 1 ]
then
    rm bison.output
    rm bison.tab.h
    rm bison.tab.c
    rm lex.yy.c
    rm a.out

    echo -e "\nProject's folder cleaned !!\n"

else
    echo -e "Invalid command! Please choose either 0 or 1.\n"
fi