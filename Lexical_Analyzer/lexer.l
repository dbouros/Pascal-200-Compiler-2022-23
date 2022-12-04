/* DEFINES */
%{
    /* includes */
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>
    #include "lexer.h"

    // TODO: Fix yylineno to properly return the codeline !
    void token_Print(int token_val);

%}

%option noyywrap   
/* Allows only one file as input. */
%option case-insensitive 
%option yylineno
/* Counts the lines of the code. */

/* RULES */
/* Tokens named: LISTFUNC, STRING, ID, CONSTS(4) may need to be changed*/
%%
"PROGRAM"                                           {token_Print(PROGRAM_T); return PROGRAM_T;}
"CONST"                                             {token_Print(CONST_T); return CONST_T;}
"TYPE"                                              {token_Print(TYPE_T); return TYPE_T;}
"ARRAY"                                             {token_Print(ARRAY_T); return ARRAY_T;}
"LIST"                                              {token_Print(LIST_T); return LIST_T;}
"SET"                                               {token_Print(SET_T); return SET_T;}
"OF"                                                {token_Print(OF_T); return OF_T;}
"RECORD"                                            {token_Print(RECORD_T); return RECORD_T;}
"VAR"                                               {token_Print(VAR_T); return VAR_T;}
"FUNCTION"                                          {token_Print(FUNCTION_T); return FUNCTION_T;}
"PROCEDURE"                                         {token_Print(PROCEDURE_T); return PROCEDURE_T;}
"INTEGER"                                           {token_Print(INTEGER_T); return INTEGER_T;}
"REAL"                                              {token_Print(REAL_T); return REAL_T;}
"BOOLEAN"                                           {token_Print(BOOLEAN_T); return BOOLEAN_T;}
"CHAR"                                              {token_Print(CHAR_T); return CHAR_T;}
"FORWARD"                                           {token_Print(FORWARD_T); return FORWARD_T;}
"LENGTH"                                            {token_Print(LENGTH_T); return LENGTH_T;}
"NEW"                                               {token_Print(NEW_T); return NEW_T;}
"BEGIN"                                             {token_Print(BEGIN_T); return BEGIN_T;}
"END"                                               {token_Print(END_T); return END_T;}
"IF"                                                {token_Print(IF_T); return IF_T;}
"THEN"                                              {token_Print(THEN_T); return THEN_T;}
"ELSE"                                              {token_Print(ELSE_T); return ELSE_T;}
"WHILE"                                             {token_Print(WHILE_T); return WHILE_T;}
"DO"                                                {token_Print(DO_T); return DO_T;}
"CASE"                                              {token_Print(CASE_T); return CASE_T;}
"OTHERWISE"                                         {token_Print(OTHERWISE_T); return OTHERWISE_T;}
"FOR"                                               {token_Print(FOR_T); return FOR_T;}
"TO"                                                {token_Print(TO_T); return TO_T;}
"DOWNTO"                                            {token_Print(DOWNTO_T); return DOWNTO_T;}
"WITH"                                              {token_Print(WITH_T); return WITH_T;}
"READ"                                              {token_Print(READ_T); return READ_T;}
"WRITE"                                             {token_Print(WRITE_T); return WRITE_T;}

"ID"                                                {token_Print(ID_T); return ID_T;}

"ICONST"                                            {token_Print(ICONST_T); return ICONST_T;}
"RCONST"                                            {token_Print(RCONST_T); return RCONST_T;}
"TRUE"|"FALSE"                                      {token_Print(BCONST_T); return BCONST_T;}
"CCONST"                                            {token_Print(CCONST_T); return CCONST_T;}

">" | ">=" | "<" | "<=" | "<>"                      {token_Print(RELOP_T); return RELOP_T;}
"+" | "-"                                           {token_Print(ADDOP_T); return ADDOP_T;}
"OR"                                                {token_Print(OROP_T); return OROP_T;}
"*" | "/" | "DIV" | "MOD" | "AND"                   {token_Print(MULDIVANDOP_T); return MULDIVANDOP_T;}
"NOT"                                               {token_Print(NOTOP_T); return NOTOP_T;}
"IN"                                                {token_Print(INOP_T); return INOP_T;}

"LISTFUNC"                                          {token_Print(LISTFUNC_T); return LISTFUNC_T;}

"STRING"                                            {token_Print(STRING_T); return STRING_T;}

"("                                                 {token_Print(LPAREN_T); return LPAREN_T;}
")"                                                 {token_Print(RPAREN_T); return RPAREN_T;}
";"                                                 {token_Print(SEMI_T); return SEMI_T;}
"."                                                 {token_Print(DOT_T); return DOT_T;}
","                                                 {token_Print(COMMA_T); return COMMA_T;}
"="                                                 {token_Print(EQU_T); return EQU_T;}
":"                                                 {token_Print(COLON_T); return COLON_T;}
"["                                                 {token_Print(LBRACK_T); return LBRACK_T;}
"]"                                                 {token_Print(RBRACK_T); return RBRACK_T;}
":="                                                {token_Print(ASSIGN_T); return ASSIGN_T;}
".."                                                {token_Print(DOTDOT_T); return DOTDOT_T;}

.                                                   {printf("Unknown token found\n");}
<<EOF>>                                             { printf("(EOF)->Reached! File Closed!\n"); return EOF_T; }
%%

/* FUNCTIONS */
// Main
int main(int argc, char* argv[]){
    
    if (argc > 1){                          // Check for arguments
        yyin = fopen(argv[1], "r");         // Open argument file 

        if (yyin == NULL){                  // Error check for argument
            perror("Can't open file!\n");
            return -1;
        }
    }
    
    int token;

    do{

        token = yylex();                    // Go through the file

    }while(token != 0);                     // Until we reach EOF

    fclose(yyin);                           // Close argument file
    yyterminate();                          // End lexycal analysis
        
    return 0;
}

void token_Print(int token_val){
    printf("Token found: %s, Token value: %d, Program line: %d\n", yytext, token_val, yylineno);
}
