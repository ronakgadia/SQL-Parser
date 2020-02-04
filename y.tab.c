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
#line 1 "parse.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node {
    struct Node* child;
    struct Node* sibling;
    char str[150];
};
struct Node* makeNode(char* s);
void printTree(struct Node* root,int level);

#line 80 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    CREATE = 258,
    DELETE = 259,
    DROP = 260,
    DATABASE = 261,
    TABLE = 262,
    SELECT = 263,
    INSERT_INTO = 264,
    UPDATE = 265,
    SET = 266,
    FROM = 267,
    WHERE = 268,
    AS = 269,
    ALL = 270,
    ANY = 271,
    ON = 272,
    ASC = 273,
    DESC = 274,
    DATATYPE = 275,
    NUMBER = 276,
    STRING = 277,
    PATTERN = 278,
    IDENTIFIER = 279,
    SELECTALL = 280,
    COMMA = 281,
    DISTINCT = 282,
    INNER_JOIN = 283,
    LEFT_JOIN = 284,
    RIGHT_JOIN = 285,
    FULL_JOIN = 286,
    COUNT = 287,
    AVERAGE = 288,
    SUM = 289,
    HAVING = 290,
    EXISTS = 291,
    LIMIT = 292,
    IN = 293,
    NOT_IN = 294,
    MINIMUM = 295,
    MAXIMUM = 296,
    UNION = 297,
    UNION_ALL = 298,
    VALUES = 299,
    RELATIONAL_OPERATOR = 300,
    OR = 301,
    AND = 302,
    EQUALITY_OPERATOR = 303,
    NOT = 304,
    IS_NULL = 305,
    IS_NOT_NULL = 306,
    LIKE = 307,
    NOT_LIKE = 308,
    BETWEEN = 309,
    NOT_BETWEEN = 310,
    ORDER_BY = 311,
    GROUP_BY = 312
  };
#endif
/* Tokens.  */
#define CREATE 258
#define DELETE 259
#define DROP 260
#define DATABASE 261
#define TABLE 262
#define SELECT 263
#define INSERT_INTO 264
#define UPDATE 265
#define SET 266
#define FROM 267
#define WHERE 268
#define AS 269
#define ALL 270
#define ANY 271
#define ON 272
#define ASC 273
#define DESC 274
#define DATATYPE 275
#define NUMBER 276
#define STRING 277
#define PATTERN 278
#define IDENTIFIER 279
#define SELECTALL 280
#define COMMA 281
#define DISTINCT 282
#define INNER_JOIN 283
#define LEFT_JOIN 284
#define RIGHT_JOIN 285
#define FULL_JOIN 286
#define COUNT 287
#define AVERAGE 288
#define SUM 289
#define HAVING 290
#define EXISTS 291
#define LIMIT 292
#define IN 293
#define NOT_IN 294
#define MINIMUM 295
#define MAXIMUM 296
#define UNION 297
#define UNION_ALL 298
#define VALUES 299
#define RELATIONAL_OPERATOR 300
#define OR 301
#define AND 302
#define EQUALITY_OPERATOR 303
#define NOT 304
#define IS_NULL 305
#define IS_NOT_NULL 306
#define LIKE 307
#define NOT_LIKE 308
#define BETWEEN 309
#define NOT_BETWEEN 310
#define ORDER_BY 311
#define GROUP_BY 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 75 "parse.y" /* yacc.c:355  */

	struct Node* node;

#line 238 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 255 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      58,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    89,    99,   100,   102,   112,   122,   123,
     124,   125,   126,   127,   128,   130,   144,   157,   167,   175,
     185,   191,   198,   199,   201,   215,   234,   247,   256,   263,
     265,   280,   281,   283,   289,   299,   306,   312,   322,   340,
     357,   358,   360,   361,   362,   363,   365,   372,   374,   382,
     384,   385,   386,   388,   399,   400,   401,   402,   404,   416,
     417,   418,   425,   433,   434,   436,   442,   444,   450,   458,
     464,   466,   473,   482,   489,   496,   505,   514,   522,   529,
     538,   547,   555,   563,   569,   578,   579,   581,   582,   584,
     585,   587,   593,   595,   603,   605,   611,   613,   619,   621,
     628,   641,   642,   644,   650,   652,   660,   662,   663,   665,
     666,   667,   669,   670,   672,   675,   679,   683,   685,   692,
     703,   713
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CREATE", "DELETE", "DROP", "DATABASE",
  "TABLE", "SELECT", "INSERT_INTO", "UPDATE", "SET", "FROM", "WHERE", "AS",
  "ALL", "ANY", "ON", "ASC", "DESC", "DATATYPE", "NUMBER", "STRING",
  "PATTERN", "IDENTIFIER", "SELECTALL", "COMMA", "DISTINCT", "INNER_JOIN",
  "LEFT_JOIN", "RIGHT_JOIN", "FULL_JOIN", "COUNT", "AVERAGE", "SUM",
  "HAVING", "EXISTS", "LIMIT", "IN", "NOT_IN", "MINIMUM", "MAXIMUM",
  "UNION", "UNION_ALL", "VALUES", "RELATIONAL_OPERATOR", "OR", "AND",
  "EQUALITY_OPERATOR", "NOT", "IS_NULL", "IS_NOT_NULL", "LIKE", "NOT_LIKE",
  "BETWEEN", "NOT_BETWEEN", "ORDER_BY", "GROUP_BY", "'('", "')'", "';'",
  "$accept", "program", "database_stmt", "create_db", "drop_db",
  "table_stmt", "create_table", "declare_col", "drop_table", "union_stmt",
  "union_types", "insert_table", "valuelist", "query_stmt", "isdistinct",
  "from_stmt", "origintable", "join_stmt", "join_types", "rename",
  "select_col", "selectways", "aggfunc", "aggfunctypes", "counttuples",
  "counttuplestypes", "diffcolumns", "where_stmt", "conditions",
  "relational_stmt", "query_bracket", "isbetween", "ispresent", "value",
  "groupby_stmt", "part1", "having_stmt", "havingcond", "aggcond", "oper1",
  "orderby_stmt", "part2", "part3", "sortorder", "logical_op", "rel_oper",
  "limit_stmt", "delete_stmt", "update_stmt", "intializelist", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,    40,    41,
      59
};
# endif

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     115,    17,    23,    36,    10,    16,    91,    63,     5,  -183,
    -183,    71,  -183,  -183,  -183,  -183,    39,  -183,  -183,   102,
     119,    -5,   131,   122,   123,  -183,    43,    -3,   134,  -183,
    -183,  -183,  -183,  -183,   140,  -183,    -7,    83,    -2,  -183,
     105,    38,  -183,  -183,  -183,  -183,  -183,    92,  -183,  -183,
    -183,  -183,    23,   135,  -183,    93,  -183,  -183,    94,   129,
    -183,   130,  -183,    39,   140,   132,   133,  -183,  -183,  -183,
    -183,   136,   137,   105,    -4,    96,     2,   138,    41,   100,
     -11,  -183,    57,    46,   131,   139,   142,   108,   135,   109,
     111,   131,  -183,   141,   110,  -183,   147,   129,    29,  -183,
     105,   150,  -183,  -183,  -183,   146,  -183,  -183,   149,   151,
    -183,  -183,   116,   114,   106,   140,  -183,    57,  -183,  -183,
      38,  -183,  -183,   117,   118,   124,    43,   120,  -183,  -183,
     125,   148,     1,   108,  -183,   152,  -183,   156,  -183,   105,
     158,   159,  -183,  -183,  -183,   128,   143,     7,  -183,   100,
     100,  -183,   126,    38,  -183,  -183,  -183,  -183,   162,   153,
    -183,  -183,  -183,   108,   144,  -183,   161,   132,   145,   165,
     174,   155,   171,   154,   157,  -183,  -183,  -183,  -183,   168,
    -183,    76,   163,  -183,   108,   130,  -183,   172,   178,   173,
     175,  -183,  -183,  -183,   162,  -183,  -183,  -183,    57,    24,
      66,   164,   166,  -183,  -183,   176,   160,  -183,  -183,    76,
    -183,   177,   183,  -183,  -183,  -183,   121,   184,  -183,  -183,
     167,   182,  -183,   170,  -183,  -183,  -183,   181,  -183,   185,
    -183,   189,    66,   169,  -183,  -183,  -183
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    32,     0,     0,     0,     0,     4,
       5,     0,     8,     9,    12,    10,    11,    13,    14,     0,
       0,     0,    66,     0,     0,    31,     0,     0,     0,     1,
       2,     3,    22,    23,     0,     6,     0,    47,     0,    33,
      35,     0,   118,     7,    19,    64,    63,     0,    54,    55,
      56,    57,     0,    47,    52,     0,    51,    50,     0,     0,
      27,     0,    21,    20,     0,     0,     0,    42,    43,    44,
      45,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    70,     0,    66,    49,     0,     0,    47,     0,
       0,    66,    16,     0,     0,    46,     0,     0,     0,    34,
       0,     0,    87,    88,   114,   115,    73,    74,     0,     0,
      85,    86,     0,     0,     0,     0,    83,    69,   113,   112,
       0,    59,    60,     0,     0,    92,     0,     0,    89,    90,
       0,    29,     0,     0,   119,    18,    15,     0,    37,     0,
       0,     0,    72,    75,    76,     0,     0,     0,    78,     0,
       0,    71,     0,     0,    67,    61,    62,    58,     0,    96,
      48,    53,    24,     0,     0,    26,   121,     0,     0,     0,
       0,     0,     0,     0,     0,    82,    81,    84,    68,    94,
      91,     0,   104,    28,     0,     0,    17,     0,     0,     0,
       0,    79,    80,    77,     0,   101,   102,    95,    98,     0,
       0,   117,     0,   120,    38,     0,     0,    39,    93,     0,
     115,     0,     0,   107,   108,   103,   111,     0,    30,    25,
       0,     0,    97,     0,    99,   109,   110,   106,   116,     0,
      40,     0,     0,    40,   100,   105,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,  -183,  -183,  -183,  -183,    44,  -183,   179,
    -183,  -183,  -137,     0,  -183,   180,   -51,   -22,   -34,   186,
      86,  -183,   -25,  -183,   -24,  -183,  -183,   -70,  -109,   187,
    -101,  -183,  -183,   -97,  -183,    20,  -183,     9,  -183,  -182,
    -183,   -12,  -183,  -183,  -113,    22,  -183,  -183,  -183,    37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    94,    13,    14,
      34,    15,   130,   152,    26,    22,    39,    40,    77,    72,
      52,    53,   195,    55,   196,   124,    57,    42,    81,    82,
     116,   112,   113,   131,   159,   180,   182,   197,   198,   199,
     201,   215,   216,   227,   120,   114,   218,    17,    18,    91
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    54,    56,    71,   153,     4,     4,    64,    89,     4,
     174,   154,   148,    78,   125,     4,    76,   151,   214,    37,
      73,   134,    73,    19,    20,    79,   183,    60,   128,   129,
      67,    68,    69,    70,    63,    21,   166,    25,    75,    71,
      27,    58,    23,    24,   178,   164,   138,   202,   175,   176,
     214,    65,    98,    38,    74,    59,    74,    67,    68,    69,
      70,   100,    78,    29,    92,    30,   140,    45,    46,   104,
     121,   122,   210,   123,    79,    47,    48,    49,   211,   102,
     103,    32,    33,    50,    51,   209,   104,    80,   139,   105,
     213,   106,   107,   108,   109,   110,   111,    66,    47,    48,
      49,    54,    56,   118,   119,   169,    50,    51,    47,    48,
      49,    67,    68,    69,    70,    28,    50,    51,     1,     2,
       3,   149,   150,     4,     5,     6,    35,   128,   129,   128,
     129,    31,   165,    67,    68,    69,    70,   145,   146,   225,
     226,   155,   156,    36,    41,    61,    43,    44,     4,    66,
      83,    86,    87,    88,    90,    99,    93,    95,   115,   133,
      96,   135,   101,    97,   137,   126,   127,   141,   132,   136,
     142,   143,   147,   144,   163,   172,   192,   157,   167,   161,
     168,   158,   170,   171,   162,   177,   179,   185,   181,   188,
     173,   189,   191,   187,   194,   205,   204,   206,   223,   207,
     220,   217,   184,   190,   224,   228,   230,   232,   221,   233,
     234,   186,   160,    62,   208,   229,   193,   231,   222,   200,
     235,   212,   203,     0,     0,   219,     0,     0,   236,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117
};

static const yytype_int16 yycheck[] =
{
       0,    26,    26,    37,   117,     8,     8,    14,    59,     8,
     147,   120,   113,    24,    84,     8,    38,   114,   200,    24,
      24,    91,    24,     6,     7,    36,   163,    27,    21,    22,
      28,    29,    30,    31,    34,    12,   133,    27,    38,    73,
      24,    44,     6,     7,   153,    44,    97,   184,   149,   150,
     232,    58,    74,    58,    58,    58,    58,    28,    29,    30,
      31,    59,    24,     0,    64,    60,   100,    24,    25,    45,
      24,    25,    48,    27,    36,    32,    33,    34,    54,    38,
      39,    42,    43,    40,    41,   198,    45,    49,    59,    48,
      24,    50,    51,    52,    53,    54,    55,    14,    32,    33,
      34,   126,   126,    46,    47,   139,    40,    41,    32,    33,
      34,    28,    29,    30,    31,    24,    40,    41,     3,     4,
       5,    15,    16,     8,     9,    10,    24,    21,    22,    21,
      22,    60,   132,    28,    29,    30,    31,    21,    22,    18,
      19,    24,    25,    24,    13,    11,    24,    24,     8,    14,
      58,    58,    58,    24,    24,    59,    24,    24,    58,    48,
      24,    20,    24,    26,    17,    26,    24,    17,    59,    59,
      24,    22,    58,    22,    26,    47,    22,    59,    26,    59,
      24,    57,    24,    24,    59,    59,    24,    26,    35,    24,
      47,    17,    21,    48,    26,    17,    24,    24,    21,    24,
      24,    37,    58,    48,    21,    21,    24,    26,    48,    24,
      21,   167,   126,    34,   194,    48,    59,    47,   209,    56,
     232,   199,   185,    -1,    -1,    59,    -1,    -1,    59,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,     9,    10,    62,    63,    64,
      65,    66,    67,    69,    70,    72,    74,   108,   109,     6,
       7,    12,    76,     6,     7,    27,    75,    24,    24,     0,
      60,    60,    42,    43,    71,    24,    24,    24,    58,    77,
      78,    13,    88,    24,    24,    24,    25,    32,    33,    34,
      40,    41,    81,    82,    83,    84,    85,    87,    44,    58,
      74,    11,    70,    74,    14,    58,    14,    28,    29,    30,
      31,    79,    80,    24,    58,    74,    78,    79,    24,    36,
      49,    89,    90,    58,    76,    80,    58,    58,    24,    77,
      24,   110,    74,    24,    68,    24,    24,    26,    78,    59,
      59,    24,    38,    39,    45,    48,    50,    51,    52,    53,
      54,    55,    92,    93,   106,    58,    91,    90,    46,    47,
     105,    24,    25,    27,    86,    88,    26,    24,    21,    22,
      73,    94,    59,    48,    88,    20,    59,    17,    77,    59,
      79,    17,    24,    22,    22,    21,    22,    58,    91,    15,
      16,    94,    74,   105,    89,    24,    25,    59,    57,    95,
      81,    59,    59,    26,    44,    74,    94,    26,    24,    79,
      24,    24,    47,    47,    73,    91,    91,    59,    89,    24,
      96,    35,    97,    73,    58,    26,    68,    48,    24,    17,
      48,    21,    22,    59,    26,    83,    85,    98,    99,   100,
      56,   101,    73,   110,    24,    17,    24,    24,    96,   105,
      48,    54,   106,    24,   100,   102,   103,    37,   107,    59,
      24,    48,    98,    21,    21,    18,    19,   104,    21,    48,
      24,    47,    26,    24,    21,   102,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    64,    65,    66,    66,
      66,    66,    66,    66,    66,    67,    67,    68,    68,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      74,    75,    75,    76,    76,    76,    77,    77,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    82,    83,    84,    84,    84,    84,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   109,
     110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     6,     5,     4,     2,     3,
       3,     3,     1,     1,     6,     9,     6,     3,     3,     1,
       9,     1,     0,     2,     4,     2,     2,     4,     7,     7,
       9,    11,     1,     1,     1,     1,     2,     0,     4,     2,
       1,     1,     1,     4,     1,     1,     1,     1,     4,     1,
       1,     2,     2,     1,     1,     2,     0,     3,     4,     2,
       1,     3,     3,     2,     2,     3,     3,     5,     3,     5,
       5,     4,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     2,     0,     3,     1,     2,     0,     3,     1,     3,
       5,     1,     1,     2,     0,     4,     2,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     2,     0,     3,     5,
       5,     3
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
        case 2:
#line 80 "parse.y" /* yacc.c:1646  */
    { 	
						(yyval.node) = makeNode("program");
						(yyval.node)->child = (yyvsp[-1].node);
						printf("\n\n\t\t\t\t\t\tParsing tree\n");
						printf("\t\t\t\t\t\t------------\n");
						printTree((yyval.node),0);
						printf("INPUT ACCEPTED.... \n");
						exit(0);
					}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 89 "parse.y" /* yacc.c:1646  */
    { 
						(yyval.node) = makeNode("program");
						(yyval.node)->child = (yyvsp[-1].node);
						printf("\n\n\t\t\t\t\t\tParsing tree\n");
						printf("\t\t\t\t\t\t------------\n");
						printTree((yyval.node),0);
						printf("INPUT ACCEPTED.... \n");
						exit(0);
					}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 99 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("database_stmt"); (yyval.node)->child = (yyvsp[0].node); }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 100 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("database_stmt"); (yyval.node)->child = (yyvsp[0].node); }
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 102 "parse.y" /* yacc.c:1646  */
    {	
							(yyval.node) = makeNode("create_db");
							(yyvsp[-2].node) = makeNode("CREATE");
							(yyvsp[-1].node) = makeNode("DATABASE");
							(yyvsp[0].node) = makeNode("IDENTIFIER");
							(yyval.node)->child = (yyvsp[-2].node); 
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "parse.y" /* yacc.c:1646  */
    {	
							(yyval.node) = makeNode("drop_db");
							(yyvsp[-2].node) = makeNode("DROP");
							(yyvsp[-1].node) = makeNode("DATABASE");
							(yyvsp[0].node) = makeNode("IDENTIFIER");
							(yyval.node)->child = (yyvsp[-2].node); 
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 123 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 124 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 125 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 126 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 127 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 128 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("table_stmt"); (yyval.node)->child = (yyvsp[0].node);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 130 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("create_table");
									(yyvsp[-5].node) = makeNode("CREATE");
									(yyvsp[-4].node) = makeNode("TABLE");
									(yyvsp[-3].node) = makeNode("IDENTIFIER");
									(yyvsp[-2].node) = makeNode("(");
									(yyvsp[0].node) = makeNode(")");
									(yyval.node)->child = (yyvsp[-5].node); 
									(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("create_table");
									(yyvsp[-4].node) = makeNode("CREATE");
									(yyvsp[-3].node) = makeNode("TABLE");
									(yyvsp[-2].node) = makeNode("IDENTIFIER");
									(yyvsp[-1].node) = makeNode("AS");
									(yyval.node)->child = (yyvsp[-4].node); 
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 157 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("declare_col");
									(yyvsp[-3].node) = makeNode("IDENTIFIER");
									(yyvsp[-2].node) = makeNode("DATATYPE");
									(yyvsp[-1].node) = makeNode("COMMA");
									(yyval.node)->child = (yyvsp[-3].node); 
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 167 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("declare_col");
									(yyvsp[-1].node) = makeNode("IDENTIFIER");
									(yyvsp[0].node) = makeNode("DATATYPE");
									(yyval.node)->child = (yyvsp[-1].node); 
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 175 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("drop_table");
									(yyvsp[-2].node) = makeNode("DROP");
									(yyvsp[-1].node) = makeNode("TABLE");
									(yyvsp[0].node) = makeNode("IDENTIFIER");
									(yyval.node)->child = (yyvsp[-2].node); 
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("union_stmt");
									(yyval.node)->child = (yyvsp[-2].node); 
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 191 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("union_stmt");
									(yyval.node)->child = (yyvsp[-2].node); 
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 198 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("union_types");(yyvsp[0].node) = makeNode("UNION");(yyval.node)->child = (yyvsp[0].node); }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 199 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("union_types");(yyvsp[0].node) = makeNode("UNION_ALL");(yyval.node)->child = (yyvsp[0].node); }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 201 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("insert_table");
									(yyvsp[-5].node) = makeNode("INSERT_INTO");
									(yyvsp[-4].node) = makeNode("IDENTIFIER");
									(yyvsp[-3].node) = makeNode("VALUES");
									(yyvsp[-2].node) = makeNode("(");
									(yyvsp[0].node) = makeNode(")");
									(yyval.node)->child = (yyvsp[-5].node); 
									(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 215 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("insert_table");
									(yyvsp[-8].node) = makeNode("INSERT_INTO");
									(yyvsp[-7].node) = makeNode("IDENTIFIER");
									(yyvsp[-6].node) = makeNode("(");
									(yyvsp[-4].node) = makeNode(")");
									(yyvsp[-3].node) = makeNode("VALUES");
									(yyvsp[-2].node) = makeNode("(");
									(yyvsp[0].node) = makeNode(")");
									(yyval.node)->child = (yyvsp[-8].node); 
									(yyvsp[-8].node)->sibling=(yyvsp[-7].node);
									(yyvsp[-7].node)->sibling=(yyvsp[-6].node);
									(yyvsp[-6].node)->sibling=(yyvsp[-5].node);
									(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
											}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 234 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("insert_table");
									(yyvsp[-5].node) = makeNode("INSERT_INTO");
									(yyvsp[-4].node) = makeNode("IDENTIFIER");
									(yyvsp[-3].node) = makeNode("(");
									(yyvsp[-1].node) = makeNode(")");
									(yyval.node)->child = (yyvsp[-5].node); 
									(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
									}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 247 "parse.y" /* yacc.c:1646  */
    {
										(yyval.node) = makeNode("insert_table");
										(yyvsp[-2].node) = makeNode("INSERT_INTO");
										(yyvsp[-1].node) = makeNode("IDENTIFIER");
										(yyval.node)->child = (yyvsp[-2].node); 
										(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
										(yyvsp[-1].node)->sibling=(yyvsp[0].node);
									}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 256 "parse.y" /* yacc.c:1646  */
    {
										(yyval.node) = makeNode("valuelist");
										(yyvsp[-1].node) = makeNode("COMMA");
										(yyval.node)->child = (yyvsp[-2].node); 
										(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
										(yyvsp[-1].node)->sibling=(yyvsp[0].node);
									}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("valuelist"); (yyval.node)->child = (yyvsp[0].node);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 266 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("query_stmt");
								(yyvsp[-8].node) = makeNode("SELECT");
								(yyval.node)->child = (yyvsp[-8].node); 
								(yyvsp[-8].node)->sibling=(yyvsp[-7].node);
								(yyvsp[-7].node)->sibling=(yyvsp[-6].node);
								(yyvsp[-6].node)->sibling=(yyvsp[-5].node);
								(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
								(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
								(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 280 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("isdistinct");(yyvsp[0].node) = makeNode("DISTINCT");(yyval.node)->child = (yyvsp[0].node); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 281 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("isdistinct");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 283 "parse.y" /* yacc.c:1646  */
    {	
							(yyval.node) = makeNode("from_stmt");
							(yyvsp[-1].node) = makeNode("FROM");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 289 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("from_stmt");
							(yyvsp[-3].node) = makeNode("FROM");
							(yyvsp[-2].node) = makeNode("(");
							(yyvsp[0].node) = makeNode(")");
							(yyval.node)->child = (yyvsp[-3].node); 
							(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 299 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("from_stmt");
							(yyvsp[-1].node) = makeNode("FROM");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 306 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("origintable");
							(yyvsp[-1].node) = makeNode("IDENTIFIER");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 312 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("origintable");
								(yyvsp[-3].node) = makeNode("IDENTIFIER");
								(yyvsp[-1].node) = makeNode("COMMA");
								(yyval.node)->child = (yyvsp[-3].node); 
								(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 323 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("join_stmt");
									(yyvsp[-6].node) = makeNode("IDENTIFIER");
									(yyvsp[-4].node) = makeNode("IDENTIFIER");
									(yyvsp[-3].node) = makeNode("ON");
									(yyvsp[-2].node) = makeNode("IDENTIFIER");
									(yyvsp[-1].node) = makeNode("VALUES");
									(yyvsp[-1].node) = makeNode("EQUALITY_OPERATOR");
									(yyvsp[0].node) = makeNode("IDENTIFIER");
									(yyval.node)->child = (yyvsp[-6].node); 
									(yyvsp[-6].node)->sibling=(yyvsp[-5].node);
									(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 341 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("join_stmt");
									(yyvsp[-4].node) = makeNode("IDENTIFIER");
									(yyvsp[-3].node) = makeNode("ON");
									(yyvsp[-2].node) = makeNode("IDENTIFIER");
									(yyvsp[-1].node) = makeNode("VALUES");
									(yyvsp[-1].node) = makeNode("EQUALITY_OPERATOR");
									(yyvsp[0].node) = makeNode("IDENTIFIER");
									(yyval.node)->child = (yyvsp[-6].node); 
									(yyvsp[-6].node)->sibling=(yyvsp[-5].node);
									(yyvsp[-5].node)->sibling=(yyvsp[-4].node);
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 360 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("join_types");(yyvsp[0].node) = makeNode("INNER_JOIN");(yyval.node)->child = (yyvsp[0].node); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 361 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("join_types");(yyvsp[0].node) = makeNode("LEFT_JOIN");(yyval.node)->child = (yyvsp[0].node); }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 362 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("join_types");(yyvsp[0].node) = makeNode("RIGHT_JOIN");(yyval.node)->child = (yyvsp[0].node); }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 363 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("join_types");(yyvsp[0].node) = makeNode("FULL_JOIN");(yyval.node)->child = (yyvsp[0].node); }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 365 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("rename");
							(yyvsp[-1].node) = makeNode("AS");
							(yyvsp[0].node) = makeNode("IDENTIFIER");
							(yyval.node)->child = (yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node); 
						}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 372 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("rename");}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 374 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("select_col");
								(yyvsp[-1].node) = makeNode("COMMA");
								(yyval.node)->child = (yyvsp[-3].node); 
								(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 382 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("select_col");(yyval.node)->child = (yyvsp[-1].node);(yyvsp[-1].node)->sibling = (yyvsp[0].node);}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 384 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("selectways");(yyval.node)->child = (yyvsp[0].node);	}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 385 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("selectways");(yyval.node)->child = (yyvsp[0].node);	}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 386 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("selectways");(yyval.node)->child = (yyvsp[0].node);	}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 388 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("aggfunc");
							(yyvsp[-2].node) = makeNode("(");
							(yyvsp[-1].node) = makeNode("IDENTIFIER");
							(yyvsp[0].node) = makeNode(")");
							(yyval.node)->child = (yyvsp[-3].node); 
							(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 399 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("aggfunctypes");(yyvsp[0].node) = makeNode("AVERAGE");(yyval.node)->child = (yyvsp[0].node);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 400 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("aggfunctypes");(yyvsp[0].node) = makeNode("SUM");(yyval.node)->child = (yyvsp[0].node);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 401 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("aggfunctypes");(yyvsp[0].node) = makeNode("MINIMUM");(yyval.node)->child = (yyvsp[0].node);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 402 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("aggfunctypes");(yyvsp[0].node) = makeNode("MAXIMUM");(yyval.node)->child = (yyvsp[0].node);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 404 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("counttuples");
							(yyvsp[-3].node) = makeNode("COUNT");
							(yyvsp[-2].node) = makeNode("(");
							(yyvsp[-1].node) = makeNode("IDENTIFIER");
							(yyvsp[0].node) = makeNode(")");
							(yyval.node)->child = (yyvsp[-3].node); 
							(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 416 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("counttuplestypes");(yyvsp[0].node) = makeNode("IDENTIFIER");(yyval.node)->child = (yyvsp[0].node);	}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 417 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("counttuplestypes");(yyvsp[0].node) = makeNode("SELECTALL");(yyval.node)->child = (yyvsp[0].node);	}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 418 "parse.y" /* yacc.c:1646  */
    { 
						(yyval.node) = makeNode("counttuplestypes");
						(yyvsp[-1].node) = makeNode("DISTINCT");
						(yyvsp[0].node) = makeNode("IDENTIFIER");
						(yyval.node)->child = (yyvsp[-1].node);	
						(yyvsp[-1].node)->sibling = (yyvsp[0].node);
					}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 425 "parse.y" /* yacc.c:1646  */
    { 
						(yyval.node) = makeNode("counttuplestypes");
						(yyvsp[-1].node) = makeNode("DISTINCT");
						(yyvsp[0].node) = makeNode("SELECTALL");
						(yyval.node)->child = (yyvsp[-1].node);	
						(yyvsp[-1].node)->sibling = (yyvsp[0].node);
					}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 433 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("diffcolumns");(yyvsp[0].node) = makeNode("SELECTALL");(yyval.node)->child = (yyvsp[0].node);}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 434 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("diffcolumns");(yyvsp[0].node) = makeNode("IDENTIFIER");(yyval.node)->child = (yyvsp[0].node);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 436 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("where_stmt");
							(yyvsp[-1].node) = makeNode("WHERE");
							(yyval.node)->child = (yyvsp[-1].node);	
							(yyvsp[-1].node)->child = (yyvsp[0].node);
						}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 442 "parse.y" /* yacc.c:1646  */
    {	(yyval.node) = makeNode("where_stmt");	}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 444 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("conditions");
							(yyval.node)->child = (yyvsp[-2].node); 
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 450 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("conditions");
							(yyvsp[-3].node) = makeNode("NOT");
							(yyval.node)->child = (yyvsp[-3].node); 
							(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 458 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("conditions");
							(yyvsp[-1].node) = makeNode("NOT");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 464 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("conditions");(yyval.node)->child = (yyvsp[0].node); }
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 466 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("relational_stmt");
							(yyvsp[-2].node) = makeNode("IDENTIFIER");
							(yyval.node)->child = (yyvsp[-2].node); 
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 473 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-2].node) = makeNode("IDENTIFIER");
								(yyvsp[-1].node) = makeNode("EQUALITY_OPERATOR");
								(yyvsp[0].node) = makeNode("IDENTIFIER");
								(yyval.node)->child = (yyvsp[-2].node); 
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 482 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-1].node) = makeNode("IDENTIFIER");
								(yyvsp[0].node) = makeNode("IS_NULL");
								(yyval.node)->child = (yyvsp[-1].node); 
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 489 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-1].node) = makeNode("IDENTIFIER");
								(yyvsp[0].node) = makeNode("IS_NOT_NULL");
								(yyval.node)->child = (yyvsp[-1].node); 
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
							}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 496 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-2].node) = makeNode("IDENTIFIER");
								(yyvsp[-1].node) = makeNode("LIKE");
								(yyvsp[0].node) = makeNode("STRING");
								(yyval.node)->child = (yyvsp[-2].node); 
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 505 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-2].node) = makeNode("IDENTIFIER");
								(yyvsp[-1].node) = makeNode("NOT_LIKE");
								(yyvsp[0].node) = makeNode("STRING");
								(yyval.node)->child = (yyvsp[-2].node); 
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 514 "parse.y" /* yacc.c:1646  */
    {
								(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-4].node) = makeNode("IDENTIFIER");
								(yyvsp[-2].node) = makeNode("(");
								(yyvsp[0].node) = makeNode(")");
								(yyval.node)->child = (yyvsp[-4].node); 
								(yyvsp[-4].node)->sibling=(yyvsp[-3].node);(yyvsp[-3].node)->sibling=(yyvsp[-2].node);(yyvsp[-2].node)->sibling=(yyvsp[-1].node);(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 522 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-2].node) = makeNode("IDENTIFIER");
								(yyval.node)->child = (yyvsp[-2].node); 
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 529 "parse.y" /* yacc.c:1646  */
    {	
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-4].node) = makeNode("IDENTIFIER");
								(yyvsp[-2].node) = makeNode("NUMBER");
								(yyvsp[-1].node) = makeNode("AND");
								(yyvsp[0].node) = makeNode("NUMBER");
								(yyval.node)->child = (yyvsp[-4].node); 
								(yyvsp[-4].node)->sibling=(yyvsp[-3].node);(yyvsp[-3].node)->sibling=(yyvsp[-2].node);(yyvsp[-2].node)->sibling=(yyvsp[-1].node);(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 538 "parse.y" /* yacc.c:1646  */
    {	
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-4].node) = makeNode("IDENTIFIER");
								(yyvsp[-2].node) = makeNode("STRING");
								(yyvsp[-1].node) = makeNode("AND");
								(yyvsp[0].node) = makeNode("STRING");
								(yyval.node)->child = (yyvsp[-4].node); 
								(yyvsp[-4].node)->sibling=(yyvsp[-3].node);(yyvsp[-3].node)->sibling=(yyvsp[-2].node);(yyvsp[-2].node)->sibling=(yyvsp[-1].node);(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 547 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-3].node) = makeNode("IDENTIFIER");
								(yyvsp[-1].node) = makeNode("ANY");
								(yyval.node)->child = (yyvsp[-3].node); 
								(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 555 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-3].node) = makeNode("IDENTIFIER");
								(yyvsp[-1].node) = makeNode("ALL");
								(yyval.node)->child = (yyvsp[-3].node); 
								(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
								(yyvsp[-2].node)->sibling=(yyvsp[-1].node);(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 563 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("relational_stmt");
								(yyvsp[-1].node) = makeNode("EXISTS");(yyval.node)->child = (yyvsp[-1].node); 
								(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 569 "parse.y" /* yacc.c:1646  */
    {
						(yyval.node) = makeNode("query_bracket");
						(yyvsp[-2].node) = makeNode("(");
						(yyvsp[0].node) = makeNode(")");
						(yyval.node)->child = (yyvsp[-2].node); 
						(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
						(yyvsp[-1].node)->sibling=(yyvsp[0].node);
					}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 578 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("isbetween");(yyvsp[0].node) = makeNode("BETWEEN");(yyval.node)->child = (yyvsp[0].node);}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 579 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("isbetween");(yyvsp[0].node) = makeNode("NOT_BETWEEN");(yyval.node)->child = (yyvsp[0].node);}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 581 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("ispresent");(yyvsp[0].node) = makeNode("IN");(yyval.node)->child = (yyvsp[0].node);}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 582 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("ispresent");(yyvsp[0].node) = makeNode("NOT_IN");(yyval.node)->child = (yyvsp[0].node);}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 584 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("value");(yyvsp[0].node) = makeNode("NUMBER");(yyval.node)->child = (yyvsp[0].node);}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 585 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("value");(yyvsp[0].node) = makeNode("STRING");(yyval.node)->child = (yyvsp[0].node);}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 587 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("groupby_stmt");
							(yyvsp[-1].node) = makeNode("GROUP_BY");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 593 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("groupby_stmt"); }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 595 "parse.y" /* yacc.c:1646  */
    { 
							(yyval.node) = makeNode("part1");
							(yyvsp[-2].node) = makeNode("IDENTIFIER");
							(yyvsp[-1].node) = makeNode("COMMA");
							(yyval.node)->child = (yyvsp[-2].node);	
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);	
						}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 603 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("part1");(yyvsp[0].node) = makeNode("IDENTIFIER");(yyval.node)->child = (yyvsp[0].node);}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 605 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("having_stmt");
							(yyvsp[-1].node) = makeNode("HAVING");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 611 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("having_stmt"); }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 613 "parse.y" /* yacc.c:1646  */
    { 
							(yyval.node) = makeNode("havingcond");
							(yyval.node)->child = (yyvsp[-2].node);	
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);	
							}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 619 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("havingcond");(yyval.node)->child = (yyvsp[0].node);}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 621 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("aggcond");
							(yyvsp[0].node) = makeNode("NUMBER");
							(yyval.node)->child = (yyvsp[-2].node);	
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);	
						}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 628 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("aggcond");
							(yyvsp[-3].node) = makeNode("BETWEEN");
							(yyvsp[-2].node) = makeNode("NUMBER");
							(yyvsp[-1].node) = makeNode("AND");
							(yyvsp[0].node) = makeNode("NUMBER");
							(yyval.node)->child = (yyvsp[-4].node);	
							(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
							(yyvsp[-3].node)->sibling=(yyvsp[-2].node);	
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);	
						}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 641 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("oper1");(yyval.node)->child = (yyvsp[0].node);}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 642 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("oper1");(yyval.node)->child = (yyvsp[0].node);}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 644 "parse.y" /* yacc.c:1646  */
    {
							(yyval.node) = makeNode("orderby_stmt");
							(yyvsp[-1].node) = makeNode("ORDER_BY");
							(yyval.node)->child = (yyvsp[-1].node); 
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 650 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("orderby_stmt");}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 652 "parse.y" /* yacc.c:1646  */
    { 
							(yyval.node) = makeNode("part2");
							(yyvsp[-1].node) = makeNode("COMMA");
							(yyval.node)->child = (yyvsp[-3].node);	
							(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);	
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);	
						}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 660 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("part2");(yyval.node)->child = (yyvsp[-1].node);(yyvsp[-1].node)->sibling=(yyvsp[0].node); }
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 662 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("part3");(yyvsp[0].node) = makeNode("IDENTIFIER");(yyval.node)->child = (yyvsp[0].node);}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 663 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("part3");(yyval.node)->child = (yyvsp[0].node);}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 665 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("sortorder");(yyvsp[0].node) = makeNode("ASC");(yyval.node)->child = (yyvsp[0].node); }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 666 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("sortorder");(yyvsp[0].node) = makeNode("ASC");(yyval.node)->child = (yyvsp[0].node); }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 667 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("sortorder");}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 669 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("logical_op");(yyvsp[0].node) = makeNode("AND");(yyval.node)->child = (yyvsp[0].node); }
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 670 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("logical_op");(yyvsp[0].node) = makeNode("OR");(yyval.node)->child = (yyvsp[0].node); }
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 672 "parse.y" /* yacc.c:1646  */
    { 	(yyval.node) = makeNode("rel_oper");
							(yyvsp[0].node) = makeNode("RELATIONAL_OPERATOR");
							(yyval.node)->child = (yyvsp[0].node);	}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 675 "parse.y" /* yacc.c:1646  */
    { 	(yyval.node) = makeNode("rel_oper");
							(yyvsp[0].node) = makeNode("EQUALITY_OPERATOR");
							(yyval.node)->child = (yyvsp[0].node);	}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 679 "parse.y" /* yacc.c:1646  */
    {	(yyval.node) = makeNode("limit_stmt");
							(yyvsp[-1].node) = makeNode("LIMIT");
							(yyvsp[0].node) = makeNode("NUMBER");
							(yyval.node)->child = (yyvsp[-1].node); (yyvsp[-1].node)->sibling = (yyvsp[0].node);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 683 "parse.y" /* yacc.c:1646  */
    {	(yyval.node) = makeNode("limit_stmt"); }
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 685 "parse.y" /* yacc.c:1646  */
    {	(yyval.node) = makeNode("delete_stmt");
							(yyvsp[-2].node) = makeNode("DELETE");
							(yyval.node)->child = (yyvsp[-2].node);	
							(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
							(yyvsp[-1].node)->sibling=(yyvsp[0].node);
						}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 692 "parse.y" /* yacc.c:1646  */
    { (yyval.node) = makeNode("update_stmt");
									(yyvsp[-4].node) = makeNode("UPDATE");
									(yyvsp[-3].node) = makeNode("IDENTIFIER");
									(yyvsp[-2].node) = makeNode("SET");
									(yyval.node)->child = (yyvsp[-4].node);	
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
									}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 703 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = makeNode("intializelist");
									(yyvsp[-4].node) = makeNode("IDENTIFIER");
									(yyvsp[-3].node) = makeNode("EQUALITY_OPERATOR");
									(yyvsp[-1].node) = makeNode("COMMA");
									(yyval.node)->child = (yyvsp[-4].node);	
									(yyvsp[-4].node)->sibling=(yyvsp[-3].node);
									(yyvsp[-3].node)->sibling=(yyvsp[-2].node);
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
										}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 713 "parse.y" /* yacc.c:1646  */
    {
									(yyval.node) = makeNode("intializelist");
									(yyvsp[-2].node) = makeNode("IDENTIFIER");
									(yyvsp[-1].node) = makeNode("EQUALITY_OPERATOR");
									(yyval.node)->child = (yyvsp[-2].node);	
									(yyvsp[-2].node)->sibling=(yyvsp[-1].node);
									(yyvsp[-1].node)->sibling=(yyvsp[0].node);
								}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2690 "y.tab.c" /* yacc.c:1646  */
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
#line 722 "parse.y" /* yacc.c:1906  */

#include"lex.yy.c"

struct Node* makeNode(char* s) {
    struct Node *node = malloc(sizeof(struct Node));
    node->child = NULL;
    node->sibling = NULL;
    strcpy(node->str,s);
    return node;
}

void printTree(struct Node* root,int level)
{
	if(root==NULL)
		return;
	if(root->child==NULL && root->str[0] >= 97 && root->str[0]<=122)
		return;
	for(int i=0;i<level;i++)
		printf("	");
	if( root->str[0] >= 65 && root->str[0]<=90)
	{
		printf("\033[01;33m");
		printf("-%s\n",root->str);
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;32m");
		printf("-%s\n",root->str);
		printf("\033[0m");
	}
	if(root->child!=NULL)
	{
		root = root->child;
		while(root!=NULL)
		{
			printTree(root,level+1);
			root = root->sibling;
		}
	}
}

int main() 
{
	printf("Enter an SQL query\n");
	yyparse();
}
