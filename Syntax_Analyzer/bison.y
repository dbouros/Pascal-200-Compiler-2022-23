%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <math.h>
    #include <string.h>

    extern FILE *yyin;
    extern int yylex();
    extern void yyterminate();
    extern char *yytext;

%}

%union{
    int int_var;
    float float_var;
    boolean boolean_var;
    char char_var;
    char *string_var;
}

%token      <string_var>         PROGRAM      "program"
%token      <string_var>         CONST        "const"
%token      <string_var>         TYPE         "type"
%token      <string_var>         ARRAY        "array"
%token      <string_var>         LIST         "list"
%token      <string_var>         SET          "set"
%token      <string_var>         OF           "of"
%token      <string_var>         RECORD       "record"
%token      <string_var>         VAR          "var"
%token      <string_var>         FUNCTION     "function"
%token      <string_var>         PROCEDURE    "procedure"
%token      <string_var>         INTEGER      "integer"
%token      <string_var>         REAL         "real"
%token      <string_var>         BOOLEAN      "boolean"
%token      <string_var>         CHAR         "char"
%token      <string_var>         FORWARD      "forward"
%token      <string_var>         LENGTH       "length"
%token      <string_var>         NEW          "new"
%token      <string_var>         BEGIN        "begin"
%token      <string_var>         END          "end"
%token      <string_var>         IF           "if"
%token      <string_var>         THEN         "then"
%token      <string_var>         ELSE         "else"
%token      <string_var>         WHILE        "while"
%token      <string_var>         DO           "do"
%token      <string_var>         CASE         "case"
%token      <string_var>         OTHERWISE    "otherwise"
%token      <string_var>         FOR          "for"
%token      <string_var>         TO           "to"
%token      <string_var>         DOWNTO       "downto"
%token      <string_var>         WITH         "with"
%token      <string_var>         READ         "read"
%token      <string_var>         WRITE        "write"

%token      <string_var>         ID           "id"

%token      <int_var>            ICONST       "iconst"
%token      <float_var>           RCONST       "rconst"
%token      <boolean_var>        BCONST       "true, false"
%token      <char_var>           CCONST       "cconst"

%token      <string_var>         RELOP        ">, >=, <, <=, <>"
%token      <string_var>         ADDOP        "+, -"
%token      <string_var>         OROP         "or"
%token      <string_var>         MULDIVANDOP  "*, /, div, mod, and"
%token      <string_var>         NOTOP        "not"
%token      <string_var>         INOP         "in"

%token      <string_var>         LISTFUNC     "listfunc"

%token      <string_var>         STRING       "string"

%token      <string_var>         LPAREN       "("
%token      <string_var>         RPAREN       ")"
%token      <string_var>         SEMI         ";"
%token      <string_var>         DOT          "."
%token      <string_var>         COMMA        ","
%token      <string_var>         EQU          "="
%token      <string_var>         COLON        ":"
%token      <string_var>         LBRACK       "["
%token      <string_var>         RBRACK       "]"
%token      <string_var>         ASSIGN       ":="
%token      <string_var>         DOTDOT       ".."

%token      <string_var>         EOF      0   "end of file"


%%
program:                header declarations subprograms comp_statement DOT

header:                 PROGRAM ID SEMI

declarations:           constdefs typedefs vardefs

constdefs:              CONST constant_defs SEMI
                        | %empty {}

constant_defs:          constant_defs SEMI ID EQU expression
                        | ID EQU expression

expression:             expression RELOP expression
                        | expression EQU expression
                        | expression INOP expression
                        | expression OROP expression
                        | expression ADDOP expression
                        | expression MULDIVANDOP expression
                        | ADDOP expression
                        | NOTOP expression
                        | variable
                        | ID LPAREN expressions RPAREN
                        | LENGTH LPAREN expression RPAREN
                        | NEW LPAREN expression RPAREN
                        | constant
                        | LPAREN expression RPAREN
                        | setlistexpression
                        
variable:               ID
                        | variable DOT ID
                        | variable LBRACK expressions RBRACK
                        | LISTFUNC LPAREN expression RPAREN

expressions:            expressions COMMA expression
                        | expression

constant:               ICONST
                        | RCONST
                        | BCONST
                        | CCONST

setlistexpression:      LBRACK expressions RBRACK
                        | LBRACK RBRACK

typedefs:               TYPE type_defs SEMI
                        | %empty {}

type_defs:              type_defs SEMI ID EQU type_def
                        | ID EQU type_def

type_def:               ARRAY LBRACK dims RBRACK OF typename
                        | LIST OF typename
                        | SET OF typename
                        | RECORD fields END
                        | limit DOTDOT limit

dims:                   dims COMMA limits
                        | limits

limits:                 limit DOTDOT limit
                        | ID

limit:                  sign ICONST
                        | CCONST
                        | BCONST
                        | ADDOP ID
                        | ID

sign:                   ADDOP | %empty {}

typename:               standard_type
                        | ID

standard_type:          INTEGER | REAL | BOOLEAN | CHAR

fields:                 fields SEMI field
                        | field

field:                  identifiers COLON typename

identifiers:            identifiers COMMA ID
                        | ID

vardefs:                VAR variable_defs SEMI
                        | %empty {}

variable_defs:          variable_defs SEMI identifiers COLON typename
                        | identifiers COLON typename

subprograms:            subprograms subprogram SEMI
                        | %empty {}

subprogram:             sub_header SEMI FORWARD
                        | sub_header SEMI declarations subprograms comp_statement

sub_header:             FUNCTION ID formal_parameters COLON standard_type
                        | FUNCTION ID formal_parameters COLON LIST
                        | PROCEDURE ID formal_parameters
                        | FUNCTION ID

formal_parameters:      LPAREN parameter_list RPAREN
                        | %empty {}

parameter_list:         parameter_list SEMI pass identifiers COLON typename
                        | pass identifiers COLON typename

pass:                   VAR | %empty {}

comp_statement:         BEGIN statements END

statements:             statements SEMI statement
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

assignment:             variable ASSIGN expression
                        | variable ASSIGN STRING

if_statement:           IF expression THEN statement if_tail

if_tail:                ELSE statement
                        | %empty {}

case_statement:         CASE expression OF cases case_tail END

cases:                  cases SEMI single_case
                        | single_case

single_case:            label_list COLON statement
                        | %empty {}

label_list:             label_list COMMA label
                        | label

label:                  sign constant
                        | sign ID

case_tail:              SEMI OTHERWISE COLON statement
                        | %empty {}

while_statement:        WHILE expression DO statement

for_statement:          FOR ID ASSIGN iter_space DO statement

iter_space:             expression TO expression
                        | expression DOWNTO expression

with_statement:         WITH variable DO statement

subprogram_call:        ID
                        | ID LPAREN expressions RPAREN

io_statement:           READ LPAREN read_list RPAREN
                        | WRITE LPAREN write_list RPAREN

read_list:              read_list COMMA read_item
                        | read_item

read_item:              variable

write_list:             write_list COMMA write_item
                        | write_item

write_item:             expression
                        | STRING
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