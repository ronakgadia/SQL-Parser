%{
#include <stdio.h>
#include <stdlib.h>
%}

%start program
%token CREATE
%token DELETE
%token DROP
%token DATABASE
%token TABLE
%token SELECT
%token INSERT_INTO
%token UPDATE
%token SET
%token FROM
%token WHERE
%token AS
%token ALL
%token ANY
%token ON
%token ASC 
%token DESC
%token DATATYPE
%token NUMBER
%token STRING
%token PATTERN
%token IDENTIFIER
%token SELECTALL
%token COMMA
%token DISTINCT
%token INNER_JOIN
%token LEFT_JOIN
%token RIGHT_JOIN
%token FULL_JOIN
%token COUNT
%token AVERAGE
%token SUM
%token HAVING
%token EXISTS
%token LIMIT
%token IN
%token NOT_IN
%token MINIMUM
%token MAXIMUM
%token UNION
%token UNION_ALL
%token VALUES
%token RELATIONAL_OPERATOR
%token OR
%token AND
%token EQUALITY_OPERATOR
%token NOT
%token IS_NULL
%token IS_NOT_NULL
%token LIKE
%token NOT_LIKE
%token BETWEEN
%token NOT_BETWEEN
%token ORDER_BY
%token GROUP_BY
%token '(' ')'

%%

program 	: database_stmt ';' 	{printf("INPUT ACCEPTED.... \n");exit(0);}
		| table_stmt ';'	{printf("INPUT ACCEPTED.... \n");exit(0);};

database_stmt	: create_db 
		| drop_db;

create_db	: CREATE DATABASE IDENTIFIER;

drop_db		: DROP DATABASE IDENTIFIER;

table_stmt	: create_table 
		| drop_table
		| insert_table
		| query_stmt 
		| union_stmt
		| delete_stmt
		| update_stmt;

create_table	: CREATE TABLE IDENTIFIER '(' declare_col ')' 
		| CREATE TABLE IDENTIFIER AS query_stmt;

declare_col	: IDENTIFIER DATATYPE COMMA declare_col 
		| IDENTIFIER DATATYPE;

drop_table	: DROP TABLE IDENTIFIER;

union_stmt	: query_stmt union_types query_stmt
		| query_stmt union_types union_stmt;
		
union_types	: UNION | UNION_ALL;

insert_table	: INSERT_INTO IDENTIFIER VALUES '(' valuelist ')'
		| INSERT_INTO IDENTIFIER '(' origintable ')' VALUES '(' valuelist ')'
		| INSERT_INTO IDENTIFIER '(' origintable ')' query_stmt
		| INSERT_INTO IDENTIFIER query_stmt;
		
valuelist	: value COMMA valuelist
		| value;
		
query_stmt	: SELECT select_col rename from_stmt where_stmt groupby_stmt having_stmt orderby_stmt limit_stmt;

from_stmt	: FROM origintable
		| FROM '(' query_stmt ')'
		| FROM join_stmt;

origintable	: IDENTIFIER rename
		| IDENTIFIER rename COMMA origintable;

join_stmt	: IDENTIFIER join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER
		| join_stmt join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER
		| '(' join_stmt ')' join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER
		| '(' '(' join_stmt ')' join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER ')';
		
join_types	: INNER_JOIN | LEFT_JOIN | RIGHT_JOIN | FULL_JOIN;

rename		: AS IDENTIFIER 
		| ;

select_col	: diffcolumns COMMA select_col 
		| counttuples COMMA select_col
		| aggfunc COMMA select_col
		| diffcolumns 
		| counttuples 
		| aggfunc;
		
aggfunc		: AVERAGE '(' IDENTIFIER ')' 
		| SUM '(' IDENTIFIER ')' 
		| MINIMUM '(' IDENTIFIER ')' 
		| MAXIMUM '(' IDENTIFIER ')';

counttuples	: COUNT '(' IDENTIFIER ')' 
		| COUNT '(' SELECTALL ')' 
		| COUNT '(' DISTINCT IDENTIFIER ')';

diffcolumns	: SELECTALL 
		| tuples 
		| DISTINCT SELECTALL 
		| DISTINCT tuples;

where_stmt	: WHERE conditions 
		| ;

tuples		: IDENTIFIER rename COMMA tuples | IDENTIFIER rename;

conditions	: relational_stmt AND conditions 
		| NOT relational_stmt AND conditions
		| relational_stmt OR conditions
		| NOT relational_stmt OR conditions
		| NOT relational_stmt
		| relational_stmt;

relational_stmt	: IDENTIFIER RELATIONAL_OPERATOR value 
		| IDENTIFIER EQUALITY_OPERATOR value
		| IDENTIFIER EQUALITY_OPERATOR IDENTIFIER 
		| IDENTIFIER IS_NULL 
		| IDENTIFIER IS_NOT_NULL
		| IDENTIFIER LIKE STRING
		| IDENTIFIER NOT_LIKE STRING
		| IDENTIFIER IN '(' valuelist ')'
		| IDENTIFIER NOT_IN '(' valuelist ')'
		| IDENTIFIER IN '(' query_stmt ')'
		| IDENTIFIER NOT_IN '(' query_stmt ')'
		| IDENTIFIER BETWEEN NUMBER AND NUMBER
		| IDENTIFIER NOT_BETWEEN NUMBER AND NUMBER
		| IDENTIFIER RELATIONAL_OPERATOR ANY '(' query_stmt ')'
		| IDENTIFIER RELATIONAL_OPERATOR ALL '(' query_stmt ')'
		| IDENTIFIER EQUALITY_OPERATOR ANY '(' query_stmt ')'
		| IDENTIFIER EQUALITY_OPERATOR ALL '(' query_stmt ')'
		| EXISTS '(' query_stmt ')' ;
		
value		: NUMBER 
		| STRING;

groupby_stmt	: GROUP_BY part1
		| ;
		
part1		: IDENTIFIER COMMA part1
		| IDENTIFIER;

having_stmt	: HAVING havingcond
		| ;

havingcond	: aggcond AND havingcond
		| aggcond OR havingcond
		| aggcond;

aggcond		: oper1 RELATIONAL_OPERATOR NUMBER
		| oper1 EQUALITY_OPERATOR NUMBER
		| oper1 BETWEEN NUMBER AND NUMBER;

oper1		: aggfunc | counttuples;
		
orderby_stmt	: ORDER_BY part2
		| ;

part2		: IDENTIFIER sortorder COMMA part2
		| oper1 sortorder COMMA part2
		| IDENTIFIER sortorder
		| oper1 sortorder;
		
sortorder	: ASC | DESC | ;

limit_stmt	: LIMIT NUMBER
		| ;

delete_stmt	: DELETE from_stmt where_stmt;

update_stmt	: UPDATE IDENTIFIER SET intializelist where_stmt;

intializelist	: IDENTIFIER EQUALITY_OPERATOR value COMMA intializelist
		| IDENTIFIER EQUALITY_OPERATOR value;

%%
#include"lex.yy.c"
int main() {
	yyparse();
} 
