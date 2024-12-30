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

#ifndef YY_YY_MINIDEL_TAB_H_INCLUDED
# define YY_YY_MINIDEL_TAB_H_INCLUDED
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
    egale = 258,                   /* egale  */
    mc_prog = 259,                 /* mc_prog  */
    mc_var = 260,                  /* mc_var  */
    mc_cst = 261,                  /* mc_cst  */
    mc_begin = 262,                /* mc_begin  */
    mc_end = 263,                  /* mc_end  */
    mc_if = 264,                   /* mc_if  */
    mc_else = 265,                 /* mc_else  */
    mc_for = 266,                  /* mc_for  */
    mc_do = 267,                   /* mc_do  */
    mc_while = 268,                /* mc_while  */
    idf = 269,                     /* idf  */
    inf = 270,                     /* inf  */
    inf_eg = 271,                  /* inf_eg  */
    sup = 272,                     /* sup  */
    sup_eg = 273,                  /* sup_eg  */
    eg = 274,                      /* eg  */
    diff = 275,                    /* diff  */
    et_log = 276,                  /* et_log  */
    ou_log = 277,                  /* ou_log  */
    non_log = 278,                 /* non_log  */
    aff = 279,                     /* aff  */
    pvg = 280,                     /* pvg  */
    plus = 281,                    /* plus  */
    moin = 282,                    /* moin  */
    foi = 283,                     /* foi  */
    division = 284,                /* division  */
    deuxp = 285,                   /* deuxp  */
    ao = 286,                      /* ao  */
    af = 287,                      /* af  */
    po = 288,                      /* po  */
    pf = 289,                      /* pf  */
    cst_e = 290,                   /* cst_e  */
    cst_r = 291,                   /* cst_r  */
    chaine = 292,                  /* chaine  */
    mc_float = 293,                /* mc_float  */
    mc_integer = 294,              /* mc_integer  */
    mc_string = 295,               /* mc_string  */
    vg = 296,                      /* vg  */
    mc_writeln = 297,              /* mc_writeln  */
    mc_readln = 298,               /* mc_readln  */
    mc_then = 299                  /* mc_then  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "miniDEL.y"

    int entier;
    float reel ;
    char* string ;

#line 114 "miniDEL.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MINIDEL_TAB_H_INCLUDED  */
