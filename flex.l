
%{
%}

%%

[ \n\t]+
"CREATE"				{printf("%s	CREATE\n",yytext); return CREATE; }
"DELETE"				{printf("%s	DELETE\n",yytext); return DELETE; }
"DROP"					{printf("%s	DROP\n",yytext); return DROP; }
"DATABASE"				{printf("%s	DATABASE\n",yytext); return DATABASE; }
"TABLE"					{printf("%s	TABLE\n",yytext); return TABLE; }
"SELECT"				{printf("%s	SELECT\n",yytext); return SELECT; }
"INSERT INTO"				{printf("%s	INSERT_INTO\n",yytext); return INSERT_INTO; }
"UPDATE"				{printf("%s	UPDATE\n",yytext); return UPDATE; }
"SET"					{printf("%s	SET\n",yytext); return SET; }
"FROM"					{printf("%s	FROM\n",yytext); return FROM; }
"WHERE"					{printf("%s	WHERE\n",yytext); return WHERE; }
"AS"					{printf("%s	AS\n",yytext); return AS; }
"ANY"					{printf("%s	ANY\n",yytext); return ANY; }
"ALL"					{printf("%s	ALL\n",yytext); return ALL; }
"ASC"					{printf("%s	ASC\n",yytext); return ASC; }
"DESC"					{printf("%s	DESC\n",yytext); return DESC; }
"ON"					{printf("%s	ON\n",yytext); return ON; }
"ORDER BY"				{printf("%s	ORDER_BY\n",yytext); return ORDER_BY; }
"HAVING"				{printf("%s	HAVING\n",yytext); return HAVING; }
"GROUP BY"				{printf("%s	GROUP_BY\n",yytext); return GROUP_BY; }
"DISTINCT"				{printf("%s	DISTINCT\n",yytext); return DISTINCT; }
"NOT LIKE"				{printf("%s	NOT_LIKE\n",yytext); return NOT_LIKE; }
"LIKE"					{printf("%s	LIKE\n",yytext); return LIKE; }
"NOT BETWEEN"				{printf("%s	NOT_BETWEEN\n",yytext); return NOT_BETWEEN; }
"BETWEEN"				{printf("%s	BETWEEN\n",yytext); return BETWEEN; }
"INNER JOIN"				{printf("%s	INNER_JOIN\n",yytext); return INNER_JOIN; }
"LEFT JOIN"				{printf("%s	LEFT_JOIN\n",yytext); return LEFT_JOIN; }
"RIGHT JOIN"				{printf("%s	RIGHT_JOIN\n",yytext); return RIGHT_JOIN; }
"FULL OUTER JOIN"			{printf("%s	FULL_JOIN\n",yytext); return FULL_JOIN; }
"UNION ALL"				{printf("%s	UNION_ALL\n",yytext); return UNION_ALL; }
"UNION"					{printf("%s	UNION\n",yytext); return UNION; }
"NOT IN"				{printf("%s	NOT_IN\n",yytext); return NOT_IN; }
"IN"					{printf("%s	IN\n",yytext); return IN; }
"LIMIT"					{printf("%s	LIMIT\n",yytext); return LIMIT; }
"EXISTS"				{printf("%s	EXISTS\n",yytext); return EXISTS; }
"VALUES"				{printf("%s	VALUES\n",yytext); return VALUES; }
"COUNT"					{printf("%s	COUNT\n",yytext); return COUNT; }
"AVG"					{printf("%s	AVERAGE\n",yytext); return AVERAGE; }
"SUM"					{printf("%s	SUM\n",yytext); return SUM; }
"MIN"					{printf("%s	MINIMUM\n",yytext); return MINIMUM; }
"MAX"					{printf("%s	MAXIMUM\n",yytext); return MAXIMUM; }
"="					{printf("%s	EQUALITY_OPERATOR\n",yytext); return EQUALITY_OPERATOR; }
("<"|">"|"<="|">="|"<>"|"!=")		{printf("%s	RELATIONAL_OPERATOR\n",yytext); return RELATIONAL_OPERATOR; }
"AND" 					{printf("%s	AND\n",yytext); return AND; }
"OR" 					{printf("%s	OR\n",yytext); return OR; }
"IS NULL"				{printf("%s	IS_NULL\n",yytext); return IS_NULL; }
"IS NOT NULL"				{printf("%s	IS_NOT_NULL\n",yytext); return IS_NOT_NULL; }
"NOT"					{printf("%s	NOT\n",yytext); return NOT; }
"("					{printf("%s	(\n",yytext); return '('; }
")"					{printf("%s	)\n",yytext); return ')'; }
";"					{printf("%s	;\n",yytext); return ';'; }
","					{printf("%s	COMMA\n",yytext); return COMMA; }
(char\([0-9]+\)|char|varchar|varchar\([0-9]+\)|bool|int|bigint|smallint|float)	{printf("%s	DATATYPE\n",yytext); return DATATYPE; }
(([a-zA-Z][a-zA-Z0-9]{0,127})(\.([a-zA-Z][a-zA-Z0-9]{0,127}))?)		{printf("%s	IDENTIFIER\n",yytext); return IDENTIFIER; }
\'(([^\']|\\\')*[^\\])?\'		{printf("%s	STRING\n",yytext); return STRING; }
\"(([^\"]|\\\")*[^\\])?\"		{printf("%s	STRING\n",yytext); return STRING; }
[0-9]+					{printf("%s	NUMBER\n",yytext); return NUMBER; }
"*"					{printf("%s	SELECTALL\n",yytext); return SELECTALL; }
%%
