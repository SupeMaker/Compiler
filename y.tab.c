/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "compiler.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol.h"
#include "ASTNode.h"
struct HashTable *symbolTable;
extern int yylineno;
extern int whileflag, declared_error, flags[100];
int yylex();


#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    NUM = 259,                     /* NUM  */
    LESS_EQUAL_THAN = 260,         /* LESS_EQUAL_THAN  */
    LESS_THAN = 261,               /* LESS_THAN  */
    GREAT_THAN = 262,              /* GREAT_THAN  */
    GREAT_EQUAL_THAN = 263,        /* GREAT_EQUAL_THAN  */
    DOUBLE_EQUAL = 264,            /* DOUBLE_EQUAL  */
    NOT_EQUAL = 265,               /* NOT_EQUAL  */
    KEYWORD_DOUBLE_LESS = 266,     /* KEYWORD_DOUBLE_LESS  */
    KEYWORD_OUT = 267,             /* KEYWORD_OUT  */
    KEYWORD_ELSE = 268,            /* KEYWORD_ELSE  */
    KEYWORD_IF = 269,              /* KEYWORD_IF  */
    KEYWORD_INT = 270,             /* KEYWORD_INT  */
    KEYWORD_RETURN = 271,          /* KEYWORD_RETURN  */
    KEYWORD_VOID = 272,            /* KEYWORD_VOID  */
    KEYWORD_WHILE = 273,           /* KEYWORD_WHILE  */
    MULTI_LINE_ANNOTATION = 274,   /* MULTI_LINE_ANNOTATION  */
    KEYWORD_AND = 275,             /* KEYWORD_AND  */
    KEYWORD_OR = 276,              /* KEYWORD_OR  */
    KEYWORD_NO = 277,              /* KEYWORD_NO  */
    KEYWORD_FOR = 278,             /* KEYWORD_FOR  */
    KEYWORD_BREAK = 279,           /* KEYWORD_BREAK  */
    KEYWORD_CONTINUE = 280,        /* KEYWORD_CONTINUE  */
    DOUBLE_ADD = 281,              /* DOUBLE_ADD  */
    DOUBLE_SUB = 282               /* DOUBLE_SUB  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define NUM 259
#define LESS_EQUAL_THAN 260
#define LESS_THAN 261
#define GREAT_THAN 262
#define GREAT_EQUAL_THAN 263
#define DOUBLE_EQUAL 264
#define NOT_EQUAL 265
#define KEYWORD_DOUBLE_LESS 266
#define KEYWORD_OUT 267
#define KEYWORD_ELSE 268
#define KEYWORD_IF 269
#define KEYWORD_INT 270
#define KEYWORD_RETURN 271
#define KEYWORD_VOID 272
#define KEYWORD_WHILE 273
#define MULTI_LINE_ANNOTATION 274
#define KEYWORD_AND 275
#define KEYWORD_OR 276
#define KEYWORD_NO 277
#define KEYWORD_FOR 278
#define KEYWORD_BREAK 279
#define KEYWORD_CONTINUE 280
#define DOUBLE_ADD 281
#define DOUBLE_SUB 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "compiler.y"

  char* name;
  struct astNode *node;

#line 196 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_LESS_EQUAL_THAN = 5,            /* LESS_EQUAL_THAN  */
  YYSYMBOL_LESS_THAN = 6,                  /* LESS_THAN  */
  YYSYMBOL_GREAT_THAN = 7,                 /* GREAT_THAN  */
  YYSYMBOL_GREAT_EQUAL_THAN = 8,           /* GREAT_EQUAL_THAN  */
  YYSYMBOL_DOUBLE_EQUAL = 9,               /* DOUBLE_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 10,                 /* NOT_EQUAL  */
  YYSYMBOL_KEYWORD_DOUBLE_LESS = 11,       /* KEYWORD_DOUBLE_LESS  */
  YYSYMBOL_KEYWORD_OUT = 12,               /* KEYWORD_OUT  */
  YYSYMBOL_KEYWORD_ELSE = 13,              /* KEYWORD_ELSE  */
  YYSYMBOL_KEYWORD_IF = 14,                /* KEYWORD_IF  */
  YYSYMBOL_KEYWORD_INT = 15,               /* KEYWORD_INT  */
  YYSYMBOL_KEYWORD_RETURN = 16,            /* KEYWORD_RETURN  */
  YYSYMBOL_KEYWORD_VOID = 17,              /* KEYWORD_VOID  */
  YYSYMBOL_KEYWORD_WHILE = 18,             /* KEYWORD_WHILE  */
  YYSYMBOL_MULTI_LINE_ANNOTATION = 19,     /* MULTI_LINE_ANNOTATION  */
  YYSYMBOL_KEYWORD_AND = 20,               /* KEYWORD_AND  */
  YYSYMBOL_KEYWORD_OR = 21,                /* KEYWORD_OR  */
  YYSYMBOL_KEYWORD_NO = 22,                /* KEYWORD_NO  */
  YYSYMBOL_KEYWORD_FOR = 23,               /* KEYWORD_FOR  */
  YYSYMBOL_KEYWORD_BREAK = 24,             /* KEYWORD_BREAK  */
  YYSYMBOL_KEYWORD_CONTINUE = 25,          /* KEYWORD_CONTINUE  */
  YYSYMBOL_DOUBLE_ADD = 26,                /* DOUBLE_ADD  */
  YYSYMBOL_DOUBLE_SUB = 27,                /* DOUBLE_SUB  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* ']'  */
  YYSYMBOL_35_ = 35,                       /* '='  */
  YYSYMBOL_36_ = 36,                       /* '('  */
  YYSYMBOL_37_ = 37,                       /* ')'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '{'  */
  YYSYMBOL_40_ = 40,                       /* '}'  */
  YYSYMBOL_41_ = 41,                       /* '^'  */
  YYSYMBOL_42_ = 42,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_declaration_list = 45,          /* declaration_list  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_var_declaration = 47,           /* var_declaration  */
  YYSYMBOL_cout_stmt = 48,                 /* cout_stmt  */
  YYSYMBOL_type_specifier = 49,            /* type_specifier  */
  YYSYMBOL_fun_declaration = 50,           /* fun_declaration  */
  YYSYMBOL_comment = 51,                   /* comment  */
  YYSYMBOL_params = 52,                    /* params  */
  YYSYMBOL_param_list = 53,                /* param_list  */
  YYSYMBOL_param = 54,                     /* param  */
  YYSYMBOL_compound_stmt = 55,             /* compound_stmt  */
  YYSYMBOL_local_declarations = 56,        /* local_declarations  */
  YYSYMBOL_statement_list = 57,            /* statement_list  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_expression_stmt = 59,           /* expression_stmt  */
  YYSYMBOL_selection_stmt = 60,            /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 61,            /* iteration_stmt  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_for_stmt = 63,                  /* for_stmt  */
  YYSYMBOL_return_stmt = 64,               /* return_stmt  */
  YYSYMBOL_continue_stmt = 65,             /* continue_stmt  */
  YYSYMBOL_break_stmt = 66,                /* break_stmt  */
  YYSYMBOL_expression = 67,                /* expression  */
  YYSYMBOL_var = 68,                       /* var  */
  YYSYMBOL_simple_expression = 69,         /* simple_expression  */
  YYSYMBOL_additive_expression = 70,       /* additive_expression  */
  YYSYMBOL_term = 71,                      /* term  */
  YYSYMBOL_factor = 72,                    /* factor  */
  YYSYMBOL_call = 73,                      /* call  */
  YYSYMBOL_args = 74,                      /* args  */
  YYSYMBOL_arg_list = 75                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   199

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      36,    37,    30,    28,    38,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    31,    32,    33,    35,    36,    38,    43,
      48,    55,    57,    58,    60,    62,    63,    65,    66,    68,
      69,    71,    76,    82,    84,    85,    87,    88,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   100,   101,   103,
     104,   106,   106,   116,   117,   118,   119,   120,   121,   123,
     124,   126,   128,   130,   131,   134,   137,   138,   139,   140,
     147,   149,   150,   151,   152,   153,   154,   155,   161,   163,
     164,   165,   167,   168,   169,   176,   183,   185,   186,   190,
     191,   193,   195,   196,   198,   199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM",
  "LESS_EQUAL_THAN", "LESS_THAN", "GREAT_THAN", "GREAT_EQUAL_THAN",
  "DOUBLE_EQUAL", "NOT_EQUAL", "KEYWORD_DOUBLE_LESS", "KEYWORD_OUT",
  "KEYWORD_ELSE", "KEYWORD_IF", "KEYWORD_INT", "KEYWORD_RETURN",
  "KEYWORD_VOID", "KEYWORD_WHILE", "MULTI_LINE_ANNOTATION", "KEYWORD_AND",
  "KEYWORD_OR", "KEYWORD_NO", "KEYWORD_FOR", "KEYWORD_BREAK",
  "KEYWORD_CONTINUE", "DOUBLE_ADD", "DOUBLE_SUB", "'+'", "'-'", "'*'",
  "'/'", "';'", "'['", "']'", "'='", "'('", "')'", "','", "'{'", "'}'",
  "'^'", "'%'", "$accept", "program", "declaration_list", "declaration",
  "var_declaration", "cout_stmt", "type_specifier", "fun_declaration",
  "comment", "params", "param_list", "param", "compound_stmt",
  "local_declarations", "statement_list", "statement", "expression_stmt",
  "selection_stmt", "iteration_stmt", "$@1", "for_stmt", "return_stmt",
  "continue_stmt", "break_stmt", "expression", "var", "simple_expression",
  "additive_expression", "term", "factor", "call", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-19)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,   -76,   -76,     5,    35,   -76,   -76,    26,   -76,    11,
     -76,   -76,    68,   -76,   -76,    47,   133,    43,    28,    -9,
     -76,   133,   133,    32,   -18,   -10,    85,   -27,   -76,   -76,
      34,    62,    38,    42,   -76,    64,   133,   133,   -76,   -76,
      61,   -76,   -76,   -76,   133,   133,   133,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     9,    33,
      60,    35,   -76,    48,   -76,    71,    79,   -76,   -76,   -76,
     -76,    -6,    -6,    -6,    -6,    -6,    -6,   -27,   -27,   -76,
     -76,   -76,   -76,    87,   -76,   -76,   -76,   -76,   -76,   133,
     -76,    35,   -76,   -76,   116,    45,   121,   114,    98,   136,
     105,   107,   120,   125,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   127,   157,   133,   -76,
     130,   133,   129,   -76,   -76,    11,   -76,   131,   134,   -76,
     -76,   133,   133,   135,   -76,   106,   138,   141,   147,   133,
     153,   106,    50,    52,   148,   106,   -76,   106,   140,   106,
     144,    75,   -76,   -76,   106,   -76,   106,   106,   150,   -76,
     -76,   -76,   106,   -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      16,    12,    13,     0,     2,     4,     6,     0,     7,     5,
       1,     3,     0,    15,     8,     0,     0,     0,     0,    59,
      80,     0,     0,     0,    78,    58,    67,    71,    76,    79,
      13,     0,     0,    17,    20,     0,     0,    83,    78,    68,
       0,    10,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     9,     0,    85,     0,    82,    77,    53,    56,
      57,    61,    62,    63,    64,    65,    66,    69,    70,    73,
      74,    72,    75,     0,    25,    14,    19,    60,    81,     0,
      22,    27,    84,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    23,    35,    29,    16,    28,
      30,    31,    32,    36,    33,    34,     0,     0,     0,    49,
       0,     0,     0,    52,    51,    26,    37,     0,     0,    50,
      41,     0,     0,     0,    11,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,    40,    43,     0,    48,     0,     0,     0,    46,
      47,    44,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,   -76,   178,   -75,   -76,   -15,   -76,    76,   -76,
     -76,   128,   139,   -76,   -76,    29,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -16,   -14,   -20,   145,   -35,    92,
     -76,   -76,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,   106,     7,     8,     9,    32,
      33,    34,   107,    91,    95,   108,   109,   110,   111,   136,
     112,   113,   114,   115,   116,    24,    25,    26,    27,    28,
      29,    65,    66
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    39,    31,    55,    56,    10,    40,    38,    42,    43,
      45,    46,    19,    20,    57,    58,    93,    44,    77,    78,
      63,    64,    53,    54,    36,    69,    70,    37,    68,    12,
      13,    38,    38,    38,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    22,    31,   132,    19,    20,
       1,    18,     2,    19,    20,    19,    20,    97,     1,    98,
      30,    99,    35,   100,    41,    59,    83,    21,   101,   102,
     103,   -18,    21,    92,    21,    60,    94,   104,    19,    20,
      61,    22,    87,   120,    84,   105,    22,   147,    22,   149,
      47,    48,    49,    50,    51,    52,    62,    21,    67,    84,
      14,    15,   128,    16,    17,   130,   133,    94,    88,    19,
      20,    22,   157,    53,    54,   137,   138,    89,    97,    96,
      98,    90,    99,   144,   100,   117,   148,   150,    21,   101,
     102,   103,    19,    20,   118,   158,    19,    20,   104,    19,
      20,   121,    22,   122,     1,    84,     2,    79,    80,    81,
      82,    21,   123,    14,    15,    21,    16,   124,    21,   126,
     127,   131,   129,   134,   140,    22,   145,   139,   119,    22,
     146,   135,    22,   142,   152,   141,   153,   154,   155,   143,
     151,   156,    11,   159,   125,   160,   161,   162,     0,    86,
       0,   163,    71,    72,    73,    74,    75,    76,     0,    85
};

static const yytype_int16 yycheck[] =
{
      16,    21,    17,    30,    31,     0,    22,    21,    26,    27,
      20,    21,     3,     4,    41,    42,    91,    35,    53,    54,
      36,    37,    28,    29,    33,    45,    46,    36,    44,     3,
      19,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    36,    61,   122,     3,     4,
      15,     4,    17,     3,     4,     3,     4,    12,    15,    14,
      17,    16,    34,    18,    32,     3,    33,    22,    23,    24,
      25,    37,    22,    89,    22,    37,    91,    32,     3,     4,
      38,    36,    34,    99,    39,    40,    36,    37,    36,    37,
       5,     6,     7,     8,     9,    10,    32,    22,    37,    39,
      32,    33,   118,    35,    36,   121,   122,   122,    37,     3,
       4,    36,    37,    28,    29,   131,   132,    38,    12,     3,
      14,    34,    16,   139,    18,    11,   142,   143,    22,    23,
      24,    25,     3,     4,    36,   151,     3,     4,    32,     3,
       4,    36,    36,    36,    15,    39,    17,    55,    56,    57,
      58,    22,    32,    32,    33,    22,    35,    32,    22,    32,
       3,    32,    32,    32,   135,    36,    13,    32,    32,    36,
     141,    37,    36,    32,   145,    37,   147,    37,   149,    32,
      32,    37,     4,   154,   108,   156,   157,    37,    -1,    61,
      -1,   162,    47,    48,    49,    50,    51,    52,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    17,    44,    45,    46,    47,    49,    50,    51,
       0,    46,     3,    19,    32,    33,    35,    36,     4,     3,
       4,    22,    36,    67,    68,    69,    70,    71,    72,    73,
      17,    49,    52,    53,    54,    34,    33,    36,    68,    69,
      67,    32,    26,    27,    35,    20,    21,     5,     6,     7,
       8,     9,    10,    28,    29,    30,    31,    41,    42,     3,
      37,    38,    32,    67,    67,    74,    75,    37,    67,    69,
      69,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    33,    39,    55,    54,    34,    37,    38,
      34,    56,    67,    47,    49,    57,     3,    12,    14,    16,
      18,    23,    24,    25,    32,    40,    48,    55,    58,    59,
      60,    61,    63,    64,    65,    66,    67,    11,    36,    32,
      67,    36,    36,    32,    32,    51,    32,     3,    67,    32,
      67,    32,    47,    67,    32,    37,    62,    67,    67,    32,
      58,    37,    32,    32,    67,    13,    58,    37,    67,    37,
      67,    32,    58,    58,    37,    58,    37,    37,    67,    58,
      58,    58,    37,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      47,    48,    49,    49,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    60,
      60,    62,    61,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    66,    67,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    73,    74,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       5,     4,     1,     1,     6,     2,     0,     1,     1,     3,
       1,     2,     4,     4,     2,     0,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       7,     0,     6,     7,     8,     9,     8,     8,     7,     2,
       3,     2,     2,     3,     2,     2,     3,     3,     1,     1,
       4,     3,     3,     3,     3,     3,     3,     1,     2,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     1,     1,
       1,     4,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: declaration_list  */
#line 29 "compiler.y"
                           { (yyval.node) = makeNode("program", NULL, (yyvsp[0].node)); puts(""); printTree((yyval.node), 0, 0); }
#line 1368 "y.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 31 "compiler.y"
                                                { (yyval.node) = makeNode("declaration_list", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1374 "y.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 32 "compiler.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 1380 "y.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 35 "compiler.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1386 "y.tab.c"
    break;

  case 7: /* declaration: fun_declaration  */
#line 36 "compiler.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1392 "y.tab.c"
    break;

  case 8: /* var_declaration: type_specifier ID ';'  */
#line 38 "compiler.y"
                                        { // 建立变量的抽象语法树节点
                                            (yyval.node) = makeNode("var-declaration", (yyvsp[-2].node), makeNode((yyvsp[-1].name), NULL, NULL));
                                            getElement(symbolTable, (yyvsp[-1].name))->lineValue = yylineno;
                                            getElement(symbolTable, (yyvsp[-1].name))->type = (yyvsp[-2].node)->operand;
                                        }
#line 1402 "y.tab.c"
    break;

  case 9: /* var_declaration: type_specifier ID '[' NUM ']' ';'  */
#line 43 "compiler.y"
                                                    {
                                                       (yyval.node) = makeNode("var-declaration", (yyvsp[-5].node), makeNode((yyvsp[-4].name), NULL, NULL));
                                                       getElement(symbolTable, (yyvsp[-4].name))->lineValue = yylineno;
                                                       getElement(symbolTable, (yyvsp[-4].name))->type = (yyvsp[-5].node)->operand;
                                                    }
#line 1412 "y.tab.c"
    break;

  case 10: /* var_declaration: type_specifier ID '=' expression ';'  */
#line 48 "compiler.y"
                                                       {
                                                       (yyval.node) = makeNode("var-declaration", (yyvsp[-4].node), makeNode("=", makeNode((yyvsp[-3].name), NULL,NULL), (yyvsp[-1].node)));
                                                       getElement(symbolTable, (yyvsp[-3].name))->lineValue = yylineno;
                                                       getElement(symbolTable, (yyvsp[-3].name))->type = (yyvsp[-4].node)->operand;
                                                       getElement(symbolTable, (yyvsp[-3].name))->value = (yyvsp[-1].node)->Val;
                                                      }
#line 1423 "y.tab.c"
    break;

  case 11: /* cout_stmt: KEYWORD_OUT KEYWORD_DOUBLE_LESS ID ';'  */
#line 55 "compiler.y"
                                                   { (yyval.node) = makeNode("cout_stmt",makeNode((yyvsp[-1].name),NULL,NULL),NULL);}
#line 1429 "y.tab.c"
    break;

  case 12: /* type_specifier: KEYWORD_INT  */
#line 57 "compiler.y"
                              { (yyval.node) = makeNode((yyvsp[0].name), NULL, NULL); }
#line 1435 "y.tab.c"
    break;

  case 13: /* type_specifier: KEYWORD_VOID  */
#line 58 "compiler.y"
                               { (yyval.node) = makeNode((yyvsp[0].name), NULL, NULL); }
#line 1441 "y.tab.c"
    break;

  case 14: /* fun_declaration: type_specifier ID '(' params ')' compound_stmt  */
#line 60 "compiler.y"
                                                                 { (yyval.node) = makeNode("fun_declaration", (yyvsp[-5].node), (yyvsp[0].node)); }
#line 1447 "y.tab.c"
    break;

  case 15: /* comment: comment MULTI_LINE_ANNOTATION  */
#line 62 "compiler.y"
                                        {}
#line 1453 "y.tab.c"
    break;

  case 16: /* comment: %empty  */
#line 63 "compiler.y"
          {}
#line 1459 "y.tab.c"
    break;

  case 17: /* params: param_list  */
#line 65 "compiler.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 1465 "y.tab.c"
    break;

  case 18: /* params: KEYWORD_VOID  */
#line 66 "compiler.y"
                        { (yyval.node) = makeNode((yyvsp[0].name), NULL, NULL); }
#line 1471 "y.tab.c"
    break;

  case 19: /* param_list: param_list ',' param  */
#line 68 "compiler.y"
                                   { (yyval.node) = makeNode("param_list", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1477 "y.tab.c"
    break;

  case 20: /* param_list: param  */
#line 69 "compiler.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1483 "y.tab.c"
    break;

  case 21: /* param: type_specifier ID  */
#line 71 "compiler.y"
                           {  // 参数是标识符
                              (yyval.node) = makeNode("var-declaration", (yyvsp[-1].node), makeNode((yyvsp[0].name), NULL, NULL));
                              getElement(symbolTable, (yyvsp[0].name))->lineValue = yylineno;
                              getElement(symbolTable, (yyvsp[0].name))->type = (yyvsp[-1].node)->operand;
                            }
#line 1493 "y.tab.c"
    break;

  case 22: /* param: type_specifier ID '[' ']'  */
#line 76 "compiler.y"
                                  { // 参数为数组
                                    (yyval.node) = makeNode("var-declaration", (yyvsp[-3].node), makeNode((yyvsp[-2].name), NULL, NULL));
                                    getElement(symbolTable, (yyvsp[-2].name))->lineValue = yylineno;
                                    getElement(symbolTable, (yyvsp[-2].name))->type = (yyvsp[-3].node)->operand;
                                  }
#line 1503 "y.tab.c"
    break;

  case 23: /* compound_stmt: '{' local_declarations statement_list '}'  */
#line 82 "compiler.y"
                                                          { (yyval.node) = makeNode("compound_stmt", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1509 "y.tab.c"
    break;

  case 24: /* local_declarations: local_declarations var_declaration  */
#line 84 "compiler.y"
                                                         { (yyval.node) = makeNode("local-declarations", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1515 "y.tab.c"
    break;

  case 25: /* local_declarations: %empty  */
#line 85 "compiler.y"
                      { (yyval.node) = makeNode("empty", NULL, NULL); }
#line 1521 "y.tab.c"
    break;

  case 26: /* statement_list: statement_list statement comment  */
#line 87 "compiler.y"
                                                   { (yyval.node) = makeNode("statement_list", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1527 "y.tab.c"
    break;

  case 27: /* statement_list: %empty  */
#line 88 "compiler.y"
                  { (yyval.node) = makeNode("empty", NULL, NULL); }
#line 1533 "y.tab.c"
    break;

  case 28: /* statement: expression_stmt  */
#line 90 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1539 "y.tab.c"
    break;

  case 29: /* statement: compound_stmt  */
#line 91 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1545 "y.tab.c"
    break;

  case 30: /* statement: selection_stmt  */
#line 92 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1551 "y.tab.c"
    break;

  case 31: /* statement: iteration_stmt  */
#line 93 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1557 "y.tab.c"
    break;

  case 32: /* statement: for_stmt  */
#line 94 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1563 "y.tab.c"
    break;

  case 33: /* statement: continue_stmt  */
#line 95 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1569 "y.tab.c"
    break;

  case 34: /* statement: break_stmt  */
#line 96 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1575 "y.tab.c"
    break;

  case 35: /* statement: cout_stmt  */
#line 97 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1581 "y.tab.c"
    break;

  case 36: /* statement: return_stmt  */
#line 98 "compiler.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1587 "y.tab.c"
    break;

  case 37: /* expression_stmt: expression ';'  */
#line 100 "compiler.y"
                                  { (yyval.node) = (yyvsp[-1].node); }
#line 1593 "y.tab.c"
    break;

  case 38: /* expression_stmt: ';'  */
#line 101 "compiler.y"
                      {}
#line 1599 "y.tab.c"
    break;

  case 39: /* selection_stmt: KEYWORD_IF '(' expression ')' statement  */
#line 103 "compiler.y"
                                                         { (yyval.node) = makeNode("if", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1605 "y.tab.c"
    break;

  case 40: /* selection_stmt: KEYWORD_IF '(' expression ')' statement KEYWORD_ELSE statement  */
#line 104 "compiler.y"
                                                                                 { (yyval.node) = makeNode("if", makeNode("if_statement", (yyvsp[-4].node), (yyvsp[-2].node)), makeNode("else_statement", NULL, (yyvsp[0].node))); }
#line 1611 "y.tab.c"
    break;

  case 41: /* $@1: %empty  */
#line 106 "compiler.y"
                                              {
                                                if (whileflag){
                                                  char temp[256];
                                                  strcat(strcat(strcat(temp, "The integer variable "), (yyvsp[0].node)->operand), " is used as a boolean");
                                                }
                                              }
#line 1622 "y.tab.c"
    break;

  case 42: /* iteration_stmt: KEYWORD_WHILE '(' expression $@1 ')' statement  */
#line 112 "compiler.y"
                              {
                              (yyval.node) = makeNode("while", (yyvsp[-3].node), (yyvsp[0].node));
                            }
#line 1630 "y.tab.c"
    break;

  case 43: /* for_stmt: KEYWORD_FOR '(' ';' expression ';' ')' statement  */
#line 116 "compiler.y"
                                                             { (yyval.node) = makeNode("for",(yyvsp[-3].node),(yyvsp[0].node)); }
#line 1636 "y.tab.c"
    break;

  case 44: /* for_stmt: KEYWORD_FOR '(' expression ';' expression ';' ')' statement  */
#line 117 "compiler.y"
                                                                             {(yyval.node) = makeNode("for",(yyvsp[-5].node),makeNode("mian",(yyvsp[-3].node),(yyvsp[0].node)));}
#line 1642 "y.tab.c"
    break;

  case 45: /* for_stmt: KEYWORD_FOR '(' expression ';' expression ';' expression ')' statement  */
#line 118 "compiler.y"
                                                                                       {(yyval.node)=makeNode("for",(yyvsp[-6].node),makeNode("main",(yyvsp[-4].node),makeNode("statement",(yyvsp[-2].node),(yyvsp[0].node))));}
#line 1648 "y.tab.c"
    break;

  case 46: /* for_stmt: KEYWORD_FOR '(' ';' expression ';' expression ')' statement  */
#line 119 "compiler.y"
                                                                             {(yyval.node)=makeNode("for", (yyvsp[-4].node),makeNode("statement",(yyvsp[-2].node),(yyvsp[0].node)));}
#line 1654 "y.tab.c"
    break;

  case 47: /* for_stmt: KEYWORD_FOR '(' var_declaration expression ';' expression ')' statement  */
#line 120 "compiler.y"
                                                                                         {(yyval.node)=makeNode("for",(yyvsp[-5].node),makeNode("main",(yyvsp[-4].node),makeNode("statement",(yyvsp[-2].node),(yyvsp[0].node))));}
#line 1660 "y.tab.c"
    break;

  case 48: /* for_stmt: KEYWORD_FOR '(' var_declaration expression ';' ')' statement  */
#line 121 "compiler.y"
                                                                              {(yyval.node) = makeNode("for",(yyvsp[-4].node),makeNode("mian",(yyvsp[-3].node),(yyvsp[0].node)));}
#line 1666 "y.tab.c"
    break;

  case 49: /* return_stmt: KEYWORD_RETURN ';'  */
#line 123 "compiler.y"
                                 { (yyval.node) = makeNode("return\n", NULL, NULL); }
#line 1672 "y.tab.c"
    break;

  case 50: /* return_stmt: KEYWORD_RETURN expression ';'  */
#line 124 "compiler.y"
                                            { (yyval.node) = makeNode("return", NULL, (yyvsp[-1].node)); }
#line 1678 "y.tab.c"
    break;

  case 51: /* continue_stmt: KEYWORD_CONTINUE ';'  */
#line 126 "compiler.y"
                                     { (yyval.node) = makeNode("continue\n", NULL, NULL); }
#line 1684 "y.tab.c"
    break;

  case 52: /* break_stmt: KEYWORD_BREAK ';'  */
#line 128 "compiler.y"
                               { (yyval.node) = makeNode("break\n", NULL, NULL); }
#line 1690 "y.tab.c"
    break;

  case 53: /* expression: var '=' expression  */
#line 130 "compiler.y"
                                { (yyval.node) = makeNode("=",(yyvsp[-2].node),(yyvsp[0].node)); getElement(symbolTable, (yyvsp[-2].node)->operand)->value = (yyvsp[0].node)->Val;}
#line 1696 "y.tab.c"
    break;

  case 54: /* expression: var DOUBLE_ADD  */
#line 131 "compiler.y"
                            {
              (yyval.node) = makeNode("auto_incr", (yyvsp[-1].node), makeNode("++",NULL,NULL)); getElement(symbolTable, (yyvsp[-1].node)->operand)->value = (yyvsp[-1].node)->Val + 1;
            }
#line 1704 "y.tab.c"
    break;

  case 55: /* expression: var DOUBLE_SUB  */
#line 134 "compiler.y"
                            {
              (yyval.node) = makeNode("auto_decr", (yyvsp[-1].node), makeNode("--",NULL,NULL)); getElement(symbolTable, (yyvsp[-1].node)->operand)->value = (yyvsp[-1].node)->Val - 1;
            }
#line 1712 "y.tab.c"
    break;

  case 56: /* expression: simple_expression KEYWORD_AND simple_expression  */
#line 137 "compiler.y"
                                                                    { (yyval.node) = makeNode("expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) && (yyvsp[0].node); }
#line 1718 "y.tab.c"
    break;

  case 57: /* expression: simple_expression KEYWORD_OR simple_expression  */
#line 138 "compiler.y"
                                                                   { (yyval.node) = makeNode("expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) || (yyvsp[0].node); }
#line 1724 "y.tab.c"
    break;

  case 58: /* expression: simple_expression  */
#line 139 "compiler.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 1730 "y.tab.c"
    break;

  case 59: /* var: ID  */
#line 140 "compiler.y"
         {
            (yyval.node) = makeNode((yyvsp[0].name), NULL, NULL);
            if (Count(symbolTable, (yyvsp[0].name)))
              getElement(symbolTable, (yyval.node)->operand)->value = getElement(symbolTable, (yyvsp[0].name))->value;
            else
              declared_error = 1, yyerror(strcat((yyvsp[0].name), " was not declared in this scope.")); // 检测变量未声明
         }
#line 1742 "y.tab.c"
    break;

  case 60: /* var: ID '[' expression ']'  */
#line 147 "compiler.y"
                            { (yyval.node) = makeNode("var", makeNode((yyvsp[-3].name), NULL, NULL), (yyvsp[-1].node)); }
#line 1748 "y.tab.c"
    break;

  case 61: /* simple_expression: additive_expression LESS_EQUAL_THAN additive_expression  */
#line 149 "compiler.y"
                                                                             { (yyval.node) = makeNode("simple_expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) <= (yyvsp[0].node); }
#line 1754 "y.tab.c"
    break;

  case 62: /* simple_expression: additive_expression LESS_THAN additive_expression  */
#line 150 "compiler.y"
                                                                             { (yyval.node) = makeNode("simple_expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) < (yyvsp[0].node); }
#line 1760 "y.tab.c"
    break;

  case 63: /* simple_expression: additive_expression GREAT_THAN additive_expression  */
#line 151 "compiler.y"
                                                                             { (yyval.node) = makeNode("simple_expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) > (yyvsp[0].node); }
#line 1766 "y.tab.c"
    break;

  case 64: /* simple_expression: additive_expression GREAT_EQUAL_THAN additive_expression  */
#line 152 "compiler.y"
                                                                             { (yyval.node) = makeNode("simple_expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) >= (yyvsp[0].node); }
#line 1772 "y.tab.c"
    break;

  case 65: /* simple_expression: additive_expression DOUBLE_EQUAL additive_expression  */
#line 153 "compiler.y"
                                                                             { (yyval.node) = makeNode("simple_expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) == (yyvsp[0].node); }
#line 1778 "y.tab.c"
    break;

  case 66: /* simple_expression: additive_expression NOT_EQUAL additive_expression  */
#line 154 "compiler.y"
                                                                             { (yyval.node) = makeNode("simple_expression", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node) != (yyvsp[0].node); }
#line 1784 "y.tab.c"
    break;

  case 67: /* simple_expression: additive_expression  */
#line 155 "compiler.y"
                                        {
                                            (yyval.node) = (yyvsp[0].node);
                                            if (Count(symbolTable, (yyvsp[0].node)->operand) == 1)
                                                if (strcmp(getElement(symbolTable, (yyval.node)->operand)->type, "int") == 0) // 检测while参数出现错误。
                                                    whileflag = 1;
                                        }
#line 1795 "y.tab.c"
    break;

  case 68: /* simple_expression: KEYWORD_NO simple_expression  */
#line 161 "compiler.y"
                                                        { (yyval.node) = makeNode("expression", (yyvsp[0].node), NULL); (yyval.node)->Val = !(yyvsp[0].node); }
#line 1801 "y.tab.c"
    break;

  case 69: /* additive_expression: additive_expression '+' term  */
#line 163 "compiler.y"
                                                   { (yyval.node) = makeNode("+",(yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node)->Val + (yyvsp[0].node)->Val;}
#line 1807 "y.tab.c"
    break;

  case 70: /* additive_expression: additive_expression '-' term  */
#line 164 "compiler.y"
                                                   { (yyval.node) = makeNode("-",(yyvsp[-2].node),(yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node)->Val - (yyvsp[0].node)->Val;}
#line 1813 "y.tab.c"
    break;

  case 71: /* additive_expression: term  */
#line 165 "compiler.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1819 "y.tab.c"
    break;

  case 72: /* term: term '^' factor  */
#line 167 "compiler.y"
                       { (yyval.node) = makeNode("^", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = powNumber((yyvsp[-2].node)->Val, (yyvsp[0].node)->Val); }
#line 1825 "y.tab.c"
    break;

  case 73: /* term: term '*' factor  */
#line 168 "compiler.y"
                       { (yyval.node) = makeNode("*", (yyvsp[-2].node), (yyvsp[0].node)); (yyval.node)->Val = (yyvsp[-2].node)->Val * (yyvsp[0].node)->Val;}
#line 1831 "y.tab.c"
    break;

  case 74: /* term: term '/' factor  */
#line 169 "compiler.y"
                       {
                            (yyval.node) = makeNode("/", (yyvsp[-2].node), (yyvsp[0].node));
                            if (((yyvsp[0].node)->Val) != 0)
                                (yyval.node)->Val = (yyvsp[-2].node)->Val / (yyvsp[0].node)->Val;
                            else
                                yyerror("divide by zero");
                       }
#line 1843 "y.tab.c"
    break;

  case 75: /* term: term '%' factor  */
#line 176 "compiler.y"
                       {
                            (yyval.node) = makeNode("%", (yyvsp[-2].node), (yyvsp[0].node));
                            if (((yyvsp[0].node)->Val) != 0)
                                (yyval.node)->Val = (yyvsp[-2].node)->Val % (yyvsp[0].node)->Val;
                            else
                                yyerror("mod by zero");
                       }
#line 1855 "y.tab.c"
    break;

  case 76: /* term: factor  */
#line 183 "compiler.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 1861 "y.tab.c"
    break;

  case 77: /* factor: '(' expression ')'  */
#line 185 "compiler.y"
                            { (yyval.node) = (yyvsp[-1].node); }
#line 1867 "y.tab.c"
    break;

  case 78: /* factor: var  */
#line 186 "compiler.y"
             {
                (yyval.node) = (yyvsp[0].node);
                (yyval.node)->Val = getElement(symbolTable, (yyvsp[0].node)->operand)->value;
             }
#line 1876 "y.tab.c"
    break;

  case 79: /* factor: call  */
#line 190 "compiler.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 1882 "y.tab.c"
    break;

  case 80: /* factor: NUM  */
#line 191 "compiler.y"
             { (yyval.node) = makeNode((yyvsp[0].name),NULL,NULL); (yyval.node)->Val = atoi((yyvsp[0].name));}
#line 1888 "y.tab.c"
    break;

  case 81: /* call: ID '(' args ')'  */
#line 193 "compiler.y"
                       { (yyval.node) = makeNode("call", makeNode((yyvsp[-3].name), NULL, NULL), (yyvsp[-1].node)); }
#line 1894 "y.tab.c"
    break;

  case 82: /* args: arg_list  */
#line 195 "compiler.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1900 "y.tab.c"
    break;

  case 83: /* args: %empty  */
#line 196 "compiler.y"
       {}
#line 1906 "y.tab.c"
    break;

  case 85: /* arg_list: expression  */
#line 199 "compiler.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1912 "y.tab.c"
    break;


#line 1916 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 202 "compiler.y"

int main() {
    symbolTable = (struct HashTable*)malloc(sizeof(struct HashTable));
    yyparse();
    printTable(symbolTable);
}

