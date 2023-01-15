/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

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
    extern int yylineno;

    extern char str_Arr[2048];

    int err_counter;
    void yyerror(char const *error_mess);


#line 87 "bison.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison.tab.h".  */
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
#line 24 "bison.y" /* yacc.c:355  */

    int int_var;
    float float_var;
    bool bool_var;
    char char_var;
    char *str_var;

#line 199 "bison.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "bison.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   452

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   123,   125,   127,   128,   130,   131,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   149,   150,   151,   152,   154,   155,
     157,   158,   159,   160,   162,   163,   165,   166,   168,   169,
     171,   172,   173,   174,   175,   177,   178,   180,   181,   183,
     184,   185,   186,   187,   189,   189,   191,   192,   194,   195,
     196,   197,   199,   200,   202,   204,   205,   207,   208,   210,
     211,   213,   214,   216,   217,   219,   220,   221,   222,   224,
     225,   227,   228,   230,   231,   233,   235,   236,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   249,   250,
     252,   254,   255,   257,   259,   260,   262,   263,   265,   266,
     268,   269,   271,   272,   274,   275,   276,   278,   279,   280,
     281,   282,   284,   285,   287,   288,   289,   291,   292,   294,
     295,   297,   298,   300,   302,   303,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"program\"", "\"const\"",
  "\"type\"", "\"array\"", "\"list\"", "\"set\"", "\"of\"", "\"record\"",
  "\"var\"", "\"function\"", "\"procedure\"", "\"integer\"", "\"real\"",
  "\"boolean\"", "\"char\"", "\"forward\"", "\"length\"", "\"new\"",
  "\"begin\"", "\"end\"", "\"if\"", "\"then\"", "\"else\"", "\"while\"",
  "\"do\"", "\"case\"", "\"otherwise\"", "\"for\"", "\"to\"", "\"downto\"",
  "\"with\"", "\"read\"", "\"write\"", "\"id\"", "\"iconst\"",
  "\"rconst\"", "\"true, false\"", "\"cconst\"", "\">, >=, <, <=, <>\"",
  "\"+, -\"", "\"or\"", "\"*, /, div, mod, and\"", "\"not\"", "\"in\"",
  "\"listfunc\"", "\"string\"", "\"(\"", "\")\"", "\";\"", "\".\"",
  "\",\"", "\"=\"", "\":\"", "\"[\"", "\"]\"", "\":=\"", "\"..\"",
  "\"comment\"", "ERROR_T", "ELSE", "$accept", "program", "header",
  "declarations", "constdefs", "constant_defs", "expression", "variable",
  "expressions", "constant", "setlistexpression", "typedefs", "type_defs",
  "type_def", "dims", "limits", "limit", "sign", "typename",
  "standard_type", "fields", "field", "identifiers", "vardefs",
  "variable_defs", "subprograms", "subprogram", "sub_header",
  "formal_parameters", "parameter_list", "pass", "comp_statement",
  "statements", "statement", "assignment", "if_statement", "if_tail",
  "case_statement", "cases", "single_case", "label_list", "label",
  "case_tail", "while_statement", "for_statement", "iter_space",
  "with_statement", "subprogram_call", "io_statement", "read_list",
  "read_item", "write_list", "write_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -172

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-172)))

#define YYTABLE_NINF -128

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-128)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     101,    77,   114,   117,    79,  -172,   107,  -172,   156,  -172,
     126,   134,   169,   132,   181,   298,   164,   185,   186,   173,
     154,   177,   180,   195,   212,   231,  -172,   221,   227,   241,
    -172,  -172,  -172,  -172,   298,   298,   254,   298,   235,   285,
     100,  -172,  -172,   251,    76,   260,   313,   298,   298,   298,
      16,   -21,   271,   275,   -12,    33,  -172,     8,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,     7,  -172,
     147,   289,  -172,   138,   290,   298,   298,   298,   300,  -172,
     298,   338,  -172,   285,   145,   298,   298,   298,   298,   298,
     298,   306,   298,   298,   335,   293,  -172,   -35,   215,    30,
      74,    65,    -1,   299,    11,  -172,    27,   -21,   259,   298,
     274,  -172,   173,  -172,  -172,   303,   347,   356,   231,  -172,
    -172,  -172,   325,  -172,   307,   330,   314,   334,   161,   231,
     352,   366,    31,   380,  -172,   298,  -172,   394,   300,   300,
    -172,   394,   394,  -172,   166,   285,  -172,    52,   231,   435,
     298,   137,   137,   137,   137,   137,    36,   298,   298,   298,
     137,   137,   100,   116,  -172,  -172,   285,   160,  -172,   191,
    -172,   285,  -172,   169,    87,   161,   161,    49,  -172,   193,
    -172,   175,  -172,   147,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,   207,  -172,  -172,  -172,  -172,   285,  -172,  -172,
     335,   213,  -172,  -172,   332,   344,  -172,  -172,   358,  -172,
    -172,  -172,   249,   321,  -172,   228,  -172,   350,   360,    63,
    -172,  -172,  -172,   -21,  -172,   259,  -172,  -172,   326,   174,
    -172,   331,  -172,  -172,  -172,   231,   161,  -172,  -172,   161,
     231,   161,   298,   298,   137,   137,  -172,  -172,  -172,     9,
     367,   349,   173,   137,   137,   137,   137,  -172,  -172,    87,
     388,   175,  -172,  -172,  -172,   247,  -172,   285,   285,  -172,
    -172,   345,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,   161,  -172,   161,   217,  -172,  -172,  -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,     0,    72,    37,     3,
       0,     0,     0,     0,    68,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,    24,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     8,
      17,    21,    23,     0,    78,    80,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,    96,     0,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    71,     6,     2,
      55,    36,    66,     0,     0,     0,     0,     0,    15,    16,
       0,     0,    35,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,    77,    24,     0,    17,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    85,     0,    73,    72,     0,     0,     0,     0,    53,
      51,    50,    54,    39,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,    22,     0,    34,     9,    13,    12,
      14,    11,    10,    25,     0,     7,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,   133,     0,   132,   137,   136,     0,   135,     0,
      99,    98,    86,     0,    55,     0,     0,     0,    63,     0,
      52,    55,    49,    55,    65,    58,    59,    60,    61,    57,
      70,    56,     0,    19,    20,    18,    27,    28,    26,    79,
      84,     0,    76,    75,     0,     0,   115,   125,   102,   116,
     114,    54,     0,   113,   105,     0,   109,     0,     0,     0,
     126,   124,   129,     0,   130,     0,   128,    74,    48,     0,
      46,     0,    41,    42,    43,     0,     0,    44,    38,     0,
       0,     0,     0,     0,     0,     0,   100,   111,   110,    55,
       0,    55,     0,     0,     0,     0,     0,   131,   134,    55,
       0,    55,    62,    64,    69,     0,    82,   122,   123,   118,
     101,     0,   104,   103,   108,   106,   119,   120,   121,   117,
      45,     0,    47,     0,     0,    40,    81,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,   333,  -172,  -172,   -13,   -19,   -48,   187,
    -172,  -172,  -172,   220,  -172,   146,  -165,  -150,  -171,   255,
    -172,   176,   -24,  -172,  -172,   301,  -172,  -172,   368,  -172,
     214,    -9,  -172,  -105,  -172,  -172,  -172,  -172,  -172,   168,
    -172,   167,  -172,  -172,  -172,  -139,  -172,  -172,  -172,  -172,
     196,  -172,   200
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    11,    83,    40,    84,    41,
      42,    14,    24,   123,   229,   230,   124,   125,   190,   191,
     177,   178,   179,    26,    74,    12,    20,    21,    95,   147,
     148,    56,    57,    58,    59,    60,   246,    61,   213,   214,
     215,   216,   250,    62,    63,   205,    64,    65,    66,   163,
     164,   167,   168
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    73,    39,    22,   232,   233,   212,   172,   156,   231,
    -127,     6,   158,  -127,    77,   105,   237,   103,   217,   218,
     219,    78,    79,   150,    81,   113,    36,    99,   160,   132,
     111,  -107,   106,    98,   100,   101,   102,   109,   271,  -127,
      85,    86,    87,    88,   144,    89,   206,   207,   208,   209,
     210,   211,   104,    90,   161,   220,   221,   152,  -107,   112,
    -107,   169,   130,   131,   255,   263,   154,   133,   264,   159,
     266,   234,   137,   138,   139,   140,   141,   142,   211,    91,
     145,   195,    91,    92,   135,    91,    92,  -107,   162,    92,
     256,   110,   155,    55,   231,   166,   282,   171,   153,   212,
     235,   212,   199,   200,     1,   192,    85,    86,    87,    88,
     285,    89,   286,     4,     5,    85,    86,    87,    88,    90,
      89,     6,   197,   228,   201,    94,   120,   121,    90,   122,
       9,   -80,    55,    55,    55,    55,    55,   204,    46,   269,
     270,    55,    55,    10,   204,   204,   204,   275,   276,   277,
     278,   279,    91,   115,   116,   117,    92,   118,    19,   -97,
      47,    13,   -97,    48,   227,    49,   222,    50,    23,   223,
      51,    52,    53,    54,    46,   185,   186,   187,   188,   287,
      15,    17,    18,   119,    36,    16,   120,   121,   -97,   122,
      19,   127,    25,   128,    19,   -97,    47,   189,   135,    48,
      43,    49,   136,    50,   162,    67,    51,    52,    53,    54,
     224,   119,   166,   225,   120,   121,   265,   122,    46,   135,
      36,    44,    45,   198,   -97,    55,    55,   259,    68,   267,
     268,   260,    69,    55,    55,    55,    55,    55,    19,   -97,
      47,   226,   151,    48,   135,    49,   127,    50,   236,    70,
      51,    52,    53,    54,    27,    28,    85,    86,    87,    88,
     127,    89,   239,    71,    36,    55,   127,    72,   241,    90,
      75,    29,    30,    31,    32,    33,    76,    34,    27,    28,
      35,   251,    36,   252,    37,   247,    30,    31,    32,    33,
      77,    38,    82,    27,    28,    29,    30,    31,    32,    33,
     127,    34,   283,    80,    35,    93,    36,   165,    37,    94,
      29,    30,    31,    32,    33,    38,    34,    27,    28,    35,
     107,    36,   170,    37,   108,   126,    85,    86,    87,    88,
      38,    89,    27,    28,    29,    30,    31,    32,    33,    90,
      34,   129,   143,    35,    88,    36,   146,    37,   149,    97,
      30,    31,    32,    33,    38,    34,   175,   157,    35,   174,
      36,   180,    37,   242,   243,   176,   181,   182,   183,    38,
     184,   244,   249,    85,    86,    87,    88,   253,    89,    85,
      86,    87,    88,   245,    89,   -53,    90,   254,   134,   273,
     261,   211,    90,    85,    86,    87,    88,   281,    89,   248,
     284,   114,   193,   238,   203,   280,    90,    85,    86,    87,
      88,   262,    89,    96,   240,   173,   194,   272,   274,   257,
      90,    85,    86,    87,    88,   258,    89,     0,     0,     0,
     196,     0,     0,     0,    90,  -128,    86,    87,    88,     0,
    -128,     0,   202,     0,     0,     0,     0,     0,  -128,   185,
     186,   187,   188
};

static const yytype_int16 yycheck[] =
{
      19,    25,    15,    12,   175,   176,   156,   112,     9,   174,
      22,     4,     1,    25,    49,    36,   181,     1,   157,   158,
     159,    34,    35,    58,    37,    18,    47,    46,     1,    77,
      22,    22,    51,    46,    47,    48,    49,    49,    29,    51,
      41,    42,    43,    44,    92,    46,   151,   152,   153,   154,
     155,    42,    36,    54,    27,   160,   161,    27,    22,    51,
      51,   109,    75,    76,     1,   236,     1,    80,   239,    58,
     241,    22,    85,    86,    87,    88,    89,    90,    42,    52,
      93,    50,    52,    56,    53,    52,    56,    51,   107,    56,
      27,    58,    27,   112,   259,   108,   261,   110,    24,   249,
      51,   251,    50,    51,     3,   129,    41,    42,    43,    44,
     281,    46,   283,    36,     0,    41,    42,    43,    44,    54,
      46,     4,   135,    36,   148,    49,    39,    40,    54,    42,
      51,    55,   151,   152,   153,   154,   155,   150,     1,   244,
     245,   160,   161,    36,   157,   158,   159,   252,   253,   254,
     255,   256,    52,     6,     7,     8,    56,    10,    21,    22,
      23,     5,    25,    26,   173,    28,    50,    30,    36,    53,
      33,    34,    35,    36,     1,    14,    15,    16,    17,   284,
      54,    12,    13,    36,    47,    51,    39,    40,    51,    42,
      21,    53,    11,    55,    21,    22,    23,    36,    53,    26,
      36,    28,    57,    30,   223,    51,    33,    34,    35,    36,
      50,    36,   225,    53,    39,    40,   240,    42,     1,    53,
      47,    36,    36,    57,    51,   244,   245,    53,    51,   242,
     243,    57,    52,   252,   253,   254,   255,   256,    21,    22,
      23,    50,    27,    26,    53,    28,    53,    30,    55,    54,
      33,    34,    35,    36,    19,    20,    41,    42,    43,    44,
      53,    46,    55,    51,    47,   284,    53,    36,    55,    54,
      49,    36,    37,    38,    39,    40,    49,    42,    19,    20,
      45,    53,    47,    55,    49,    36,    37,    38,    39,    40,
      49,    56,    57,    19,    20,    36,    37,    38,    39,    40,
      53,    42,    55,    49,    45,    54,    47,    48,    49,    49,
      36,    37,    38,    39,    40,    56,    42,    19,    20,    45,
      49,    47,    48,    49,    49,    36,    41,    42,    43,    44,
      56,    46,    19,    20,    36,    37,    38,    39,    40,    54,
      42,    51,    36,    45,    44,    47,    11,    49,    55,    36,
      37,    38,    39,    40,    56,    42,     9,    58,    45,    56,
      47,    36,    49,    31,    32,     9,    59,    37,    54,    56,
      36,    27,    51,    41,    42,    43,    44,    27,    46,    41,
      42,    43,    44,    25,    46,    59,    54,    27,    50,    22,
      59,    42,    54,    41,    42,    43,    44,     9,    46,   212,
      55,    68,    50,   183,   149,   259,    54,    41,    42,    43,
      44,   235,    46,    45,   200,   114,    50,   249,   251,   223,
      54,    41,    42,    43,    44,   225,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    41,    42,    43,    44,    -1,
      46,    -1,     7,    -1,    -1,    -1,    -1,    -1,    54,    14,
      15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    64,    65,    36,     0,     4,    66,    67,    51,
      36,    68,    88,     5,    74,    54,    51,    12,    13,    21,
      89,    90,    94,    36,    75,    11,    86,    19,    20,    36,
      37,    38,    39,    40,    42,    45,    47,    49,    56,    69,
      70,    72,    73,    36,    36,    36,     1,    23,    26,    28,
      30,    33,    34,    35,    36,    70,    94,    95,    96,    97,
      98,   100,   106,   107,   109,   110,   111,    51,    51,    52,
      54,    51,    36,    85,    87,    49,    49,    49,    69,    69,
      49,    69,    57,    69,    71,    41,    42,    43,    44,    46,
      54,    52,    56,    54,    49,    91,    91,    36,    69,    70,
      69,    69,    69,     1,    36,    36,    70,    49,    49,    49,
      58,    22,    51,    18,    66,     6,     7,     8,    10,    36,
      39,    40,    42,    76,    79,    80,    36,    53,    55,    51,
      69,    69,    71,    69,    50,    53,    57,    69,    69,    69,
      69,    69,    69,    36,    71,    69,    11,    92,    93,    55,
      58,    27,    27,    24,     1,    27,     9,    58,     1,    58,
       1,    27,    70,   112,   113,    48,    69,   114,   115,    71,
      48,    69,    96,    88,    56,     9,     9,    83,    84,    85,
      36,    59,    37,    54,    36,    14,    15,    16,    17,    36,
      81,    82,    85,    50,    50,    50,    50,    69,    57,    50,
      51,    85,     7,    82,    69,   108,    96,    96,    96,    96,
      96,    42,    80,   101,   102,   103,   104,   108,   108,   108,
      96,    96,    50,    53,    50,    53,    50,    94,    36,    77,
      78,    79,    81,    81,    22,    51,    55,    79,    76,    55,
      93,    55,    31,    32,    27,    25,    99,    36,    72,    51,
     105,    53,    55,    27,    27,     1,    27,   113,   115,    53,
      57,    59,    84,    81,    81,    85,    81,    69,    69,    96,
      96,    29,   102,    22,   104,    96,    96,    96,    96,    96,
      78,     9,    79,    55,    55,    81,    81,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    99,    99,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   106,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     3,     3,     0,     5,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     4,     4,
       4,     1,     3,     1,     1,     3,     4,     4,     3,     1,
       1,     1,     1,     1,     3,     2,     3,     0,     5,     3,
       6,     3,     3,     3,     3,     3,     1,     3,     1,     2,
       1,     1,     2,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     3,     0,     5,
       3,     3,     0,     3,     5,     5,     5,     3,     2,     3,
       0,     6,     4,     1,     0,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     3,
       5,     2,     0,     6,     3,     1,     3,     0,     3,     1,
       2,     2,     4,     0,     4,     4,     4,     6,     6,     6,
       6,     6,     3,     3,     4,     4,     4,     1,     4,     4,
       4,     3,     1,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 128 "bison.y" /* yacc.c:1646  */
    {}
#line 1537 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 166 "bison.y" /* yacc.c:1646  */
    {}
#line 1543 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 189 "bison.y" /* yacc.c:1646  */
    {}
#line 1549 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 208 "bison.y" /* yacc.c:1646  */
    {}
#line 1555 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 214 "bison.y" /* yacc.c:1646  */
    {}
#line 1561 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 225 "bison.y" /* yacc.c:1646  */
    {}
#line 1567 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 231 "bison.y" /* yacc.c:1646  */
    {}
#line 1573 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 247 "bison.y" /* yacc.c:1646  */
    {}
#line 1579 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 263 "bison.y" /* yacc.c:1646  */
    {}
#line 1585 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 272 "bison.y" /* yacc.c:1646  */
    {}
#line 1591 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 275 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1597 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 276 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1603 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 279 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1609 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 280 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1615 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 281 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1621 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 282 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1627 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 288 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1633 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 289 "bison.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1639 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 1643 "bison.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 307 "bison.y" /* yacc.c:1906  */


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
void yyerror(char const *error_mess){

    err_counter++;
    if(err_counter >= 5){
        perror("Number of syntax errors reached 5. Terminating analysis !");
        exit(-1);
    }else{
        printf("Error [Line: %d]: %s\n", yylineno, error_mess);
        //yyless(1);
    }
}
