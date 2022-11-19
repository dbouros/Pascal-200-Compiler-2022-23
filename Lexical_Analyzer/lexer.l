/* DEFINES */
%{
    /* includes */
    #include "lexer.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>

%}

%option case-insensitive 
%option yylineno
/* Counts one by one each line of the code that we are parsing. */
%option noyywrap   
/* Allows only one file as input. */

/* RULES */
%%

%%

/* FUNCTIONS */
int main(int argc, char* argv[]){
        
    return 0;
}