/* DEFINES */
%{
    /* includes */
    #include "lexer.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>

    void token_Print(int token_val);

%}

%option case-insensitive 
%option yylineno
/* Counts the lines of the code. */
%option noyywrap   
/* Allows only one file as input. */

/* RULES */
%%
"PROGRAM"                           {token_Print(PROGRAM_T); return PROGRAM_T;}
"CONST"                             {token_Print(CONST_T); return CONST_T;}
"TYPE"                              {token_Print(TYPE_T); return TYPE_T;}
"ARRAY"
"LIST"
"SET"
"OF"
"RECORD"
"VAR"
"FUNCTION"
"PROCEDURE"
"INTEGER"
"REAL"
"BOOLEAN"
"CHAR"
"FORWARD"
"LENGTH"
"NEW"
"BEGIN"
"END"
"IF"
"THEN"
"ELSE"
"WHILE"
"DO"
"CASE"
"OTHERWISE"
"FOR"
"TO"
"DOWNTO"
"WITH"
"READ"
"WRITE"

"ID"

"ICONST"
"RCONST"
"BCONST"
"CCONST"

"RELOP"
"ADDOP"
"OROP"
"MULDIVANDOP"
"NOTOP"
"INOP"

"LISTFUNC"

"STRING"

"LPAREN"
"RPAREN"
"SEMI"
"DOT"
"COMMA"
"EQU"
"COLON"
"LBRACK"
"RBRACK"
"ASSIGN"
"DOTDOT"

<<EOF>>                             {return EOF_T;}
.                                   {printf("Unknown token found");}
%%

/* FUNCTIONS */
// Main
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

void token_Print(int token_val){
        printf("Token found: %s, Token value: %d, Program line: %d", yytext, token_val, yylineno);
}
