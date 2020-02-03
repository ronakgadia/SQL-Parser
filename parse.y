%{
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
%}

%start program
%token <node> CREATE
%token <node> DELETE
%token <node> DROP
%token <node> DATABASE
%token <node> TABLE
%token <node> SELECT
%token <node> INSERT_INTO
%token <node> UPDATE
%token <node> SET
%token <node> FROM
%token <node> WHERE
%token <node> AS
%token <node> ALL
%token <node> ANY
%token <node> ON
%token <node> ASC 
%token <node> DESC
%token <node> DATATYPE
%token <node> NUMBER
%token <node> STRING
%token <node> PATTERN
%token <node> IDENTIFIER
%token <node> SELECTALL
%token <node> COMMA
%token <node> DISTINCT
%token <node> INNER_JOIN
%token <node> LEFT_JOIN
%token <node> RIGHT_JOIN
%token <node> FULL_JOIN
%token <node> COUNT
%token <node> AVERAGE
%token <node> SUM
%token <node> HAVING
%token <node> EXISTS
%token <node> LIMIT
%token <node> IN
%token <node> NOT_IN
%token <node> MINIMUM
%token <node> MAXIMUM
%token <node> UNION
%token <node> UNION_ALL
%token <node> VALUES
%token <node> RELATIONAL_OPERATOR
%token <node> OR
%token <node> AND
%token <node> EQUALITY_OPERATOR
%token <node> NOT
%token <node> IS_NULL
%token <node> IS_NOT_NULL
%token <node> LIKE
%token <node> NOT_LIKE
%token <node> BETWEEN
%token <node> NOT_BETWEEN
%token <node> ORDER_BY
%token <node> GROUP_BY
%token <node> '(' ')'

%type <node> program database_stmt create_db drop_db table_stmt create_table declare_col drop_table union_stmt union_types insert_table valuelist query_stmt from_stmt origintable join_stmt join_types rename select_col selectways aggfunc aggfunctypes counttuples counttuplestypes diffcolumns where_stmt conditions relational_stmt query_bracket isbetween ispresent value groupby_stmt part1 having_stmt havingcond aggcond oper1 orderby_stmt part2 part3 sortorder logical_op rel_oper limit_stmt delete_stmt update_stmt intializelist isdistinct

%union{
	struct Node* node;
}
%%

program 	: database_stmt ';' 	{ 	
						$$ = makeNode("program");
						$$->child = $1;
						printf("\n\n\t\t\tParsing tree\n");
						printf("\t\t\t------------\n");
						printTree($$,0);
						printf("INPUT ACCEPTED.... \n");
						exit(0);
					}
		| table_stmt ';'	{ 
						$$ = makeNode("program");
						$$->child = $1;
						printf("\n\n\t\t\tParsing tree\n");
						printf("\t\t\t------------\n");
						printTree($$,0);
						printf("INPUT ACCEPTED.... \n");
						exit(0);
					};

database_stmt	: create_db 		{ $$ = makeNode("database_stmt"); $$->child = $1; }
		| drop_db		{ $$ = makeNode("database_stmt"); $$->child = $1; };

create_db	: CREATE DATABASE IDENTIFIER 	{	
							$$ = makeNode("create_db");
							$1 = makeNode("CREATE");
							$2 = makeNode("DATABASE");
							$3 = makeNode("IDENTIFIER");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
						};

drop_db		: DROP DATABASE IDENTIFIER   	{	
							$$ = makeNode("drop_db");
							$1 = makeNode("DROP");
							$2 = makeNode("DATABASE");
							$3 = makeNode("IDENTIFIER");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
						};

table_stmt	: create_table 			{ $$ = makeNode("table_stmt"); $$->child = $1;}
		| drop_table			{ $$ = makeNode("table_stmt"); $$->child = $1;}
		| insert_table			{ $$ = makeNode("table_stmt"); $$->child = $1;}
		| query_stmt 			{ $$ = makeNode("table_stmt"); $$->child = $1;}
		| union_stmt			{ $$ = makeNode("table_stmt"); $$->child = $1;}
		| delete_stmt			{ $$ = makeNode("table_stmt"); $$->child = $1;}
		| update_stmt			{ $$ = makeNode("table_stmt"); $$->child = $1;};

create_table	: CREATE TABLE IDENTIFIER '(' declare_col ')' 	{
									$$ = makeNode("create_table");
									$1 = makeNode("CREATE");
									$2 = makeNode("TABLE");
									$3 = makeNode("IDENTIFIER");
									$4 = makeNode("(");
									$6 = makeNode(")");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									$5->sibling=$6;
								}
		| CREATE TABLE IDENTIFIER AS query_stmt		{
									$$ = makeNode("create_table");
									$1 = makeNode("CREATE");
									$2 = makeNode("TABLE");
									$3 = makeNode("IDENTIFIER");
									$4 = makeNode("AS");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
								};

declare_col	: IDENTIFIER DATATYPE COMMA declare_col 	{
									$$ = makeNode("declare_col");
									$1 = makeNode("IDENTIFIER");
									$2 = makeNode("DATATYPE");
									$3 = makeNode("COMMA");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
								}
		| IDENTIFIER DATATYPE				{
									$$ = makeNode("declare_col");
									$1 = makeNode("IDENTIFIER");
									$2 = makeNode("DATATYPE");
									$$->child = $1; 
									$1->sibling=$2;
								};

drop_table	: DROP TABLE IDENTIFIER				{
									$$ = makeNode("drop_table");
									$1 = makeNode("DROP");
									$2 = makeNode("TABLE");
									$3 = makeNode("IDENTIFIER");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
								};

union_stmt	: query_stmt union_types query_stmt		{
									$$ = makeNode("union_stmt");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
								}
		| query_stmt union_types union_stmt		{
									$$ = makeNode("union_stmt");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
								};
		
union_types	: UNION 		{ $$ = makeNode("union_types");$1 = makeNode("UNION");$$->child = $1; }
		| UNION_ALL		{ $$ = makeNode("union_types");$1 = makeNode("UNION_ALL");$$->child = $1; };

insert_table	: INSERT_INTO IDENTIFIER VALUES '(' valuelist ')'{
									$$ = makeNode("insert_table");
									$1 = makeNode("INSERT_INTO");
									$2 = makeNode("IDENTIFIER");
									$3 = makeNode("VALUES");
									$4 = makeNode("(");
									$6 = makeNode(")");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									$5->sibling=$6;
								}
		| INSERT_INTO IDENTIFIER '(' origintable ')' VALUES '(' valuelist ')' 	{
									$$ = makeNode("insert_table");
									$1 = makeNode("INSERT_INTO");
									$2 = makeNode("IDENTIFIER");
									$3 = makeNode("(");
									$5 = makeNode(")");
									$6 = makeNode("VALUES");
									$7 = makeNode("(");
									$9 = makeNode(")");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									$5->sibling=$6;
									$6->sibling=$7;
									$7->sibling=$8;
									$8->sibling=$9;
											}
		| INSERT_INTO IDENTIFIER '(' origintable ')' query_stmt	{
									$$ = makeNode("insert_table");
									$1 = makeNode("INSERT_INTO");
									$2 = makeNode("IDENTIFIER");
									$3 = makeNode("(");
									$5 = makeNode(")");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									$5->sibling=$6;
									}
		| INSERT_INTO IDENTIFIER query_stmt			{
										$$ = makeNode("insert_table");
										$1 = makeNode("INSERT_INTO");
										$2 = makeNode("IDENTIFIER");
										$$->child = $1; 
										$1->sibling=$2;
										$2->sibling=$3;
									};
		
valuelist	: value COMMA valuelist					{
										$$ = makeNode("valuelist");
										$2 = makeNode("COMMA");
										$$->child = $1; 
										$1->sibling=$2;
										$2->sibling=$3;
									}
		| value					{ $$ = makeNode("valuelist"); $$->child = $1;};
		
query_stmt	: SELECT isdistinct select_col from_stmt where_stmt groupby_stmt having_stmt orderby_stmt limit_stmt
							{
								$$ = makeNode("query_stmt");
								$1 = makeNode("SELECT");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								$3->sibling=$4;
								$4->sibling=$5;
								$5->sibling=$6;
								$6->sibling=$7;
								$7->sibling=$8;
								$8->sibling=$9;
							};

isdistinct	: DISTINCT			{$$ = makeNode("isdistinct");$1 = makeNode("DISTINCT");$$->child = $1; }
		| 				{$$ = makeNode("isdistinct");};
		
from_stmt	: FROM origintable		{	
							$$ = makeNode("from_stmt");
							$1 = makeNode("FROM");
							$$->child = $1; 
							$1->sibling=$2;
						}
		| FROM '(' query_stmt ')'	{
							$$ = makeNode("from_stmt");
							$1 = makeNode("FROM");
							$2 = makeNode("(");
							$4 = makeNode(")");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
							$3->sibling=$4;
						}
		| FROM join_stmt		{
							$$ = makeNode("from_stmt");
							$1 = makeNode("FROM");
							$$->child = $1; 
							$1->sibling=$2;
						};

origintable	: IDENTIFIER rename		{
							$$ = makeNode("origintable");
							$1 = makeNode("IDENTIFIER");
							$$->child = $1; 
							$1->sibling=$2;
						}
		| IDENTIFIER rename COMMA origintable	{
								$$ = makeNode("origintable");
								$1 = makeNode("IDENTIFIER");
								$3 = makeNode("COMMA");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								$3->sibling=$4;
							};

join_stmt	: IDENTIFIER join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER
							{
								$$ = makeNode("join_stmt");
									$1 = makeNode("IDENTIFIER");
									$3 = makeNode("IDENTIFIER");
									$4 = makeNode("ON");
									$5 = makeNode("IDENTIFIER");
									$6 = makeNode("VALUES");
									$6 = makeNode("EQUALITY_OPERATOR");
									$7 = makeNode("IDENTIFIER");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									$5->sibling=$6;
									$6->sibling=$7;
							}
		| join_stmt join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER
							{
								$$ = makeNode("join_stmt");
									$3 = makeNode("IDENTIFIER");
									$4 = makeNode("ON");
									$5 = makeNode("IDENTIFIER");
									$6 = makeNode("VALUES");
									$6 = makeNode("EQUALITY_OPERATOR");
									$7 = makeNode("IDENTIFIER");
									$$->child = $1; 
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									$5->sibling=$6;
									$6->sibling=$7;
							}
		| '(' join_stmt ')' join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER
		| '(' '(' join_stmt ')' join_types IDENTIFIER ON IDENTIFIER EQUALITY_OPERATOR IDENTIFIER ')';
		
join_types	: INNER_JOIN 		{$$ = makeNode("join_types");$1 = makeNode("INNER_JOIN");$$->child = $1; }
		| LEFT_JOIN 		{$$ = makeNode("join_types");$1 = makeNode("LEFT_JOIN");$$->child = $1; }
		| RIGHT_JOIN 		{$$ = makeNode("join_types");$1 = makeNode("RIGHT_JOIN");$$->child = $1; }
		| FULL_JOIN		{$$ = makeNode("join_types");$1 = makeNode("FULL_JOIN");$$->child = $1; };

rename		: AS IDENTIFIER 		{
							$$ = makeNode("rename");
							$1 = makeNode("AS");
							$2 = makeNode("IDENTIFIER");
							$$->child = $1;
							$1->sibling=$2; 
						}
		| 				{$$ = makeNode("rename");};

select_col	: selectways rename COMMA select_col 		{
								$$ = makeNode("select_col");
								$3 = makeNode("COMMA");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								$3->sibling=$4;
							}
		| selectways rename			{ $$ = makeNode("select_col");$$->child = $1;$1->sibling = $2;};
							
selectways	: diffcolumns 			{ $$ = makeNode("selectways");$$->child = $1;	}
		| counttuples 			{ $$ = makeNode("selectways");$$->child = $1;	}	
		| aggfunc			{ $$ = makeNode("selectways");$$->child = $1;	};
		
aggfunc		: aggfunctypes '(' IDENTIFIER ')' 	{
							$$ = makeNode("aggfunc");
							$2 = makeNode("(");
							$3 = makeNode("IDENTIFIER");
							$4 = makeNode(")");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
							$3->sibling=$4;
							};

aggfunctypes	: AVERAGE 		{ $$ = makeNode("aggfunctypes");$1 = makeNode("AVERAGE");$$->child = $1;}
		| SUM 			{ $$ = makeNode("aggfunctypes");$1 = makeNode("SUM");$$->child = $1;}
		| MINIMUM 		{ $$ = makeNode("aggfunctypes");$1 = makeNode("MINIMUM");$$->child = $1;}
		| MAXIMUM		{ $$ = makeNode("aggfunctypes");$1 = makeNode("MAXIMUM");$$->child = $1;};
							
counttuples	: COUNT '(' counttuplestypes ')' 	{
							$$ = makeNode("counttuples");
							$1 = makeNode("COUNT");
							$2 = makeNode("(");
							$3 = makeNode("IDENTIFIER");
							$4 = makeNode(")");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
							$3->sibling=$4;
						};

counttuplestypes: IDENTIFIER 		{ $$ = makeNode("counttuplestypes");$1 = makeNode("IDENTIFIER");$$->child = $1;	}
		| SELECTALL 		{ $$ = makeNode("counttuplestypes");$1 = makeNode("SELECTALL");$$->child = $1;	}
		| DISTINCT IDENTIFIER 	{ 
						$$ = makeNode("counttuplestypes");
						$1 = makeNode("DISTINCT");
						$2 = makeNode("IDENTIFIER");
						$$->child = $1;	
						$1->sibling = $2;
					}
		| DISTINCT SELECTALL 	{ 
						$$ = makeNode("counttuplestypes");
						$1 = makeNode("DISTINCT");
						$2 = makeNode("SELECTALL");
						$$->child = $1;	
						$1->sibling = $2;
					};
		
diffcolumns	: SELECTALL 		{ $$ = makeNode("diffcolumns");$1 = makeNode("SELECTALL");$$->child = $1;}
		| IDENTIFIER 		{ $$ = makeNode("diffcolumns");$1 = makeNode("IDENTIFIER");$$->child = $1;};
	
where_stmt	: WHERE conditions 		{
							$$ = makeNode("where_stmt");
							$1 = makeNode("WHERE");
							$$->child = $1;	
							$1->child = $2;
						}
		| 			{	$$ = makeNode("where_stmt");	};

conditions	: relational_stmt logical_op conditions 	{
							$$ = makeNode("conditions");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
							}
		| NOT relational_stmt logical_op conditions	{
							$$ = makeNode("conditions");
							$1 = makeNode("NOT");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
							$3->sibling=$4;
							}
		| NOT relational_stmt			{
							$$ = makeNode("conditions");
							$1 = makeNode("NOT");
							$$->child = $1; 
							$1->sibling=$2;
							}
		| relational_stmt		{$$ = makeNode("conditions");$$->child = $1; };
							
relational_stmt	: IDENTIFIER rel_oper value 		{
							$$ = makeNode("relational_stmt");
							$1 = makeNode("IDENTIFIER");
							$$->child = $1; 
							$1->sibling=$2;
							$2->sibling=$3;
							}
		| IDENTIFIER EQUALITY_OPERATOR IDENTIFIER 	{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$2 = makeNode("EQUALITY_OPERATOR");
								$3 = makeNode("IDENTIFIER");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								}
		| IDENTIFIER IS_NULL 			{
								$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$2 = makeNode("IS_NULL");
								$$->child = $1; 
								$1->sibling=$2;
							}
		| IDENTIFIER IS_NOT_NULL		{
								$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$2 = makeNode("IS_NOT_NULL");
								$$->child = $1; 
								$1->sibling=$2;
							}
		| IDENTIFIER LIKE STRING		{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$2 = makeNode("LIKE");
								$3 = makeNode("STRING");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								}
		| IDENTIFIER NOT_LIKE STRING		{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$2 = makeNode("NOT_LIKE");
								$3 = makeNode("STRING");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								}
		| IDENTIFIER ispresent '(' valuelist ')'	{
								$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$3 = makeNode("(");
								$5 = makeNode(")");
								$$->child = $1; 
								$1->sibling=$2;$2->sibling=$3;$3->sibling=$4;$4->sibling=$5;
								}
		| IDENTIFIER ispresent query_bracket		{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;
								}
		| IDENTIFIER isbetween NUMBER AND NUMBER	{	
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$3 = makeNode("NUMBER");
								$4 = makeNode("AND");
								$5 = makeNode("NUMBER");
								$$->child = $1; 
								$1->sibling=$2;$2->sibling=$3;$3->sibling=$4;$4->sibling=$5;
								}
		| IDENTIFIER isbetween STRING AND STRING	{	
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$3 = makeNode("STRING");
								$4 = makeNode("AND");
								$5 = makeNode("STRING");
								$$->child = $1; 
								$1->sibling=$2;$2->sibling=$3;$3->sibling=$4;$4->sibling=$5;
								}
		| IDENTIFIER rel_oper ANY query_bracket		{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$3 = makeNode("ANY");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;$3->sibling=$4;
								}
		| IDENTIFIER rel_oper ALL query_bracket		{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("IDENTIFIER");
								$3 = makeNode("ALL");
								$$->child = $1; 
								$1->sibling=$2;
								$2->sibling=$3;$3->sibling=$4;
								}
		| EXISTS query_bracket 				{
									$$ = makeNode("relational_stmt");
								$1 = makeNode("EXISTS");$$->child = $1; 
								$1->sibling=$2;
								};

query_bracket	: '(' query_stmt ')'	{
						$$ = makeNode("query_bracket");
						$1 = makeNode("(");
						$3 = makeNode(")");
						$$->child = $1; 
						$1->sibling=$2;
						$2->sibling=$3;
					};

isbetween	: BETWEEN		{ $$ = makeNode("isbetween");$1 = makeNode("BETWEEN");$$->child = $1;}
		| NOT_BETWEEN		{ $$ = makeNode("isbetween");$1 = makeNode("NOT_BETWEEN");$$->child = $1;};
		
ispresent	: IN 			{ $$ = makeNode("ispresent");$1 = makeNode("IN");$$->child = $1;}
		| NOT_IN		{ $$ = makeNode("ispresent");$1 = makeNode("NOT_IN");$$->child = $1;};
		
value		: NUMBER 		{ $$ = makeNode("value");$1 = makeNode("NUMBER");$$->child = $1;}
		| STRING		{ $$ = makeNode("value");$1 = makeNode("STRING");$$->child = $1;};

groupby_stmt	: GROUP_BY part1		{
							$$ = makeNode("groupby_stmt");
							$1 = makeNode("GROUP_BY");
							$$->child = $1; 
							$1->sibling=$2;
						}
		| 				{ $$ = makeNode("groupby_stmt"); };
		
part1		: IDENTIFIER COMMA part1	{ 
							$$ = makeNode("part1");
							$1 = makeNode("IDENTIFIER");
							$2 = makeNode("COMMA");
							$$->child = $1;	
							$1->sibling=$2;
							$2->sibling=$3;	
						}
		| IDENTIFIER		{ $$ = makeNode("part1");$1 = makeNode("IDENTIFIER");$$->child = $1;};

having_stmt	: HAVING havingcond		{
							$$ = makeNode("having_stmt");
							$1 = makeNode("HAVING");
							$$->child = $1; 
							$1->sibling=$2;
						}
		| 				{ $$ = makeNode("having_stmt"); };

havingcond	: aggcond logical_op havingcond 	{ 
							$$ = makeNode("havingcond");
							$$->child = $1;	
							$1->sibling=$2;
							$2->sibling=$3;	
							}
		| aggcond			{$$ = makeNode("havingcond");$$->child = $1;};

aggcond		: oper1 rel_oper NUMBER		{
							$$ = makeNode("aggcond");
							$3 = makeNode("NUMBER");
							$$->child = $1;	
							$1->sibling=$2;
							$2->sibling=$3;	
						}
		| oper1 BETWEEN NUMBER AND NUMBER	{
							$$ = makeNode("aggcond");
							$2 = makeNode("BETWEEN");
							$3 = makeNode("NUMBER");
							$4 = makeNode("AND");
							$5 = makeNode("NUMBER");
							$$->child = $1;	
							$1->sibling=$2;
							$2->sibling=$3;	
							$3->sibling=$4;
							$4->sibling=$5;	
						};

oper1		: aggfunc 			{$$ = makeNode("oper1");$$->child = $1;}
		| counttuples			{$$ = makeNode("oper1");$$->child = $1;};
		
orderby_stmt	: ORDER_BY part2		{
							$$ = makeNode("orderby_stmt");
							$1 = makeNode("ORDER_BY");
							$$->child = $1; 
							$1->sibling=$2;
						}
		| 				{$$ = makeNode("orderby_stmt");};

part2		: part3 sortorder COMMA part2	{ 
							$$ = makeNode("part2");
							$3 = makeNode("COMMA");
							$$->child = $1;	
							$1->sibling=$2;
							$2->sibling=$3;	
							$3->sibling=$4;	
						}
		| part3 sortorder	{ $$ = makeNode("part2");$$->child = $1;$1->sibling=$2; };

part3		: IDENTIFIER 		{ $$ = makeNode("part3");$1 = makeNode("IDENTIFIER");$$->child = $1;}
		| oper1			{ $$ = makeNode("part3");$$->child = $1;};
			
sortorder	: ASC 			{ $$ = makeNode("sortorder");$1 = makeNode("ASC");$$->child = $1; }
		| DESC 			{ $$ = makeNode("sortorder");$1 = makeNode("ASC");$$->child = $1; }
		| 			{ $$ = makeNode("sortorder");};

logical_op	: AND 			{ $$ = makeNode("logical_op");$1 = makeNode("AND");$$->child = $1; }
		| OR			{ $$ = makeNode("logical_op");$1 = makeNode("OR");$$->child = $1; };
		
rel_oper	: RELATIONAL_OPERATOR		{ 	$$ = makeNode("rel_oper");
							$1 = makeNode("RELATIONAL_OPERATOR");
							$$->child = $1;	}
		| EQUALITY_OPERATOR		{ 	$$ = makeNode("rel_oper");
							$1 = makeNode("EQUALITY_OPERATOR");
							$$->child = $1;	};

limit_stmt	: LIMIT NUMBER			{	$$ = makeNode("limit_stmt");
							$1 = makeNode("LIMIT");
							$2 = makeNode("NUMBER");
							$$->child = $1; $1->sibling = $2;}
		| 				{	$$ = makeNode("limit_stmt"); };		

delete_stmt	: DELETE from_stmt where_stmt	{	$$ = makeNode("delete_stmt");
							$1 = makeNode("DELETE");
							$$->child = $1;	
							$1->sibling=$2;
							$2->sibling=$3;
						};

update_stmt	: UPDATE IDENTIFIER SET intializelist where_stmt	{ $$ = makeNode("update_stmt");
									$1 = makeNode("UPDATE");
									$2 = makeNode("IDENTIFIER");
									$3 = makeNode("SET");
									$$->child = $1;	
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
									};

intializelist	: IDENTIFIER EQUALITY_OPERATOR value COMMA intializelist	{$$ = makeNode("intializelist");
									$1 = makeNode("IDENTIFIER");
									$2 = makeNode("EQUALITY_OPERATOR");
									$4 = makeNode("COMMA");
									$$->child = $1;	
									$1->sibling=$2;
									$2->sibling=$3;
									$3->sibling=$4;
									$4->sibling=$5;
										}
		| IDENTIFIER EQUALITY_OPERATOR value		{
									$$ = makeNode("intializelist");
									$1 = makeNode("IDENTIFIER");
									$2 = makeNode("EQUALITY_OPERATOR");
									$$->child = $1;	
									$1->sibling=$2;
									$2->sibling=$3;
								};

%%
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
	for(int i=0;i<level;i++)
		printf("	");
	printf("-%s\n",root->str);
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
