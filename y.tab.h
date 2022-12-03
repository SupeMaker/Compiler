/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
    FNUM = 260,                    /* FNUM  */
    LESS_EQUAL_THAN = 261,         /* LESS_EQUAL_THAN  */
    LESS_THAN = 262,               /* LESS_THAN  */
    GREAT_THAN = 263,              /* GREAT_THAN  */
    GREAT_EQUAL_THAN = 264,        /* GREAT_EQUAL_THAN  */
    DOUBLE_EQUAL = 265,            /* DOUBLE_EQUAL  */
    NOT_EQUAL = 266,               /* NOT_EQUAL  */
    KEYWORD_DOUBLE_LESS = 267,     /* KEYWORD_DOUBLE_LESS  */
    KEYWORD_OUT = 268,             /* KEYWORD_OUT  */
    KEYWORD_ELSE = 269,            /* KEYWORD_ELSE  */
    KEYWORD_IF = 270,              /* KEYWORD_IF  */
    KEYWORD_INT = 271,             /* KEYWORD_INT  */
    KEYWORD_RETURN = 272,          /* KEYWORD_RETURN  */
    KEYWORD_VOID = 273,            /* KEYWORD_VOID  */
    KEYWORD_WHILE = 274,           /* KEYWORD_WHILE  */
    MULTI_LINE_ANNOTATION = 275,   /* MULTI_LINE_ANNOTATION  */
    KEYWORD_AND = 276,             /* KEYWORD_AND  */
    KEYWORD_OR = 277,              /* KEYWORD_OR  */
    KEYWORD_NO = 278,              /* KEYWORD_NO  */
    KEYWORD_FOR = 279,             /* KEYWORD_FOR  */
    KEYWORD_BREAK = 280,           /* KEYWORD_BREAK  */
    KEYWORD_CONTINUE = 281,        /* KEYWORD_CONTINUE  */
    DOUBLE_ADD = 282,              /* DOUBLE_ADD  */
    DOUBLE_SUB = 283               /* DOUBLE_SUB  */
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
#define FNUM 260
#define LESS_EQUAL_THAN 261
#define LESS_THAN 262
#define GREAT_THAN 263
#define GREAT_EQUAL_THAN 264
#define DOUBLE_EQUAL 265
#define NOT_EQUAL 266
#define KEYWORD_DOUBLE_LESS 267
#define KEYWORD_OUT 268
#define KEYWORD_ELSE 269
#define KEYWORD_IF 270
#define KEYWORD_INT 271
#define KEYWORD_RETURN 272
#define KEYWORD_VOID 273
#define KEYWORD_WHILE 274
#define MULTI_LINE_ANNOTATION 275
#define KEYWORD_AND 276
#define KEYWORD_OR 277
#define KEYWORD_NO 278
#define KEYWORD_FOR 279
#define KEYWORD_BREAK 280
#define KEYWORD_CONTINUE 281
#define DOUBLE_ADD 282
#define DOUBLE_SUB 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "compiler.y"

  char* name;
  struct astNode *node;

#line 128 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
