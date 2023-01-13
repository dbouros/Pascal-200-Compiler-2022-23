/* TODO List: */
/*       1) Fix -lm flag bug when able and try to change ICONST and RCONST RegEx position. */
/*       2) Define simple regex with words (Position before rules). */
/*       3) After Keywords (PROGRAM-WRITE) --> Regex () */
/*       4) Create function for str_int(char *str) -> (int) conversion for requested number base(2, 10, 16). */
/*       5) After step 4, update token_Print() to return num token of any base(2, 10, 16) to base "10". */
/*       6) If steps 4,5 are correct, create function(s) to convert same string to (real) type. */
/*       7) Create SubLexer within Rules(with RegEx) to catch Strings and Comments. */

/* DEFINES */
%{
/* Includes */
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>
    #include "bison.tab.h"

    void token_Print(int token_val);
    int str_int(char *strptr);
    float str_float(char *strptr);

    char str_Arr[2048];
    void sp_chr_Handler(char *str_Arr);

    void error_Handler(int token_val, int id);

    bool str_bool(char *strptr);
    char str_char(char *strptr);

%}

/* Allows only one file as input. */
%option noyywrap  
/* Ignores the diference between uppercase and lowercase letters. */
%option case-insensitive 
/* Counts the lines of the code. */
%option yylineno
/* Sub lexers */
%x SBLXR_STRING
%x SBLXR_COMMENT

/* Helpful Defines. */
LETTER              [a-zA-Z]
ALPHANUM            [a-zA-Z0-9]
ALPHANUM_           [a-zA-Z0-9_]

/* Identifier(ID) */
/*ID                (_?[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9])|[a-zA-Z] */
ID                  (_?{LETTER}{ALPHANUM_}*{ALPHANUM})|{LETTER}

/* Integer Constants(ICONST) */
INTEGER_CONSTANT    [1-9][0-9]*|0
BIN_INT             0[B][1][01]*
HEX_INT             0[X][A-F1-9][A-F0-9]*

/* Real Constants(RCONST) */
/*REAL              (0)|([1-9][0-9]*)?(\.)(0*[1-9]+[0-9]*|0) */
REAL_WITH_EXPONENT  (0|[1-9][0-9]*)?(\.)(0*[1-9]+[0-9]*|0)(E[+-]?(0|[1-9][0-9]*))?
INT_WITH_EXPONENT   (0|[1-9][0-9]*)(E[+-]?(0|[1-9][0-9]*))
BIN_REAL            0[B][1][01]*\.[1][01]*
HEX_REAL            0[X]([A-F1-9][A-F0-9]*)*(\.)([A-F0-9]+)

ASCII               [ !"#$%&'()*+,-./:;<=>?@\[\\\]^_`{|}~]
SPECIAL_CHARS       (\\[nftrbv])

LIST_FUNC           C(AD*|D+)R

WHITESPACE          [ \t]
NEW_LINE_LINUX      [\n]
NEW_LINE_WINDOWS    [\r\n]

/* RULES */
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


{INTEGER_CONSTANT}                                  {token_Print(ICONST_T); yylval.int_var = str_int(yytext); return ICONST_T;}
{BIN_INT}                                           {token_Print(ICONST_T); yylval.int_var = str_int(yytext); return ICONST_T;}
{HEX_INT}                                           {token_Print(ICONST_T); yylval.int_var = str_int(yytext); return ICONST_T;}

{REAL_WITH_EXPONENT}                                {token_Print(RCONST_T); yylval.float_var = str_float(yytext); return RCONST_T;}
{INT_WITH_EXPONENT}                                 {token_Print(RCONST_T); yylval.float_var = str_float(yytext); return RCONST_T;}
{BIN_REAL}                                          {token_Print(RCONST_T); yylval.float_var = str_float(yytext); return RCONST_T;}
{HEX_REAL}                                          {token_Print(RCONST_T); yylval.float_var = str_float(yytext); return RCONST_T;}

"TRUE"|"FALSE"                                      {token_Print(BCONST_T); yylval.bool_var = str_bool(yytext); return BCONST_T;}

\'{ASCII}\'|\'{ALPHANUM}\'                          {token_Print(CCONST_T); yylval.char_var = str_char(yytext); return CCONST_T;}
\'{SPECIAL_CHARS}\'                                 {token_Print(CCONST_T); yylval.char_var = str_char(yytext); return CCONST_T;}

{LIST_FUNC}                                         {token_Print(LISTFUNC_T); return LISTFUNC_T;}

{ID}                                                {token_Print(ID_T); return ID_T;}

\"                                                  {strcpy(str_Arr, ""); BEGIN(SBLXR_STRING);}
<SBLXR_STRING>\"                                    {BEGIN(INITIAL); /*printf("String Found: %s --> Token value: %d --> Program line: %d\n", str_Arr, STRING_T, yylineno);*/ yylval.str_var = strdup(str_Arr); return STRING_T;}
<SBLXR_STRING>(\\\n|\\\r\n)                         { /*New line*/}
<SBLXR_STRING>(\\.|[^"\\])                          {sp_chr_Handler(str_Arr);}
<SBLXR_STRING>(\n|\r\n)                             {printf("Fake new line, invalid input");}
<SBLXR_STRING><<EOF>>                               {error_Handler(STRING_T, 0);/*printf("Reached EOF without closing string");*/}
<SBLXR_STRING>.                                     {error_Handler(STRING_T, -1);/*printf("Unknown char for sting");*/}

\{                                                  {BEGIN(SBLXR_COMMENT);}
<SBLXR_COMMENT>\}                                   {BEGIN(INITIAL); /*printf("Comment found --> Token value: %d --> Program line %d\n", COMMENT_T, yylineno);*/}
<SBLXR_COMMENT>(\\\n|\\\r\n)                        { /*New line*/}
<SBLXR_COMMENT>[^}\\]                               {}
<SBLXR_COMMENT><<EOF>>                              {error_Handler(COMMENT_T, 0);/*printf("Reached EOF without closing comment");*/}
<SBLXR_COMMENT>.                                    {error_Handler(COMMENT_T, -1);/*printf("Unknown char for comment");*/}

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

<<EOF>>                                             { token_Print(EOF_T); return EOF_T; }
.                                                   {error_Handler(ERROR_T, -1); /*printf("Unknown token found\n");*/}
%%

/* FUNCTIONS */
// Main
int main(int argc, char* argv[]){
    
    if (argc > 1){
        yyin = fopen(argv[1], "r");

        if (yyin == NULL){
            perror("Can't open file!\n");
            return -1;
        }
    }
    
    int token;

    do{

        token = yylex();

    }while(token != 0);

    fclose(yyin);
    yyterminate();
        
    return 0;
}

/* Helpful Functions */
/* Printing all tokens */
void token_Print(int token_val){
//
//    /* Printing arithmetic integer constants */
//    if(token_val == ICONST_T){
//        if(strncmp(yytext, "0B", 2) == 0){
//            /* Printing binary integer constants */
//            printf("Integer number(Binary) found: %s --> Decimal value: %d --> Token value: %d --> Program line: %d\n", yytext, str_int(yytext), token_val, yylineno);
//
//        }else if(strncmp(yytext, "0X", 2) == 0){
//            /* Printing hexadecimal integer constants */
//            printf("Integer number(Hexadecimal) found: %s --> Decimal value: %d --> Token value: %d --> Program line: %d\n", yytext, str_int(yytext), token_val, yylineno);
//
//        }else{
//            /* Printing decimal integer constants */
//            printf("Integer number(Decimal) found: %d --> Token value: %d --> Program line: %d\n", str_int(yytext), token_val, yylineno);
//        }
//    }else if(token_val == RCONST_T){
//        if(strncmp(yytext, "0B", 2) == 0){
//            /* Printing binary real constants */
//            printf("Real number(Binary) found %s --> Decimal value: %f --> Token value: %d --> Program line: %d\n", yytext, str_float(yytext), token_val, yylineno);
//        }else if(strncmp(yytext, "0X", 2) == 0){
//            /* Printing hexadecimal real constants */
//            printf("Real number(Hexadecimal) found %s --> Decimal value: %f --> Token value: %d --> Program line: %d\n", yytext, str_float(yytext), token_val, yylineno);
//        }else{
//            /* Printing decimal real constants */
//            printf("Real number(Decimal) found %s --> Decimal value: %f --> Token value: %d --> Program line: %d\n", yytext, str_float(yytext), token_val, yylineno);
//        }
//    }else if(token_val == CCONST_T){
//        printf("Character found: %s --> Token value: %d --> Program line: %d\n", yytext, token_val, yylineno);
//    }else if(token_val == EOF_T){
//        printf("EOF Reached --> Token value: %d --> Program line: %d\n", token_val, yylineno);
//        printf("File Closed\n");
//    }else{
//        /* Printing the rest of the tokens */
//        printf("Token found: %s --> Token value: %d --> Program line: %d\n", yytext, token_val, yylineno);
//    }   
}

/* Returning values of all arithmetic (Integer, Real) constants. */
/* Integer Constants */
int str_int(char *strptr){

    if(strncmp(strptr, "0B", 2) == 0){
        return (int)strtol(&strptr[2], NULL, 2);

    }else if(strncmp(strptr, "0X", 2) == 0){
        return (int)strtol(&strptr[2], NULL, 16);

    }else{
        return atoi(strptr);
    }
}


/* Real Constants */
float str_float(char *strptr){

    float f_num;
    if(strncmp(strptr, "0B", 2) == 0){

        char *after_dot = strchr(strptr, '.');
        f_num = (int)strtol(&strptr[2], &after_dot, 2);
        int i;
        for(i=1; i<=strlen(after_dot)-1; i++){
            f_num += (after_dot[i] - '0') * (1/pow(2,i));
        }

    }else if(strncmp(strptr, "0X", 2) == 0){

        char *after_dot = strchr(strptr, '.');
        f_num = (int)strtol(&strptr[2], &after_dot, 16);
        int i;
        for(i=1; i<=strlen(after_dot)-1; i++){
            if(after_dot[i] <= '9'){
                f_num += (after_dot[i] - '0') * (1/pow(16,i));
            }else{
                f_num += (after_dot[i] + 10 - 'A') * (1/pow(16,i));
            }
        }

    }else{

        int i, expo_check;
        for(i=0;i<=strlen(strptr)-1; i++){
            if(strptr[i] == 'E')
                expo_check = 1;
            if(strptr[i] == 'e')
                expo_check = 2;
        }
        
        if(expo_check == 1 || expo_check == 2){

            char *after_E;
            if(expo_check == 1){
                after_E = strchr(strptr, 'E');
            }else{
                after_E = strchr(strptr, 'e');
            }

            f_num = (float)strtol(strptr, &after_E, 10); //This Works(Kinda)!
            /*char *before_E;
            for(i=0; i<=strlen(strptr)-1-strlen(after_E); i++){
                before_E[i] = strptr[i];
            }
            f_num = atof(before_E);*/

            double expo_num;

            if(after_E[1] == '-'){

                int i;
                for(i=2; i<=strlen(after_E)-1; i++){
                    expo_num += after_E[i] - '0';
                }
                f_num = 1/pow(f_num, expo_num);
                
            }else{

                int i;
                for(i=1; i<=strlen(after_E)-1; i++){
                    expo_num += after_E[i] - '0';
                }
                f_num = pow(f_num, expo_num);
            }
        }else{
            f_num = atof(strptr);
        }
    }
    return f_num;
}

void sp_chr_Handler(char *str_Arr){

    if(strlen(yytext) == 2){
        if(strcmp(yytext, "\\n") == 0){
            strcat(str_Arr, "\n");
        }else if(strcmp(yytext, "\\f") == 0){
            strcat(str_Arr, "\f");
        }else if(strcmp(yytext, "\\t") == 0){
            strcat(str_Arr, "\t");
        }else if(strcmp(yytext, "\\r") == 0){
            strcat(str_Arr, "\r");
        }else if(strcmp(yytext, "\\b") == 0){
            strcat(str_Arr, "\b");
        }else if(strcmp(yytext, "\\v") == 0){
            strcat(str_Arr, "\v");
        }else{
            strcat(str_Arr, &yytext[1]);
        }
    }else{
        strcat(str_Arr, yytext);
    }
}

void error_Handler(int token_val, int id){

    if(token_val == STRING_T){
        if(id == 0){
            printf("EOF Reached, expected \" to close strings --> Program line: %d\n",yylineno);
            exit(-1);
        }else{
            printf("Unknown token found inside string --> Program line: %d\n", yylineno);
            yyless(1);
        }
    }else if(token_val == COMMENT_T){
        if(id == 0){
            printf("EOF Reached, expected } to close comments --> Program line: %d\n",yylineno);
            exit(-1);
        }else{
            printf("Unknown token found inside comment --> Program line: %d\n", yylineno);
            yyless(1);
        }
    }else if(token_val == CCONST_T && id == -1){
        printf("Unknown character token found --> Program line: %d\n", yylineno);
        yyless(1);
    }else{
        printf("Unknown token found --> Program line: %d\n", yylineno);
        yyless(1);
    }
}

bool str_bool(char *strptr){
    if(strcmp(strptr, "TRUE") == 0 || strcmp(strptr, "true") == 0){
        return true;
    }else{
        return false;
    }
}

char str_char(char *strptr){
    
    char c_var;
    if(strlen(strptr) == 3){
        c_var = strptr[1];
        return c_var;
    }else if(strlen(strptr) == 3 && strcmp(&strptr[1], "\\") == 0){
        c_var = strptr[1];
        strcat(&c_var, &strptr[2]);
        return c_var;
    }else{
        error_Handler(CCONST_T, -1);
    }
}