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
/* Counts the lines of the code. */
%option noyywrap   
/* Allows only one file as input. */

/* RULES */
%%

%%

/* FUNCTIONS */
int main(int argc, char* argv[]){

    if (argc > 1){                          // Check for arguments
        yyin = fopen(argv[1], "r");         // Open argument file 

        if (yyin = NULL){                   // Error check for argument
            perror("Can't open file!");
        }
        return -1;
    }

    int token;

    do{

        token == yylex();                   // Go through the file

    }while(token != 0)                      // Until we reach EOF

    fclose(yyin);                           // Close argument file
    yyterminate();                          // End lexycal analysis
        
    return 0;
}