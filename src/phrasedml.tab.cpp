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

/* Substitute the type names.  */
#define YYSTYPE         PHRASED_YYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         phrased_yyparse
#define yylex           phrased_yylex
#define yyerror         phrased_yyerror
#define yydebug         phrased_yydebug
#define yynerrs         phrased_yynerrs

#define yylval          phrased_yylval
#define yychar          phrased_yychar

/* Copy the first part of user declarations.  */
#line 26 "phrasedml.ypp" /* yacc.c:339  */

  //#define YYSTYPE double
#include <cassert>
#include <ctype.h>
#include <fstream>
#include <iostream>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string>
#include <vector>
#ifndef NSBML
#include <sbml/SBMLTypes.h>
#endif
#include "registry.h"
//#include "module.h"
//#include "unitdef.h"
#include "stringx.h"
#include "modelChange.h"

  class ModelChange;

  using namespace std;
  int phrased_yylex(void);
  void phrased_yyerror(char const *);
  Registry g_registry;
  int phrased_yylloc_last_line = 1;

#line 104 "phrasedml.tab.cpp" /* yacc.c:339  */

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


/* Debug traces.  */
#ifndef PHRASED_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PHRASED_YYDEBUG 1
#  else
#   define PHRASED_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PHRASED_YYDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PHRASED_YYDEBUG */
#if PHRASED_YYDEBUG
extern int phrased_yydebug;
#endif

/* Token type.  */
#ifndef PHRASED_YYTOKENTYPE
# define PHRASED_YYTOKENTYPE
  enum phrased_yytokentype
  {
    YYEOF = 0,
    NUM = 259,
    PHRASEWORD = 260,
    TEXTSTRING = 261,
    ERROR = 262
  };
#endif

/* Value type.  */
#if ! defined PHRASED_YYSTYPE && ! defined PHRASED_YYSTYPE_IS_DECLARED

union PHRASED_YYSTYPE
{
#line 56 "phrasedml.ypp" /* yacc.c:355  */

  char character;
  const string* word;
  vector<const string*>* words;
  vector<string>* wordstr;
  vector<vector<string>*>* wordstrvec;
  vector<vector<const string*>* >* nameslist;
  double number;
  vector<double>* nums;
  vector<ModelChange>* changelist;

#line 169 "phrasedml.tab.cpp" /* yacc.c:355  */
};

typedef union PHRASED_YYSTYPE PHRASED_YYSTYPE;
# define PHRASED_YYSTYPE_IS_TRIVIAL 1
# define PHRASED_YYSTYPE_IS_DECLARED 1
#endif


extern PHRASED_YYSTYPE phrased_yylval;

int phrased_yyparse (void);



/* Copy the second part of user declarations.  */

#line 186 "phrasedml.tab.cpp" /* yacc.c:358  */

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
         || (defined PHRASED_YYSTYPE_IS_TRIVIAL && PHRASED_YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   262

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      27,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,     2,     2,    10,     4,     2,
      21,    22,     8,     7,    18,     6,    16,     9,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
      25,    17,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,    11,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     5,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,    12,
      13,    14,    15
};

#if PHRASED_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    94,    95,    96,    97,    98,    99,   102,
     103,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   136,   137,   138,
     141,   144,   147,   148,   151,   152,   155,   156,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   175,   176,   177,
     178,   190,   191,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   206,   207
};
#endif

#if PHRASED_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"mathematical symbol\"",
  "'&'", "'|'", "'-'", "'+'", "'*'", "'/'", "'%'", "'^'", "\"number\"",
  "\"element name\"", "\"text string in quotes\"", "\"an error\"", "'.'",
  "'='", "','", "'['", "']'", "'('", "')'", "'!'", "'>'", "'<'", "';'",
  "'\\n'", "$accept", "input", "varOrKeyword", "equals", "changelist",
  "numlist", "plot", "name", "number", "taskslist", "vslist", "formula",
  "commaformula", "mathThing", "lineend", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,    38,   124,    45,    43,    42,    47,
      37,    94,   259,   260,   261,   262,    46,    61,    44,    91,
      93,    40,    41,    33,    62,    60,    59,    10
};
# endif

#define YYPACT_NINF -68

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-68)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -68,     5,   -68,   -68,   -68,   -68,   -68,   -68,   107,   -14,
     -14,   -14,   -68,   -68,   -68,   -10,    11,   226,   -68,    44,
      10,   200,   -68,   -68,   -68,   -68,    -5,    22,   134,   -68,
     226,    41,    48,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,    -2,   214,   -68,   -68,   -68,    22,   -68,    11,    11,
      38,   -68,   200,   -68,   -68,   106,   -68,    52,   -68,   -68,
     200,    12,    84,    22,    67,    -2,    84,   -68,    -2,   -68,
     226,   -68,    50,   108,    11,    11,    34,    50,   108,   -68,
     200,   226,   227,    11,    22,    84,   -68,   237,   200,   226,
      11,    -2,   226,     6,    82,    50,   108,    11,   200,   108,
      90,   156,    -2,    -2,   105,   226,    23,   244,   108,   -68,
     -68,   -68,    85,    -2,   200,   226,    -2,   226,    62,   -68,
     -68,   200,   109,   178,    -2,    -2,   132,   -68,   -68,   -68,
      93,    -2,   -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     7,     9,     8,    73,    74,     0,     0,
       0,     0,     6,    51,    49,     0,     0,     0,    52,    48,
      40,    46,     3,     4,     5,    10,     0,    48,     0,    41,
       0,     0,     0,    64,    63,    65,    66,    71,    67,    54,
      72,    37,     0,    70,    68,    69,    53,    57,    11,     0,
      15,    50,    47,    58,    59,     0,    42,     0,    38,    55,
      61,     0,     0,    44,     0,    37,     0,    43,     0,    60,
       0,    56,     0,    12,     0,     0,     0,    17,    16,    39,
      62,     0,    13,     0,    45,     0,    21,    18,    22,     0,
       0,    37,     0,     0,     0,     0,    20,     0,    23,    14,
       0,     0,     0,    37,     0,     0,    29,     0,    19,    27,
      28,    24,     0,     0,    30,     0,    37,     0,     0,    26,
      25,    31,     0,     0,     0,    37,     0,    35,    36,    32,
       0,     0,    34,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,    -1,   -68,   -64,   -48,   -68,   -68,   -67,   -68,
     -68,    20,   -68,   -68,   122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    46,     9,    73,    57,    10,    11,    58,    64,
      20,    21,    61,    47,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       8,    79,    78,    25,    55,     2,     3,    19,     4,    48,
      56,    15,     6,     7,    49,    26,    27,    76,     4,     4,
       5,    96,    15,   102,     4,    50,    99,   103,    30,    27,
      70,     6,     7,   108,    71,   111,     4,    28,    15,    15,
     115,    27,   116,   100,   117,    53,   120,    62,    63,    66,
      52,     4,    68,    54,    15,   112,    86,   129,    29,    65,
      15,    72,    60,     4,   133,    77,    15,    81,   122,    27,
      68,    82,    69,    84,    85,     4,    87,   130,    15,   124,
      27,    93,    94,   125,    95,    74,    93,    75,    27,    95,
      80,    27,   104,   106,   107,     4,    95,     4,    15,   105,
      15,    88,     0,    68,    27,   118,    93,   119,    68,    98,
     109,    68,   101,    13,    27,   132,    27,   126,    67,    14,
       4,    15,   113,    15,    16,   114,    83,    68,    17,   127,
      18,    22,    23,    24,     0,   121,     0,   123,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     4,    15,   131,
       0,    40,     0,    41,     0,    42,    51,    43,    44,    45,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     4,
       0,     0,     0,    40,     0,    41,     0,    42,   110,    43,
      44,    45,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     4,     0,     0,     0,    40,     0,    41,     0,    42,
     128,    43,    44,    45,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     4,     0,     0,     0,    40,     0,    41,
      13,    42,     0,    43,    44,    45,    14,     4,     0,     0,
       0,     0,    13,     0,     0,    17,    59,    18,    14,     4,
       4,     0,     0,    15,    89,    90,    91,    17,    92,    18,
       4,     0,     0,    15,    89,    97,    91,     4,    92,     0,
      15,    89,     0,    91,     0,    92
};

static const yytype_int16 yycheck[] =
{
       1,    68,    66,    13,     6,     0,     1,     8,    13,    14,
      12,    16,    26,    27,    19,    16,    17,    65,    13,    13,
      15,    85,    16,    17,    13,    26,    90,    21,    18,    30,
      18,    26,    27,    97,    22,   102,    13,    17,    16,    16,
      17,    42,    19,    91,    21,     4,   113,    48,    49,    50,
      30,    13,    18,     5,    16,   103,    22,   124,    14,    21,
      16,    62,    42,    13,   131,    66,    16,    17,   116,    70,
      18,    72,    20,    74,    75,    13,    77,   125,    16,    17,
      81,    82,    83,    21,    85,    18,    87,    20,    89,    90,
      70,    92,    93,    94,    95,    13,    97,    13,    16,    17,
      16,    81,    -1,    18,   105,   106,   107,    22,    18,    89,
      20,    18,    92,     6,   115,    22,   117,   118,    12,    12,
      13,    16,    17,    16,    17,   105,    18,    18,    21,    20,
      23,     9,    10,    11,    -1,   115,    -1,   117,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    16,    17,
      -1,    17,    -1,    19,    -1,    21,    22,    23,    24,    25,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    -1,    19,    -1,    21,    22,    23,
      24,    25,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    17,    -1,    19,    -1,    21,
      22,    23,    24,    25,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    17,    -1,    19,
       6,    21,    -1,    23,    24,    25,    12,    13,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    21,    22,    23,    12,    13,
      13,    -1,    -1,    16,    17,    18,    19,    21,    21,    23,
      13,    -1,    -1,    16,    17,    18,    19,    13,    21,    -1,
      16,    17,    -1,    19,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,     0,     1,    13,    15,    26,    27,    30,    31,
      34,    35,    42,     6,    12,    16,    17,    21,    23,    30,
      38,    39,    42,    42,    42,    13,    30,    30,    39,    14,
      18,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    19,    21,    23,    24,    25,    30,    41,    14,    19,
      30,    22,    39,     4,     5,     6,    12,    33,    36,    22,
      39,    40,    30,    30,    37,    21,    30,    12,    18,    20,
      18,    22,    30,    32,    18,    20,    33,    30,    32,    36,
      39,    17,    30,    18,    30,    30,    22,    30,    39,    17,
      18,    19,    21,    30,    30,    30,    32,    18,    39,    32,
      33,    39,    17,    21,    30,    17,    30,    30,    32,    20,
      22,    36,    33,    17,    39,    17,    19,    21,    30,    22,
      36,    39,    33,    39,    17,    21,    30,    20,    22,    36,
      33,    17,    22,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    29,    29,    29,    29,    29,    29,    30,
      30,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    33,    33,    33,
      34,    35,    36,    36,    37,    37,    38,    38,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    40,    40,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    42,    42
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     3,     3,     2,     2,     2,     1,
       3,     4,     6,     7,     9,     4,     6,     6,     7,     9,
       8,     7,     3,     4,     5,     6,     6,     5,     5,     4,
       5,     6,     7,     8,     8,     7,     7,     0,     1,     3,
       2,     3,     1,     2,     1,     3,     1,     3,     1,     1,
       3,     1,     1,     2,     2,     3,     4,     2,     3,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#if PHRASED_YYDEBUG

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
#else /* !PHRASED_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PHRASED_YYDEBUG */


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
        case 3:
#line 94 "phrasedml.ypp" /* yacc.c:1646  */
    {}
#line 1373 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 95 "phrasedml.ypp" /* yacc.c:1646  */
    {}
#line 1379 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 96 "phrasedml.ypp" /* yacc.c:1646  */
    {}
#line 1385 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "phrasedml.ypp" /* yacc.c:1646  */
    {}
#line 1391 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "phrasedml.ypp" /* yacc.c:1646  */
    {YYABORT;}
#line 1397 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 99 "phrasedml.ypp" /* yacc.c:1646  */
    {YYABORT;}
#line 1403 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.words) = new vector<const string*>; (yyval.words)->push_back((yyvsp[0].word));}
#line 1409 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.words) = (yyvsp[-2].words); (yyval.words)->push_back((yyvsp[0].word));}
#line 1415 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 106 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addModelDef((yyvsp[-3].words), (yyvsp[-1].words), (yyvsp[0].word))) YYABORT;}
#line 1421 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 107 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addModelDef((yyvsp[-5].words), (yyvsp[-3].words), (yyvsp[-2].word), (yyvsp[-1].words), (yyvsp[0].changelist))) YYABORT;}
#line 1427 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 108 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addModelDef((yyvsp[-6].words), (yyvsp[-4].words), (yyvsp[-3].word), (yyvsp[-2].words), (yyvsp[-1].words), (yyvsp[0].words))) YYABORT;}
#line 1433 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addModelDef((yyvsp[-8].words), (yyvsp[-6].words), (yyvsp[-5].word), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].changelist))) YYABORT;}
#line 1439 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addEquals((yyvsp[-3].words), (yyvsp[-1].words), (yyvsp[0].words))) YYABORT;}
#line 1445 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 111 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addEquals((yyvsp[-5].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[-1].words), (yyvsp[0].changelist))) YYABORT;}
#line 1451 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 112 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addEquals((yyvsp[-5].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[-1].words), (yyvsp[0].words))) YYABORT;}
#line 1457 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 113 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addEquals((yyvsp[-6].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[-1].words), (yyvsp[0].words))) YYABORT;}
#line 1463 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 114 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addEquals((yyvsp[-8].words), (yyvsp[-6].words), (yyvsp[-5].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words))) YYABORT;}
#line 1469 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 115 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addRepeatedTask((yyvsp[-7].words), (yyvsp[-5].words), (yyvsp[-3].nameslist), (yyvsp[-1].words), (yyvsp[0].changelist))) YYABORT;}
#line 1475 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 116 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addEquals((yyvsp[-6].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].nums))) YYABORT;}
#line 1481 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-2].words), (yyvsp[0].wordstr))) YYABORT;}
#line 1487 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 120 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].wordstr), true)) YYABORT;}
#line 1493 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 121 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].number))) YYABORT;}
#line 1499 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 122 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-5].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].number))) YYABORT;}
#line 1505 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 123 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-5].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].nums))) YYABORT;}
#line 1511 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 124 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].nums))) YYABORT;}
#line 1517 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 125 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = new vector<ModelChange>; if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].wordstr), false)) YYABORT;}
#line 1523 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 126 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-3].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-1].words), (yyvsp[0].words))) YYABORT;}
#line 1529 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-4].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-2].words), (yyvsp[0].wordstr))) YYABORT;}
#line 1535 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-5].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].wordstr), true)) YYABORT;}
#line 1541 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-6].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].number))) YYABORT;}
#line 1547 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-7].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-5].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-2].words), (yyvsp[0].number))) YYABORT;}
#line 1553 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-7].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-5].words), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].nums))) YYABORT;}
#line 1559 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-6].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].nums))) YYABORT;}
#line 1565 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 133 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.changelist) = (yyvsp[-6].changelist); if (g_registry.addToChangeList((yyval.changelist), (yyvsp[-4].words), (yyvsp[-3].words), (yyvsp[-1].wordstr), false)) YYABORT;}
#line 1571 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 136 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.nums) = new vector<double>;}
#line 1577 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 137 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.nums) = new vector<double>; (yyval.nums)->push_back((yyvsp[0].number));}
#line 1583 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.nums) = (yyvsp[-2].nums); (yyval.nums)->push_back((yyvsp[0].number));}
#line 1589 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 141 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.addOutput((yyvsp[-1].words), (yyvsp[0].wordstrvec))) YYABORT;}
#line 1595 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 144 "phrasedml.ypp" /* yacc.c:1646  */
    {if (g_registry.setName((yyvsp[-2].words), (yyvsp[-1].words), (yyvsp[0].word))) YYABORT;}
#line 1601 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number);}
#line 1607 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.number) = -(yyvsp[0].number);}
#line 1613 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.nameslist) = new vector<vector<const string*>*>; (yyval.nameslist)->push_back((yyvsp[0].words));}
#line 1619 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 152 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.nameslist) = (yyvsp[-2].nameslist); (yyval.nameslist)->push_back((yyvsp[0].words));}
#line 1625 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 155 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstrvec) = new vector<vector<string>* >; (yyval.wordstrvec)->push_back((yyvsp[0].wordstr));}
#line 1631 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 156 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstrvec) = (yyvsp[-2].wordstrvec); (yyval.wordstrvec)->push_back((yyvsp[0].wordstr));}
#line 1637 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = new vector<string>(); (yyval.wordstr)->push_back(getStringFrom((yyvsp[0].words), g_registry.getSeparator())); }
#line 1643 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 160 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = new vector<string>(); (yyval.wordstr)->push_back(g_registry.ftoa((yyvsp[0].number))); }
#line 1649 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 161 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-1].wordstr); (yyval.wordstr)->insert((yyval.wordstr)->begin(), "("); (yyval.wordstr)->push_back(")"); }
#line 1655 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 162 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = new vector<string>(); (yyval.wordstr)->push_back("-"); }
#line 1661 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 163 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = new vector<string>(); (yyval.wordstr)->push_back("!"); }
#line 1667 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 164 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-1].wordstr); (yyval.wordstr)->push_back(getStringFrom((yyvsp[0].words), g_registry.getSeparator())); }
#line 1673 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 165 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-1].wordstr); (yyvsp[-1].wordstr)->push_back(g_registry.ftoa((yyvsp[0].number))); }
#line 1679 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 166 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-2].wordstr); (yyval.wordstr)->push_back("()");}
#line 1685 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "phrasedml.ypp" /* yacc.c:1646  */
    {
                  (yyval.wordstr) = (yyvsp[-3].wordstr);
                  (yyval.wordstr)->push_back("(");
                  (yyval.wordstr)->insert((yyval.wordstr)->end(), (yyvsp[-1].wordstr)->begin(), (yyvsp[-1].wordstr)->end());
                  (yyval.wordstr)->push_back(")");
                  delete (yyvsp[-1].wordstr);
                }
#line 1697 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-1].wordstr); string mt; mt.push_back((yyvsp[0].character)); (yyvsp[-1].wordstr)->push_back(mt); }
#line 1703 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-2].wordstr); (yyvsp[-2].wordstr)->push_back("&&"); }
#line 1709 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-2].wordstr); (yyvsp[-2].wordstr)->push_back("||"); }
#line 1715 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 179 "phrasedml.ypp" /* yacc.c:1646  */
    {
                  (yyval.wordstr) = (yyvsp[-3].wordstr);
                  (yyval.wordstr)->push_back("[");
                  for (size_t d=0; d<(yyvsp[-1].nums)->size(); d++) {
                    (yyval.wordstr)->push_back(g_registry.ftoa((*(yyvsp[-1].nums))[d]));
                  }
                  (yyval.wordstr)->push_back("]");
                  delete (yyvsp[-1].nums);
                }
#line 1729 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 190 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[0].wordstr);}
#line 1735 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 191 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.wordstr) = (yyvsp[-2].wordstr); (yyval.wordstr)->push_back(","); (yyval.wordstr)->insert((yyval.wordstr)->end(), (yyvsp[0].wordstr)->begin(), (yyvsp[0].wordstr)->end()); }
#line 1741 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 194 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '+';}
#line 1747 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 195 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '-';}
#line 1753 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 196 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '*';}
#line 1759 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 197 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '/';}
#line 1765 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 198 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '^';}
#line 1771 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '>';}
#line 1777 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '<';}
#line 1783 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 201 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '!';}
#line 1789 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 202 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '%';}
#line 1795 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 203 "phrasedml.ypp" /* yacc.c:1646  */
    {(yyval.character) = '=';}
#line 1801 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 206 "phrasedml.ypp" /* yacc.c:1646  */
    {}
#line 1807 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 207 "phrasedml.ypp" /* yacc.c:1646  */
    {}
#line 1813 "phrasedml.tab.cpp" /* yacc.c:1646  */
    break;


#line 1817 "phrasedml.tab.cpp" /* yacc.c:1646  */
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
#line 210 "phrasedml.ypp" /* yacc.c:1906  */



void phrased_yyerror(char const *s)
{
  stringstream err;
  err << "Error in line " << phrased_yylloc_last_line << ": " << s;
  if (g_registry.getError()=="") {
    g_registry.setError(err.str(), phrased_yylloc_last_line);
  }
}

int phrased_yylex(void)
{
  char cc = 0;
  g_registry.input->get(cc);

  //If we're done with the file:
  if (g_registry.input->eof()) {
    if (g_registry.finalize()) {
      return ERROR;
    }
    return 0;
  }
  if (!g_registry.input->good()) {
    //Something else went wrong!
    g_registry.setError("Unparseable content in line " + g_registry.ftoa(phrased_yylloc_last_line) + ".", phrased_yylloc_last_line);
    return ERROR;
  }

  // Skip white space.
  while ((cc == ' ' ||
         cc == '\t') &&
         !g_registry.input->eof()) {
    g_registry.input->get(cc);
  }
  if (g_registry.input->eof()) return phrased_yylex();
  // Skip carriage returns after '\':
  if (cc == '\\') {
    g_registry.input->get(cc);
    if (cc == '\r' || cc == '\n' || cc == ' ') {
      while ((cc == '\r' || cc == '\n' || cc == ' ') && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      ++phrased_yylloc_last_line;
      g_registry.input->unget();
      return phrased_yylex();
    }
    else {
      g_registry.input->unget();
      cc = '\\';
    }
 }

  // Parse words
  if (cc > 0 && cc < 256 && (isalpha(cc) || cc == '_')) {
    string word;
    while (cc > 0 && cc < 256 && (isalpha(cc) || isdigit(cc) || cc == '_') && !g_registry.input->eof()) {
      word += cc;
      g_registry.input->get(cc);
    }
    if (!g_registry.input->eof()) {
      g_registry.input->unget();
    }
    //Otherwise, it's a user-defined variable:
    phrased_yylval.word = g_registry.addWord(word);
    //cout << "\tRead word '" << word << "'." << endl;
    if (word == "vs" && g_registry.input->peek() == '.') {
      g_registry.input->get(cc);
    }
    return PHRASEWORD;
  }

  // Parse numbers
  if (cc > 0 && cc < 256 && (isdigit(cc) || (cc=='.' && isdigit(g_registry.input->peek())))) {
    double number;
    g_registry.input->unget();
    streampos numbegin = g_registry.input->tellg();
    *g_registry.input >> number;
    streampos numend = g_registry.input->tellg();
    if (g_registry.input->fail()) {
      //The gcc 4.4.3 parser fails if there's an 'e' after a number with no exponent.
      g_registry.input->clear();
      g_registry.input->seekg(numbegin);
      int numint;
      *g_registry.input >> numint;
      phrased_yylval.number = numint;
      if (g_registry.input->peek() == '.') {
        g_registry.input->get();
        *g_registry.input >> numint;
        double fraction = numint;
        while (fraction >= 1.0) {
          fraction = fraction/10;
        }
        phrased_yylval.number += fraction;
      }
      return NUM;
    }
    assert(g_registry.input->good());
    phrased_yylval.number = number;
    //However, pre-4.4.3 parsers would read the 'e' anyway, and we don't want it to, so unget the 'e'.
    g_registry.input->unget();
    if (!g_registry.input->good()) {
      //Sometimes you can't do this?  For some reason?  If this happens we'll assume there was no 'e'.
      g_registry.input->clear();
    }
    else {
      g_registry.input->get(cc);
      if (cc == 'e' || cc == 'E') {
        g_registry.input->unget();
      }
    }
    return NUM;
  }

  //Skip comments:
  if (cc == '/') {
    g_registry.input->get(cc);
    if (cc == '/') {
      while (cc != '\n' && cc != '\r' && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      if (!g_registry.input->eof()) {
        g_registry.input->unget();
      }
      return phrased_yylex();
    }
    else if (cc == '*') {
      bool nextstar = false;
      g_registry.input->get(cc);
      while ((!g_registry.input->eof()) && !(nextstar && cc == '/')) {
        if (cc == '*') {
          nextstar = true;
        }
        else {
          nextstar = false;
        }
        g_registry.input->get(cc);
      }
      return phrased_yylex();
    }
    else {
      g_registry.input->unget();
      cc = '/';
    }
  }
  else if (cc == '#') {
      while (cc != '\n' && cc != '\r' && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      if (!g_registry.input->eof()) {
        g_registry.input->unget();
      }
      return phrased_yylex();
  }

  //Parse text strings
  if (cc == '"') {
    string textstring;
    long ccount = 0;
    g_registry.input->get(cc);
    while (cc != '"' && cc != '\r' && cc != '\n' && !g_registry.input->eof()) {
      textstring += cc;
      ccount++;
      g_registry.input->get(cc);
    }
    if (cc == '\r' || cc == '\n' || g_registry.input->eof()) {
      for (; ccount > 0; ccount--) {
        g_registry.input->unget();
      }
      cc = '"';
    }
    else {
      phrased_yylval.word = g_registry.addWord(textstring);
      return TEXTSTRING;
    }
  }

  //This converts PC and Mac end-of-line characters to \n:
  if (cc == '\r') {
    g_registry.input->get(cc);
    if (cc != '\n') {
      g_registry.input->unget();
    }
    cc = '\n';
  }
  if (cc == '\n') {
    ++phrased_yylloc_last_line;
  }
  return cc;
}
