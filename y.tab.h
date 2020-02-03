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
#line 75 "parse.y" /* yacc.c:1909  */

	struct Node* node;

#line 172 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
