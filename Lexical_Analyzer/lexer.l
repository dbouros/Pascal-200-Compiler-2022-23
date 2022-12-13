/* TODO List: */
/*       1) Fix yylineno to properly return the codeline. */
/*       2) Define simple regex with words (Position before rules). */
/*       3) After Keywords (PROGRAM-WRITE) --> Regex () */
/*       4) Create function for str_int(char *str) -> (int) conversion for requested number base(2, 10, 16). */
/*       5) After step 4, update token_Print() to return num token of any base(2, 10, 16) to base "10". */
/*       6) If steps 4,5 are correct, create function(s) to convert same string to (real) type. */
/*       7) Create SubLexer within Rules(with RegEx) to catch Strings and Comments. */

/* DEFINES */
%{
    /* includes */
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>
    #include "lexer.h"

    void token_Print(int token_val);
    int str_int(char *str);

%}

/* Allows only one file as input. */
%option noyywrap  
/* Ignores the diference between uppercase and lowercase letters. */
%option case-insensitive 
/* Counts the lines of the code. */
%option yylineno

/* Helpful Defines. */
LETTER              [a-zA-Z]
ALPHANUM            [a-zA-Z0-9]
ALPHANUM_           [a-zA-Z0-9_]

/* Identifier(ID) */
/*ID                (_?[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])|[a-zA-Z] */
ID                  (_?{LETTER}{ALPHANUM_}*{ALPHANUM})|{LETTER}

/* Integer Constants(ICONST) */
INTEGER_CONSTANT    [1-9][0-9]*|0
BIN_INT             0[Bb][1][01]*
HEX_INT             0[Xx][A-F1-9][A-F0-9]*

/* Real Constants(RCONST) */
/*REAL              (0)|([1-9][0-9]*)?(\.)(0*[1-9]+[0-9]*|0) */
REAL_WITH_EXPONENT  (0|([1-9][0-9]*)?(\.)(0*[1-9]+[0-9]*|0))(E[+-]?(0|[1-9][0-9]*))?
INT_WITH_EXPONENT   (0|([1-9][0-9]*))(E[+-]?(0|[1-9][0-9]*))


WHITESPACE          [ \t]
NEW_LINE_LINUX      [\n]
NEW_LINE_WINDOWS    [\r\n]

/* RULES */
/* Tokens named: LISTFUNC, STRING, ID, (I,R,B,C)CONST may need to be changed*/
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

">"|">="|"<"|"<="|"<>"                              {token_Print(RELOP_T); return RELOP_T;}
"+"|"-"                                             {token_Print(ADDOP_T); return ADDOP_T;}
"OR"                                                {token_Print(OROP_T); return OROP_T;}
"*"|"/"|"DIV"|"MOD"|"AND"                           {token_Print(MULDIVANDOP_T); return MULDIVANDOP_T;}
"NOT"                                               {token_Print(NOTOP_T); return NOTOP_T;}
"IN"                                                {token_Print(INOP_T); return INOP_T;}

"LISTFUNC"                                          {token_Print(LISTFUNC_T); return LISTFUNC_T;}

{INTEGER_CONSTANT}                                  {token_Print(ICONST_T); return ICONST_T;}
{BIN_INT}                                           {token_Print(ICONST_T); return ICONST_T;}
{HEX_INT}                                           {token_Print(ICONST_T); return ICONST_T;}

{REAL_WITH_EXPONENT}                                {token_Print(RCONST_T); return RCONST_T;}
{INT_WITH_EXPONENT}                                 {token_Print(RCONST_T); return RCONST_T;}

"TRUE"|"FALSE"                                      {token_Print(BCONST_T); return BCONST_T;}
"CCONST"                                            {token_Print(CCONST_T); return CCONST_T;}

"STRING"                                            {token_Print(STRING_T); return STRING_T;}

{ID}                                                {token_Print(ID_T); return ID_T;}

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

{WHITESPACE}                                        { }
{NEW_LINE_LINUX}                                    { }
{NEW_LINE_WINDOWS}                                  { }

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

    if(token_val == ICONST_T){
        if(strncmp(yytext, "0B", 2) == 0){
            printf("Number(Binary) found: %s --> Decimal value: %d --> Token value: %d --> Program line: %d\n", yytext, str_int(yytext), token_val, yylineno);
        }else if(strncmp(yytext, "0X", 2) == 0){
            printf("Number(Hexadecimal) found: %s --> Decimal value: %d --> Token value: %d --> Program line: %d\n", yytext, str_int(yytext), token_val, yylineno);
        }else{
            printf("Number(Decimal) found: %d --> Token value: %d --> Program line: %d\n", str_int(yytext), token_val, yylineno);
        }
    }else{
        printf("Token found: %s --> Token value: %d --> Program line: %d\n", yytext, token_val, yylineno);
    }
/*    if(token_val == ID_T){
        printf("Token found: %s --> Token value: %d --> Program line: %d\n", yytext, token_val, yylineno);
    }*/

}

int str_int(char *strptr){

    if(strncmp(strptr, "0B", 2) == 0){
        return (int)strtol(&strptr[2], NULL, 2);

    }else if(strncmp(strptr, "0X", 2) == 0){
        return (int)strtol(&strptr[2], NULL, 16);

    }else{
        return (int)strtol(&strptr[0], NULL, 10);
    }
}
