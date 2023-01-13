echo -e "\nExecuting Flex and Bison\n"
flex lexer.l && bison -v -d bison.y
echo -e "\nExecuting C programs with gcc compiler\n"
gcc bison.tab.c lex.yy.c -lfl -lm
