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
#line 1 "yacc.y"

#include <bits/stdc++.h>
#include "y.tab.h"
using namespace std;
#include "SymbolTable.h"
int yylex();
extern FILE *yyin;
extern int yylineno;
extern int yycolno;
//Error Handling
void yyerror (const char *s) {fprintf (stderr, "\033[0;31m Line:%d | Column: %d %s\n\033[0m\n",yylineno, yycolno, s);exit(0);} 

//Symbol Table Structure
  char x[10];

//To check if number
// Returns true if s is a number else false 
bool isNumber(string s) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false; 
  
    return true; 
} 



#line 100 "y.tab.c"

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
# define YYDEBUG 0
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
    T_PACKAGE = 258,               /* T_PACKAGE  */
    T_IMPORT = 259,                /* T_IMPORT  */
    T_FUNC = 260,                  /* T_FUNC  */
    T_BREAK = 261,                 /* T_BREAK  */
    T_CONST = 262,                 /* T_CONST  */
    T_CONTINUE = 263,              /* T_CONTINUE  */
    T_PRINT = 264,                 /* T_PRINT  */
    T_ELSE = 265,                  /* T_ELSE  */
    T_FOR = 266,                   /* T_FOR  */
    T_IF = 267,                    /* T_IF  */
    T_RETURN = 268,                /* T_RETURN  */
    T_VAR = 269,                   /* T_VAR  */
    T_VAR_TYPE = 270,              /* T_VAR_TYPE  */
    T_BOOL_CONST = 271,            /* T_BOOL_CONST  */
    T_IDENTIFIER = 272,            /* T_IDENTIFIER  */
    T_STRING = 273,                /* T_STRING  */
    T_NIL_VAL = 274,               /* T_NIL_VAL  */
    T_INCREMENT = 275,             /* T_INCREMENT  */
    T_DECREMENT = 276,             /* T_DECREMENT  */
    T_INTEGER = 277,               /* T_INTEGER  */
    T_FLOAT = 278,                 /* T_FLOAT  */
    T_ADD = 279,                   /* T_ADD  */
    T_MINUS = 280,                 /* T_MINUS  */
    T_MULTIPLY = 281,              /* T_MULTIPLY  */
    T_DIVIDE = 282,                /* T_DIVIDE  */
    T_MOD = 283,                   /* T_MOD  */
    T_ASSIGN = 284,                /* T_ASSIGN  */
    T_NOT = 285,                   /* T_NOT  */
    T_LAND = 286,                  /* T_LAND  */
    T_LOR = 287,                   /* T_LOR  */
    T_EQL = 288,                   /* T_EQL  */
    T_NEQ = 289,                   /* T_NEQ  */
    T_LEQ = 290,                   /* T_LEQ  */
    T_GEQ = 291,                   /* T_GEQ  */
    T_SEMICOLON = 292,             /* T_SEMICOLON  */
    T_GTR = 293,                   /* T_GTR  */
    T_LSR = 294,                   /* T_LSR  */
    T_LEFTPARANTHESES = 295,       /* T_LEFTPARANTHESES  */
    T_RIGHTPARANTHESES = 296,      /* T_RIGHTPARANTHESES  */
    T_LEFTBRACE = 297,             /* T_LEFTBRACE  */
    T_RIGHTBRACE = 298,            /* T_RIGHTBRACE  */
    T_LEFTBRACKET = 299,           /* T_LEFTBRACKET  */
    T_RIGHTBRACKET = 300,          /* T_RIGHTBRACKET  */
    T_COMMA = 301,                 /* T_COMMA  */
    T_PERIOD = 302                 /* T_PERIOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_PACKAGE 258
#define T_IMPORT 259
#define T_FUNC 260
#define T_BREAK 261
#define T_CONST 262
#define T_CONTINUE 263
#define T_PRINT 264
#define T_ELSE 265
#define T_FOR 266
#define T_IF 267
#define T_RETURN 268
#define T_VAR 269
#define T_VAR_TYPE 270
#define T_BOOL_CONST 271
#define T_IDENTIFIER 272
#define T_STRING 273
#define T_NIL_VAL 274
#define T_INCREMENT 275
#define T_DECREMENT 276
#define T_INTEGER 277
#define T_FLOAT 278
#define T_ADD 279
#define T_MINUS 280
#define T_MULTIPLY 281
#define T_DIVIDE 282
#define T_MOD 283
#define T_ASSIGN 284
#define T_NOT 285
#define T_LAND 286
#define T_LOR 287
#define T_EQL 288
#define T_NEQ 289
#define T_LEQ 290
#define T_GEQ 291
#define T_SEMICOLON 292
#define T_GTR 293
#define T_LSR 294
#define T_LEFTPARANTHESES 295
#define T_RIGHTPARANTHESES 296
#define T_LEFTBRACE 297
#define T_RIGHTBRACE 298
#define T_LEFTBRACKET 299
#define T_RIGHTBRACKET 300
#define T_COMMA 301
#define T_PERIOD 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "yacc.y"

     char *sval;
	 int nval;

#line 252 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_PACKAGE = 3,                  /* T_PACKAGE  */
  YYSYMBOL_T_IMPORT = 4,                   /* T_IMPORT  */
  YYSYMBOL_T_FUNC = 5,                     /* T_FUNC  */
  YYSYMBOL_T_BREAK = 6,                    /* T_BREAK  */
  YYSYMBOL_T_CONST = 7,                    /* T_CONST  */
  YYSYMBOL_T_CONTINUE = 8,                 /* T_CONTINUE  */
  YYSYMBOL_T_PRINT = 9,                    /* T_PRINT  */
  YYSYMBOL_T_ELSE = 10,                    /* T_ELSE  */
  YYSYMBOL_T_FOR = 11,                     /* T_FOR  */
  YYSYMBOL_T_IF = 12,                      /* T_IF  */
  YYSYMBOL_T_RETURN = 13,                  /* T_RETURN  */
  YYSYMBOL_T_VAR = 14,                     /* T_VAR  */
  YYSYMBOL_T_VAR_TYPE = 15,                /* T_VAR_TYPE  */
  YYSYMBOL_T_BOOL_CONST = 16,              /* T_BOOL_CONST  */
  YYSYMBOL_T_IDENTIFIER = 17,              /* T_IDENTIFIER  */
  YYSYMBOL_T_STRING = 18,                  /* T_STRING  */
  YYSYMBOL_T_NIL_VAL = 19,                 /* T_NIL_VAL  */
  YYSYMBOL_T_INCREMENT = 20,               /* T_INCREMENT  */
  YYSYMBOL_T_DECREMENT = 21,               /* T_DECREMENT  */
  YYSYMBOL_T_INTEGER = 22,                 /* T_INTEGER  */
  YYSYMBOL_T_FLOAT = 23,                   /* T_FLOAT  */
  YYSYMBOL_T_ADD = 24,                     /* T_ADD  */
  YYSYMBOL_T_MINUS = 25,                   /* T_MINUS  */
  YYSYMBOL_T_MULTIPLY = 26,                /* T_MULTIPLY  */
  YYSYMBOL_T_DIVIDE = 27,                  /* T_DIVIDE  */
  YYSYMBOL_T_MOD = 28,                     /* T_MOD  */
  YYSYMBOL_T_ASSIGN = 29,                  /* T_ASSIGN  */
  YYSYMBOL_T_NOT = 30,                     /* T_NOT  */
  YYSYMBOL_T_LAND = 31,                    /* T_LAND  */
  YYSYMBOL_T_LOR = 32,                     /* T_LOR  */
  YYSYMBOL_T_EQL = 33,                     /* T_EQL  */
  YYSYMBOL_T_NEQ = 34,                     /* T_NEQ  */
  YYSYMBOL_T_LEQ = 35,                     /* T_LEQ  */
  YYSYMBOL_T_GEQ = 36,                     /* T_GEQ  */
  YYSYMBOL_T_SEMICOLON = 37,               /* T_SEMICOLON  */
  YYSYMBOL_T_GTR = 38,                     /* T_GTR  */
  YYSYMBOL_T_LSR = 39,                     /* T_LSR  */
  YYSYMBOL_T_LEFTPARANTHESES = 40,         /* T_LEFTPARANTHESES  */
  YYSYMBOL_T_RIGHTPARANTHESES = 41,        /* T_RIGHTPARANTHESES  */
  YYSYMBOL_T_LEFTBRACE = 42,               /* T_LEFTBRACE  */
  YYSYMBOL_T_RIGHTBRACE = 43,              /* T_RIGHTBRACE  */
  YYSYMBOL_T_LEFTBRACKET = 44,             /* T_LEFTBRACKET  */
  YYSYMBOL_T_RIGHTBRACKET = 45,            /* T_RIGHTBRACKET  */
  YYSYMBOL_T_COMMA = 46,                   /* T_COMMA  */
  YYSYMBOL_T_PERIOD = 47,                  /* T_PERIOD  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_StartFile = 49,                 /* StartFile  */
  YYSYMBOL_Block = 50,                     /* Block  */
  YYSYMBOL_StatementList = 51,             /* StatementList  */
  YYSYMBOL_Statement = 52,                 /* Statement  */
  YYSYMBOL_SimpleStmt = 53,                /* SimpleStmt  */
  YYSYMBOL_Declaration = 54,               /* Declaration  */
  YYSYMBOL_PrintStmt = 55,                 /* PrintStmt  */
  YYSYMBOL_FunctionDecl = 56,              /* FunctionDecl  */
  YYSYMBOL_IdentifierList = 57,            /* IdentifierList  */
  YYSYMBOL_TopLevelDeclList = 58,          /* TopLevelDeclList  */
  YYSYMBOL_TopLevelDecl = 59,              /* TopLevelDecl  */
  YYSYMBOL_Type = 60,                      /* Type  */
  YYSYMBOL_Operand = 61,                   /* Operand  */
  YYSYMBOL_IfStmt = 62,                    /* IfStmt  */
  YYSYMBOL_ForStmt = 63,                   /* ForStmt  */
  YYSYMBOL_ExpressionList = 64,            /* ExpressionList  */
  YYSYMBOL_BasicLit = 65,                  /* BasicLit  */
  YYSYMBOL_Expression = 66,                /* Expression  */
  YYSYMBOL_bin_op = 67,                    /* bin_op  */
  YYSYMBOL_rel_op = 68,                    /* rel_op  */
  YYSYMBOL_math_op = 69,                   /* math_op  */
  YYSYMBOL_unary_op = 70,                  /* unary_op  */
  YYSYMBOL_assign_op = 71,                 /* assign_op  */
  YYSYMBOL_PackageName = 72,               /* PackageName  */
  YYSYMBOL_ImportDeclList = 73,            /* ImportDeclList  */
  YYSYMBOL_ImportDecl = 74,                /* ImportDecl  */
  YYSYMBOL_ImportSpecList = 75             /* ImportSpecList  */
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
typedef yytype_int8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    78,    80,    83,    84,    85,    86,    89,
      90,    91,    92,    93,    94,    97,   101,   105,   108,   111,
     114,   115,   116,   122,   125,   130,   135,   136,   139,   140,
     141,   144,   145,   148,   154,   157,   160,   163,   166,   170,
     176,   181,   182,   185,   186,   187,   188,   192,   203,   215,
     219,   222,   225,   226,   229,   230,   231,   232,   233,   234,
     237,   238,   239,   240,   241,   244,   245,   246,   249,   252,
     253,   254,   259,   260,   261,   264,   267,   272,   273
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_PACKAGE",
  "T_IMPORT", "T_FUNC", "T_BREAK", "T_CONST", "T_CONTINUE", "T_PRINT",
  "T_ELSE", "T_FOR", "T_IF", "T_RETURN", "T_VAR", "T_VAR_TYPE",
  "T_BOOL_CONST", "T_IDENTIFIER", "T_STRING", "T_NIL_VAL", "T_INCREMENT",
  "T_DECREMENT", "T_INTEGER", "T_FLOAT", "T_ADD", "T_MINUS", "T_MULTIPLY",
  "T_DIVIDE", "T_MOD", "T_ASSIGN", "T_NOT", "T_LAND", "T_LOR", "T_EQL",
  "T_NEQ", "T_LEQ", "T_GEQ", "T_SEMICOLON", "T_GTR", "T_LSR",
  "T_LEFTPARANTHESES", "T_RIGHTPARANTHESES", "T_LEFTBRACE", "T_RIGHTBRACE",
  "T_LEFTBRACKET", "T_RIGHTBRACKET", "T_COMMA", "T_PERIOD", "$accept",
  "StartFile", "Block", "StatementList", "Statement", "SimpleStmt",
  "Declaration", "PrintStmt", "FunctionDecl", "IdentifierList",
  "TopLevelDeclList", "TopLevelDecl", "Type", "Operand", "IfStmt",
  "ForStmt", "ExpressionList", "BasicLit", "Expression", "bin_op",
  "rel_op", "math_op", "unary_op", "assign_op", "PackageName",
  "ImportDeclList", "ImportDecl", "ImportSpecList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -10,    13,   -55,   -17,    54,   -55,   -55,    25,    63,
     -55,   -10,   -55,    57,    59,    68,   -55,   -55,     4,   -55,
     -55,   -55,     8,    31,    60,   -55,   -12,    39,   -55,   -55,
     -55,    50,   -55,    64,    70,    69,   -55,    61,    83,   -55,
      83,    72,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,    83,   -55,   -55,   196,    15,    65,   182,    52,   102,
      83,    75,   -55,     5,    73,   -55,   -55,   -55,   -55,   -55,
      11,   113,   148,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,    83,    83,    83,   -55,
      83,    91,    78,   129,   -55,    83,   -55,    79,   -55,    83,
     -55,   -55,   -55,   182,   182,   182,   196,    76,    83,   111,
     182,   -55,    65,   -55,   166,    -6,   102,   -55,   -55,    61,
     -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    69,    70,    74,     1,    71,     0,     0,
      73,     0,    75,     0,     0,     0,    31,    32,     2,    30,
      72,    78,     0,     0,     0,    27,     0,     0,    28,    76,
      77,     0,    33,    21,     0,    23,    29,     4,     0,    26,
       0,     4,    25,    46,    35,    45,    43,    44,    65,    66,
      67,     0,    51,    34,    20,     0,    22,    42,     0,    19,
       0,    35,    11,     4,     8,    10,     9,    14,    12,    13,
       0,    42,     0,    60,    61,    62,    63,    64,    53,    52,
      54,    55,    57,    59,    58,    56,     0,     0,     0,    50,
       0,     0,     0,     4,    68,     0,     3,     7,     6,     0,
      16,    17,    36,    49,    48,    47,    41,     0,     0,    37,
      15,     5,    18,    24,     0,     4,    19,    39,    38,     4,
      40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,   -37,   -55,    66,   -54,    -2,   -55,   -55,   -55,
     -55,    46,    96,    80,    16,   -55,   -39,   -55,   -36,   -55,
     -55,   -55,   -55,    88,    58,   -55,   119,   -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    62,    63,    64,    65,    16,    67,    17,    26,
      18,    19,    33,    52,    68,    69,    70,    53,    71,    86,
      87,    88,    55,    95,     5,     9,    10,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    56,    54,    32,    57,    92,    60,     3,     4,    13,
       1,    14,    14,     6,    58,    72,    59,    60,    15,    15,
       7,    43,    61,    45,    93,     3,     4,    46,    47,    48,
      49,    43,    44,    45,    34,    50,    41,    46,    47,    66,
      94,    27,     3,     4,    13,    51,    14,    41,    96,    29,
     103,   104,   105,    15,   106,    51,   109,    90,     8,   110,
     112,    66,   119,    57,    28,    11,    12,     8,    13,    21,
      14,    31,   114,    36,    23,    32,    24,    15,   117,    14,
      30,    58,   120,    59,    60,    25,    15,    39,    43,    61,
      45,    37,    91,    38,    46,    47,    48,    49,    40,    43,
      44,    45,    50,    41,    94,    46,    47,    48,    49,   107,
      98,    90,    51,    50,    41,   108,   111,   113,    43,    61,
      45,   115,    35,    51,    46,    47,    48,    49,    20,    97,
       0,   118,    50,   100,   101,    89,     0,    73,    74,    75,
      76,    77,    51,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,    73,    74,    75,    76,    77,    99,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,    41,    73,    74,    75,    76,    77,     0,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,   102,
      73,    74,    75,    76,    77,     0,     0,    78,    79,    80,
      81,    82,    83,   116,    84,    85,    73,    74,    75,    76,
      77,     0,     0,    78,    79,    80,    81,    82,    83,     0,
      84,    85,    75,    76,    77,     0,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85
};

static const yytype_int8 yycheck[] =
{
      37,    40,    38,    15,    40,    59,    12,    17,    18,     5,
       3,     7,     7,     0,     9,    51,    11,    12,    14,    14,
      37,    16,    17,    18,    60,    17,    18,    22,    23,    24,
      25,    16,    17,    18,    46,    30,    42,    22,    23,    41,
      29,    37,    17,    18,     5,    40,     7,    42,    43,    41,
      86,    87,    88,    14,    90,    40,    93,    46,     4,    95,
      99,    63,   116,    99,    18,    40,     8,     4,     5,    11,
       7,    40,   108,    27,    17,    15,    17,    14,   115,     7,
      22,     9,   119,    11,    12,    17,    14,    17,    16,    17,
      18,    41,    40,    29,    22,    23,    24,    25,    29,    16,
      17,    18,    30,    42,    29,    22,    23,    24,    25,    18,
      37,    46,    40,    30,    42,    37,    37,    41,    16,    17,
      18,    10,    26,    40,    22,    23,    24,    25,     9,    63,
      -1,   115,    30,    20,    21,    55,    -1,    24,    25,    26,
      27,    28,    40,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    24,    25,    26,    27,    28,    70,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    42,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    -1,    41,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    26,    27,    28,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    49,    17,    18,    72,     0,    37,     4,    73,
      74,    40,    72,     5,     7,    14,    54,    56,    58,    59,
      74,    72,    75,    17,    17,    17,    57,    37,    59,    41,
      72,    40,    15,    60,    46,    60,    59,    41,    29,    17,
      29,    42,    50,    16,    17,    18,    22,    23,    24,    25,
      30,    40,    61,    65,    66,    70,    64,    66,     9,    11,
      12,    17,    50,    51,    52,    53,    54,    55,    62,    63,
      64,    66,    66,    24,    25,    26,    27,    28,    31,    32,
      33,    34,    35,    36,    38,    39,    67,    68,    69,    61,
      46,    40,    53,    66,    29,    71,    43,    52,    37,    71,
      20,    21,    41,    66,    66,    66,    66,    18,    37,    50,
      66,    37,    64,    41,    66,    10,    37,    50,    62,    53,
      50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    55,    56,    57,    57,    58,    58,
      58,    59,    59,    60,    61,    61,    61,    62,    62,    62,
      63,    64,    64,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    70,    70,    70,    71,    72,
      72,    72,    73,    73,    73,    74,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     0,
       5,     3,     5,     3,     4,     5,     3,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     5,     5,
       7,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     2,     4,     2,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* StartFile: T_PACKAGE PackageName ImportDeclList TopLevelDeclList  */
#line 73 "yacc.y"
                                                          {
		lookup((yyvsp[-3].sval),(yylsp[-3]).last_line,'K',NULL,NULL);
	}
#line 1820 "y.tab.c"
    break;

  case 3: /* Block: T_LEFTBRACE StatementList T_RIGHTBRACE  */
#line 78 "yacc.y"
                                               {
	}
#line 1827 "y.tab.c"
    break;

  case 4: /* Block: %empty  */
#line 80 "yacc.y"
                    {}
#line 1833 "y.tab.c"
    break;

  case 5: /* StatementList: StatementList Statement T_SEMICOLON  */
#line 83 "yacc.y"
                                        {}
#line 1839 "y.tab.c"
    break;

  case 6: /* StatementList: Statement T_SEMICOLON  */
#line 84 "yacc.y"
                            {}
#line 1845 "y.tab.c"
    break;

  case 7: /* StatementList: StatementList Statement  */
#line 85 "yacc.y"
                                  {}
#line 1851 "y.tab.c"
    break;

  case 8: /* StatementList: Statement  */
#line 86 "yacc.y"
               {}
#line 1857 "y.tab.c"
    break;

  case 9: /* Statement: Declaration  */
#line 89 "yacc.y"
                    {}
#line 1863 "y.tab.c"
    break;

  case 10: /* Statement: SimpleStmt  */
#line 90 "yacc.y"
                     {}
#line 1869 "y.tab.c"
    break;

  case 11: /* Statement: Block  */
#line 91 "yacc.y"
                {}
#line 1875 "y.tab.c"
    break;

  case 12: /* Statement: IfStmt  */
#line 92 "yacc.y"
                 {}
#line 1881 "y.tab.c"
    break;

  case 13: /* Statement: ForStmt  */
#line 93 "yacc.y"
                  {}
#line 1887 "y.tab.c"
    break;

  case 14: /* Statement: PrintStmt  */
#line 94 "yacc.y"
                    {}
#line 1893 "y.tab.c"
    break;

  case 15: /* SimpleStmt: T_IDENTIFIER assign_op Expression  */
#line 97 "yacc.y"
                                          {
		search_id((yyvsp[-2].sval),(yylsp[-2]).last_line,0);lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'O',NULL,NULL);update((yyvsp[-2].sval),(yylsp[-2]).last_line,(yyvsp[0].sval));
		type_check((yyvsp[-2].sval),(yyvsp[0].sval),yylineno);
	}
#line 1902 "y.tab.c"
    break;

  case 16: /* SimpleStmt: Expression T_INCREMENT  */
#line 101 "yacc.y"
                                 {
		int temp = get_val((yyvsp[-1].sval),(yylsp[-1]).last_line);
		search_id((yyvsp[-1].sval),(yylsp[-1]).last_line,0);lookup((yyvsp[0].sval),(yylsp[0]).last_line,'O',NULL,NULL);update((yyvsp[-1].sval),(yylsp[-1]).last_line,(char *)to_string(temp+1).c_str());
	}
#line 1911 "y.tab.c"
    break;

  case 17: /* SimpleStmt: Expression T_DECREMENT  */
#line 105 "yacc.y"
                                 {
		int temp = get_val((yyvsp[-1].sval),(yylsp[-1]).last_line);search_id((yyvsp[-1].sval),(yylsp[-1]).last_line,0);lookup((yyvsp[0].sval),(yylsp[0]).last_line,'O',NULL,NULL);update((yyvsp[-1].sval),(yylsp[-1]).last_line,(char *)to_string(temp-1).c_str());
	}
#line 1919 "y.tab.c"
    break;

  case 18: /* SimpleStmt: ExpressionList assign_op ExpressionList  */
#line 108 "yacc.y"
                                                  {
		// b,c = 2,3
	}
#line 1927 "y.tab.c"
    break;

  case 19: /* SimpleStmt: %empty  */
#line 111 "yacc.y"
                   {}
#line 1933 "y.tab.c"
    break;

  case 20: /* Declaration: T_CONST T_IDENTIFIER Type T_ASSIGN Expression  */
#line 114 "yacc.y"
                                                      {lookup((yyvsp[-4].sval),(yylsp[-4]).last_line,'K',NULL,NULL);}
#line 1939 "y.tab.c"
    break;

  case 21: /* Declaration: T_CONST T_IDENTIFIER Type  */
#line 115 "yacc.y"
                                    {lookup((yyvsp[-2].sval),(yylsp[-2]).last_line,'K',NULL,NULL);}
#line 1945 "y.tab.c"
    break;

  case 22: /* Declaration: T_VAR IdentifierList Type T_ASSIGN ExpressionList  */
#line 117 "yacc.y"
        {	search_id((yyvsp[-3].sval),(yylsp[-4]).last_line,1);
		lookup((yyvsp[-3].sval),(yylsp[-4]).last_line,'I',NULL,(yyvsp[-2].sval));lookup((yyvsp[-4].sval),(yylsp[-4]).last_line,'K',NULL,NULL);
		update((yyvsp[-3].sval),(yylsp[-3]).last_line,(yyvsp[0].sval));
		type_check((yyvsp[-3].sval),(yyvsp[0].sval),yylineno);
	}
#line 1955 "y.tab.c"
    break;

  case 23: /* Declaration: T_VAR IdentifierList Type  */
#line 122 "yacc.y"
                                    { search_id((yyvsp[-1].sval),(yylsp[-2]).last_line,1);lookup((yyvsp[-1].sval),(yylsp[-2]).last_line,'I',NULL,(yyvsp[0].sval));lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'K',NULL,NULL);}
#line 1961 "y.tab.c"
    break;

  case 24: /* PrintStmt: T_PRINT T_LEFTPARANTHESES T_STRING T_RIGHTPARANTHESES  */
#line 125 "yacc.y"
                                                              {
		lookup((yyvsp[-3].sval),(yylsp[-3]).last_line,'K',NULL,NULL);
	}
#line 1969 "y.tab.c"
    break;

  case 25: /* FunctionDecl: T_FUNC T_IDENTIFIER T_LEFTPARANTHESES T_RIGHTPARANTHESES Block  */
#line 130 "yacc.y"
                                                                       {
		lookup((yyvsp[-4].sval),(yylsp[-4]).last_line,'K',NULL,NULL);
	}
#line 1977 "y.tab.c"
    break;

  case 26: /* IdentifierList: IdentifierList T_COMMA T_IDENTIFIER  */
#line 135 "yacc.y"
                                            {;}
#line 1983 "y.tab.c"
    break;

  case 27: /* IdentifierList: T_IDENTIFIER  */
#line 136 "yacc.y"
                       {(yyval.sval)=(yyvsp[0].sval);}
#line 1989 "y.tab.c"
    break;

  case 28: /* TopLevelDeclList: TopLevelDeclList TopLevelDecl  */
#line 139 "yacc.y"
                                   {}
#line 1995 "y.tab.c"
    break;

  case 29: /* TopLevelDeclList: TopLevelDeclList T_SEMICOLON TopLevelDecl  */
#line 140 "yacc.y"
                                                     {}
#line 2001 "y.tab.c"
    break;

  case 30: /* TopLevelDeclList: TopLevelDecl  */
#line 141 "yacc.y"
                    {}
#line 2007 "y.tab.c"
    break;

  case 31: /* TopLevelDecl: Declaration  */
#line 144 "yacc.y"
                    {}
#line 2013 "y.tab.c"
    break;

  case 32: /* TopLevelDecl: FunctionDecl  */
#line 145 "yacc.y"
                       {}
#line 2019 "y.tab.c"
    break;

  case 33: /* Type: T_VAR_TYPE  */
#line 148 "yacc.y"
                   {
		(yyval.sval)=(yyvsp[0].sval);
		lookup((yyvsp[0].sval),(yylsp[0]).last_line,'K',NULL,NULL);
	}
#line 2028 "y.tab.c"
    break;

  case 34: /* Operand: BasicLit  */
#line 154 "yacc.y"
                 {(yyval.sval)=(yyvsp[0].sval);
	//2
	}
#line 2036 "y.tab.c"
    break;

  case 35: /* Operand: T_IDENTIFIER  */
#line 157 "yacc.y"
                       {(yyval.sval)=(yyvsp[0].sval);
	//a
	}
#line 2044 "y.tab.c"
    break;

  case 36: /* Operand: T_LEFTPARANTHESES Expression T_RIGHTPARANTHESES  */
#line 160 "yacc.y"
                                                          {}
#line 2050 "y.tab.c"
    break;

  case 37: /* IfStmt: T_IF Expression Block  */
#line 163 "yacc.y"
                              {
		lookup((yyvsp[-2].sval),(yylsp[-2]).last_line,'K',NULL,NULL);
	}
#line 2058 "y.tab.c"
    break;

  case 38: /* IfStmt: T_IF Expression Block T_ELSE IfStmt  */
#line 166 "yacc.y"
                                              {
		lookup((yyvsp[-4].sval),(yylsp[-4]).last_line,'K',NULL,NULL);
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'K',NULL,NULL);
	}
#line 2067 "y.tab.c"
    break;

  case 39: /* IfStmt: T_IF Expression Block T_ELSE Block  */
#line 170 "yacc.y"
                                              {
		lookup((yyvsp[-4].sval),(yylsp[-4]).last_line,'K',NULL,NULL);
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'K',NULL,NULL);
	}
#line 2076 "y.tab.c"
    break;

  case 40: /* ForStmt: T_FOR SimpleStmt T_SEMICOLON Expression T_SEMICOLON SimpleStmt Block  */
#line 176 "yacc.y"
                                                                       {
	  lookup((yyvsp[-6].sval),(yylsp[-6]).last_line,'K',NULL,NULL);
  }
#line 2084 "y.tab.c"
    break;

  case 41: /* ExpressionList: ExpressionList T_COMMA Expression  */
#line 181 "yacc.y"
                                          {}
#line 2090 "y.tab.c"
    break;

  case 42: /* ExpressionList: Expression  */
#line 182 "yacc.y"
                     {(yyval.sval)=(yyvsp[0].sval);}
#line 2096 "y.tab.c"
    break;

  case 43: /* BasicLit: T_INTEGER  */
#line 185 "yacc.y"
                  {lookup((yyvsp[0].sval),(yylsp[0]).last_line,'C',NULL,"int"); (yyval.sval)=(yyvsp[0].sval);}
#line 2102 "y.tab.c"
    break;

  case 44: /* BasicLit: T_FLOAT  */
#line 186 "yacc.y"
                  {lookup((yyvsp[0].sval),(yylsp[0]).last_line,'C',NULL,"float"); (yyval.sval)=(yyvsp[0].sval);}
#line 2108 "y.tab.c"
    break;

  case 45: /* BasicLit: T_STRING  */
#line 187 "yacc.y"
                   {lookup((yyvsp[0].sval),(yylsp[0]).last_line,'C',NULL,"string"); (yyval.sval)=(yyvsp[0].sval);}
#line 2114 "y.tab.c"
    break;

  case 46: /* BasicLit: T_BOOL_CONST  */
#line 188 "yacc.y"
                       {lookup((yyvsp[0].sval),(yylsp[0]).last_line,'C',NULL,"bool");(yyval.sval)=(yyvsp[0].sval);
	}
#line 2121 "y.tab.c"
    break;

  case 47: /* Expression: Expression math_op Expression  */
#line 193 "yacc.y"
        {	//Won't work for identifiers
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'O',NULL,NULL);
		int a = isNumber((yyvsp[-2].sval))?atoi((yyvsp[-2].sval)):get_val((yyvsp[-2].sval),(yylsp[-2]).last_line);
		int b = isNumber((yyvsp[0].sval))?atoi((yyvsp[0].sval)):get_val((yyvsp[0].sval),(yylsp[0]).last_line);
		if(!strcmp((yyvsp[-1].sval),"+")){sprintf((yyval.sval),"%d",a+b);}
		if(!strcmp((yyvsp[-1].sval),"*")){sprintf((yyval.sval),"%d",a*b);}
		if(!strcmp((yyvsp[-1].sval),"/")){sprintf((yyval.sval),"%d",a/b);}
		if(!strcmp((yyvsp[-1].sval),"-")){sprintf((yyval.sval),"%d",a-b);}
		if(!strcmp((yyvsp[-1].sval),"%")){sprintf((yyval.sval),"%d",a%b);}
	}
#line 2136 "y.tab.c"
    break;

  case 48: /* Expression: Expression rel_op Expression  */
#line 203 "yacc.y"
                                       {
		//Only binary expressions
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'O',NULL,NULL);
		int a = isNumber((yyvsp[-2].sval))?atoi((yyvsp[-2].sval)):get_val((yyvsp[-2].sval),(yylsp[-2]).last_line);
		int b = isNumber((yyvsp[0].sval))?atoi((yyvsp[0].sval)):get_val((yyvsp[0].sval),(yylsp[0]).last_line);
		if(!strcmp((yyvsp[-1].sval),"==")){ bool e = (a==b);(yyval.sval) = e?(char *)"true":(char *)"false";}
		if(!strcmp((yyvsp[-1].sval),"!=")){ bool e = (a!=b);(yyval.sval) = e?(char *)"true":(char *)"false";}
		if(!strcmp((yyvsp[-1].sval),"<")){ bool e = (a<b);(yyval.sval) = e?(char *)"true":(char *)"false";}
		if(!strcmp((yyvsp[-1].sval),"<=")){ bool e = (a<=b);(yyval.sval) = e?(char *)"true":(char *)"false";}
		if(!strcmp((yyvsp[-1].sval),">")){ bool e = (a>b);(yyval.sval) = e?(char *)"true":(char *)"false";}
		if(!strcmp((yyvsp[-1].sval),">=")){ bool e = (a>=b);(yyval.sval) = e?(char *)"true":(char *)"false";}
	}
#line 2153 "y.tab.c"
    break;

  case 49: /* Expression: Expression bin_op Expression  */
#line 215 "yacc.y"
                                       {
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'O',NULL,NULL);
		//For logical operators
	}
#line 2162 "y.tab.c"
    break;

  case 50: /* Expression: unary_op Operand  */
#line 219 "yacc.y"
                           {
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'O',NULL,NULL);
		}
#line 2170 "y.tab.c"
    break;

  case 51: /* Expression: Operand  */
#line 222 "yacc.y"
                  { (yyval.sval)=(yyvsp[0].sval); }
#line 2176 "y.tab.c"
    break;

  case 52: /* bin_op: T_LOR  */
#line 225 "yacc.y"
              {(yyval.sval)=(yyvsp[0].sval);}
#line 2182 "y.tab.c"
    break;

  case 53: /* bin_op: T_LAND  */
#line 226 "yacc.y"
                 {(yyval.sval)=(yyvsp[0].sval);}
#line 2188 "y.tab.c"
    break;

  case 54: /* rel_op: T_EQL  */
#line 229 "yacc.y"
              {(yyval.sval)=(yyvsp[0].sval);}
#line 2194 "y.tab.c"
    break;

  case 55: /* rel_op: T_NEQ  */
#line 230 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2200 "y.tab.c"
    break;

  case 56: /* rel_op: T_LSR  */
#line 231 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2206 "y.tab.c"
    break;

  case 57: /* rel_op: T_LEQ  */
#line 232 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2212 "y.tab.c"
    break;

  case 58: /* rel_op: T_GTR  */
#line 233 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2218 "y.tab.c"
    break;

  case 59: /* rel_op: T_GEQ  */
#line 234 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2224 "y.tab.c"
    break;

  case 60: /* math_op: T_ADD  */
#line 237 "yacc.y"
              {(yyval.sval)=(yyvsp[0].sval);}
#line 2230 "y.tab.c"
    break;

  case 61: /* math_op: T_MINUS  */
#line 238 "yacc.y"
                  {(yyval.sval)=(yyvsp[0].sval);}
#line 2236 "y.tab.c"
    break;

  case 62: /* math_op: T_MULTIPLY  */
#line 239 "yacc.y"
                     {(yyval.sval)=(yyvsp[0].sval);}
#line 2242 "y.tab.c"
    break;

  case 63: /* math_op: T_DIVIDE  */
#line 240 "yacc.y"
                   {(yyval.sval)=(yyvsp[0].sval);}
#line 2248 "y.tab.c"
    break;

  case 64: /* math_op: T_MOD  */
#line 241 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2254 "y.tab.c"
    break;

  case 65: /* unary_op: T_ADD  */
#line 244 "yacc.y"
              {(yyval.sval)=(yyvsp[0].sval);}
#line 2260 "y.tab.c"
    break;

  case 66: /* unary_op: T_MINUS  */
#line 245 "yacc.y"
                  {(yyval.sval)=(yyvsp[0].sval);}
#line 2266 "y.tab.c"
    break;

  case 67: /* unary_op: T_NOT  */
#line 246 "yacc.y"
                {(yyval.sval)=(yyvsp[0].sval);}
#line 2272 "y.tab.c"
    break;

  case 68: /* assign_op: T_ASSIGN  */
#line 249 "yacc.y"
                 {(yyval.sval)=(yyvsp[0].sval);}
#line 2278 "y.tab.c"
    break;

  case 69: /* PackageName: T_IDENTIFIER  */
#line 252 "yacc.y"
                     {lookup((yyvsp[0].sval),(yylsp[0]).last_line,'I',NULL,NULL);}
#line 2284 "y.tab.c"
    break;

  case 70: /* PackageName: T_STRING  */
#line 253 "yacc.y"
                   {}
#line 2290 "y.tab.c"
    break;

  case 71: /* PackageName: T_STRING T_SEMICOLON  */
#line 254 "yacc.y"
                               {}
#line 2296 "y.tab.c"
    break;

  case 72: /* ImportDeclList: ImportDeclList ImportDecl  */
#line 259 "yacc.y"
                                {}
#line 2302 "y.tab.c"
    break;

  case 73: /* ImportDeclList: ImportDecl  */
#line 260 "yacc.y"
                 {}
#line 2308 "y.tab.c"
    break;

  case 74: /* ImportDeclList: %empty  */
#line 261 "yacc.y"
                {}
#line 2314 "y.tab.c"
    break;

  case 75: /* ImportDecl: T_IMPORT PackageName  */
#line 264 "yacc.y"
                             {
		lookup((yyvsp[-1].sval),(yylsp[-1]).last_line,'K',NULL,NULL);
	}
#line 2322 "y.tab.c"
    break;

  case 76: /* ImportDecl: T_IMPORT T_LEFTPARANTHESES ImportSpecList T_RIGHTPARANTHESES  */
#line 267 "yacc.y"
                                                                       {
		lookup((yyvsp[-3].sval),(yylsp[-3]).last_line,'K',NULL,NULL);
	}
#line 2330 "y.tab.c"
    break;

  case 77: /* ImportSpecList: ImportSpecList PackageName  */
#line 272 "yacc.y"
                                   {}
#line 2336 "y.tab.c"
    break;

  case 78: /* ImportSpecList: PackageName  */
#line 273 "yacc.y"
                      {}
#line 2342 "y.tab.c"
    break;


#line 2346 "y.tab.c"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 275 "yacc.y"


int main (int argc, char** argv) {	
	printf("Inside main\n");
	FILE * fp= fopen(argv[1], "r");
	yyin = fp;
	printf("Read the input file, continue with Lexing and Parsing\n");
	printf("Performing Lexical analysis......\n\n");
	yyparse ( );
	printf("\n\033[0;32mParsing completed.\033[0m\n\n");
	printf("Symbol Table after Lexical Analysis: \n");
	Display();
	return 0;
}

