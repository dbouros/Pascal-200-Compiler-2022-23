%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>

    extern int yylex();
    extern void yyterminate();
    extern FILE *yyin;
    extern char *yytext;

    extern char str_Arr[2048];

    int err_counter;
    void yyerror(char const *s);
    
%}

%error-verbose

%union{
    int int_var;
    float float_var;
    bool bool_var;
    char char_var;
    char *str_var;
}

%token      PROGRAM_T      "program"
%token      CONST_T        "const"
%token      TYPE_T         "type"
%token      ARRAY_T        "array"
%token      LIST_T         "list"
%token      SET_T          "set"
%token      OF_T           "of"
%token      RECORD_T       "record"
%token      VAR_T          "var"
%token      FUNCTION_T     "function"
%token      PROCEDURE_T    "procedure"
%token      INTEGER_T      "integer"
%token      REAL_T         "real"
%token      BOOLEAN_T      "boolean"
%token      CHAR_T         "char"
%token      FORWARD_T      "forward"
%token      LENGTH_T       "length"
%token      NEW_T          "new"
%token      BEGIN_T        "begin"
%token      END_T          "end"
%token      IF_T           "if"
%token      THEN_T         "then"
%token      ELSE_T         "else"
%token      WHILE_T        "while"
%token      DO_T           "do"
%token      CASE_T         "case"
%token      OTHERWISE_T    "otherwise"
%token      FOR_T          "for"
%token      TO_T           "to"
%token      DOWNTO_T       "downto"
%token      WITH_T         "with"
%token      READ_T         "read"
%token      WRITE_T        "write"

%token      <str_var>       ID_T          "id"

%token      <int_var>       ICONST_T      "iconst"
%token      <float_var>     RCONST_T      "rconst"
%token      <bool_var>      BCONST_T      "true, false"
%token      <char_var>      CCONST_T      "cconst"

%token      RELOP_T        ">, >=, <, <=, <>"
%token      ADDOP_T        "+, -"
%token      OROP_T         "or"
%token      MULDIVANDOP_T  "*, /, div, mod, and"
%token      NOTOP_T        "not"
%token      INOP_T         "in"

%token      LISTFUNC_T     "listfunc"

%token      STRING_T       "string"

%token      LPAREN_T       "("
%token      RPAREN_T       ")"
%token      SEMI_T         ";"
%token      DOT_T          "."
%token      COMMA_T        ","
%token      EQU_T          "="
%token      COLON_T        ":"
%token      LBRACK_T       "["
%token      RBRACK_T       "]"
%token      ASSIGN_T       ":="
%token      DOTDOT_T       ".."

%token      COMMENT_T      "comment"
%token      ERROR_T        "error"

%token      EOF_T      0   "end of file"

%start program

%%
program:                header declarations subprograms comp_statement DOT_T

header:                 PROGRAM_T ID_T SEMI_T

declarations:           constdefs typedefs vardefs

constdefs:              CONST_T constant_defs SEMI_T
                        | %empty {}

constant_defs:          constant_defs SEMI_T ID_T EQU_T expression
                        | ID_T EQU_T expression

expression:             expression RELOP_T expression
                        | expression EQU_T expression
                        | expression INOP_T expression
                        | expression OROP_T expression
                        | expression ADDOP_T expression
                        | expression MULDIVANDOP_T expression
                        | ADDOP_T expression
                        | NOTOP_T expression
                        | variable
                        | ID_T LPAREN_T expressions RPAREN_T
                        | LENGTH_T LPAREN_T expression RPAREN_T
                        | NEW_T LPAREN_T expression RPAREN_T
                        | constant
                        | LPAREN_T expression RPAREN_T
                        | setlistexpression
                        
variable:               ID_T
                        | variable DOT_T ID_T
                        | variable LBRACK_T expressions RBRACK_T
                        | LISTFUNC_T LPAREN_T expression RPAREN_T

expressions:            expressions COMMA_T expression
                        | expression

constant:               ICONST_T
                        | RCONST_T
                        | BCONST_T
                        | CCONST_T

setlistexpression:      LBRACK_T expressions RBRACK_T
                        | LBRACK_T RBRACK_T

typedefs:               TYPE_T type_defs SEMI_T
                        | %empty {}

type_defs:              type_defs SEMI_T ID_T EQU_T type_def
                        | ID_T EQU_T type_def

type_def:               ARRAY_T LBRACK_T dims RBRACK_T OF_T typename
                        | LIST_T OF_T typename
                        | SET_T OF_T typename
                        | RECORD_T fields END_T
                        | limit DOTDOT_T limit

dims:                   dims COMMA_T limits
                        | limits

limits:                 limit DOTDOT_T limit
                        | ID_T

limit:                  sign ICONST_T
                        | CCONST_T
                        | BCONST_T
                        | ADDOP_T ID_T
                        | ID_T

sign:                   ADDOP_T | %empty {}

typename:               standard_type
                        | ID_T

standard_type:          INTEGER_T | REAL_T | BOOLEAN_T | CHAR_T

fields:                 fields SEMI_T field
                        | field

field:                  identifiers COLON_T typename

identifiers:            identifiers COMMA_T ID_T
                        | ID_T

vardefs:                VAR_T variable_defs SEMI_T
                        | %empty {}

variable_defs:          variable_defs SEMI_T identifiers COLON_T typename
                        | identifiers COLON_T typename

subprograms:            subprograms subprogram SEMI_T
                        | %empty {}

subprogram:             sub_header SEMI_T FORWARD_T
                        | sub_header SEMI_T declarations subprograms comp_statement

sub_header:             FUNCTION_T ID_T formal_parameters COLON_T standard_type
                        | FUNCTION_T ID_T formal_parameters COLON_T LIST_T
                        | PROCEDURE_T ID_T formal_parameters
                        | FUNCTION_T ID_T

formal_parameters:      LPAREN_T parameter_list RPAREN_T
                        | %empty {}

parameter_list:         parameter_list SEMI_T pass identifiers COLON_T typename
                        | pass identifiers COLON_T typename

pass:                   VAR_T | %empty {}

comp_statement:         BEGIN_T statements END_T

statements:             statements SEMI_T statement
                        | statement

statement:              assignment
                        | if_statement
                        | case_statement
                        | while_statement
                        | for_statement
                        | with_statement
                        | subprogram_call
                        | io_statement
                        | comp_statement
                        | %empty {}

assignment:             variable ASSIGN_T expression
                        | variable ASSIGN_T STRING_T

if_statement:           IF_T expression THEN_T statement if_tail

if_tail:                ELSE_T statement
                        | %empty {}

case_statement:         CASE_T expression OF_T cases case_tail END_T

cases:                  cases SEMI_T single_case
                        | single_case

single_case:            label_list COLON_T statement
                        | %empty {}

label_list:             label_list COMMA_T label
                        | label

label:                  sign constant
                        | sign ID_T

case_tail:              SEMI_T OTHERWISE_T COLON_T statement
                        | %empty {}

while_statement:        WHILE_T expression DO_T statement

for_statement:          FOR_T ID_T ASSIGN_T iter_space DO_T statement

iter_space:             expression TO_T expression
                        | expression DOWNTO_T expression

with_statement:         WITH_T variable DO_T statement

subprogram_call:        ID_T
                        | ID_T LPAREN_T expressions RPAREN_T

io_statement:           READ_T LPAREN_T read_list RPAREN_T
                        | WRITE_T LPAREN_T write_list RPAREN_T

read_list:              read_list COMMA_T read_item
                        | read_item

read_item:              variable

write_list:             write_list COMMA_T write_item
                        | write_item

write_item:             expression
                        | STRING_T
%%

/* FUNCTIONS */
/*  Main */
int main(int argc, char* argv[]){
    
    if (argc > 1){
        yyin = fopen(argv[1], "r");

        if (yyin == NULL){
            perror("Can't open file!\n");
            return -1;
        }
    }
    
    yyparse();

    fclose(yyin);
    
    return 0;
}

/* Error Handler */
void yyerror(char const *s){
    err_counter++;
    printf("Error: %s\n", s);
}