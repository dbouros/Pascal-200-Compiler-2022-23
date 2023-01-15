/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOF_T = 0,
    PROGRAM_T = 258,
    CONST_T = 259,
    TYPE_T = 260,
    ARRAY_T = 261,
    LIST_T = 262,
    SET_T = 263,
    OF_T = 264,
    RECORD_T = 265,
    VAR_T = 266,
    FUNCTION_T = 267,
    PROCEDURE_T = 268,
    INTEGER_T = 269,
    REAL_T = 270,
    BOOLEAN_T = 271,
    CHAR_T = 272,
    FORWARD_T = 273,
    LENGTH_T = 274,
    NEW_T = 275,
    BEGIN_T = 276,
    END_T = 277,
    IF_T = 278,
    THEN_T = 279,
    ELSE_T = 280,
    WHILE_T = 281,
    DO_T = 282,
    CASE_T = 283,
    OTHERWISE_T = 284,
    FOR_T = 285,
    TO_T = 286,
    DOWNTO_T = 287,
    WITH_T = 288,
    READ_T = 289,
    WRITE_T = 290,
    ID_T = 291,
    ICONST_T = 292,
    RCONST_T = 293,
    BCONST_T = 294,
    CCONST_T = 295,
    RELOP_T = 296,
    ADDOP_T = 297,
    OROP_T = 298,
    MULDIVANDOP_T = 299,
    NOTOP_T = 300,
    INOP_T = 301,
    LISTFUNC_T = 302,
    STRING_T = 303,
    LPAREN_T = 304,
    RPAREN_T = 305,
    SEMI_T = 306,
    DOT_T = 307,
    COMMA_T = 308,
    EQU_T = 309,
    COLON_T = 310,
    LBRACK_T = 311,
    RBRACK_T = 312,
    ASSIGN_T = 313,
    DOTDOT_T = 314,
    COMMENT_T = 315,
    ERROR_T = 316,
    ELSE = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "bison.y" /* yacc.c:1909  */

    int int_var;
    float float_var;
    bool bool_var;
    char char_var;
    char *str_var;

#line 126 "bison.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
