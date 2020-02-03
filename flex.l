
%{
%}

%%

[ \n\t]+
(C|c)(R|r)(E|e)(A|a)(T|t)(E|e)				{printf("%s\t\tCREATE\n",yytext); return CREATE; }
(D|d)(E|e)(L|l)(E|e)(T|t)(E|e)				{printf("%s\t\tDELETE\n",yytext); return DELETE; }
(D|d)(R|r)(O|o)(P|p)					{printf("%s\t\tDROP\n",yytext); return DROP; }
(D|d)(A|a)(T|t)(A|a)(B|b)(A|a)(S|s)(E|e)		{printf("%s\t\tDATABASE\n",yytext); return DATABASE; }
(T|t)(A|a)(B|b)(L|l)(E|e)				{printf("%s\t\tTABLE\n",yytext); return TABLE; }
(S|s)(E|e)(L|l)(E|e)(C|c)(T|t)				{printf("%s\t\tSELECT\n",yytext); return SELECT; }
"INSERT INTO"						{printf("%s\t\tINSERT_INTO\n",yytext); return INSERT_INTO; }
(U|u)(P|p)(D|d)(A|a)(T|t)(E|e)				{printf("%s\t\tUPDATE\n",yytext); return UPDATE; }
(S|s)(E|e)(T|t)						{printf("%s\t\tSET\n",yytext); return SET; }
(F|f)(R|r)(O|o)(M|m)					{printf("%s\t\tFROM\n",yytext); return FROM; }
(W|w)(H|h)(E|e)(R|r)(E|e)				{printf("%s\t\tWHERE\n",yytext); return WHERE; }
(A|a)(S|s)						{printf("%s\t\tAS\n",yytext); return AS; }
(A|a)(N|n)(Y|y)						{printf("%s\t\tANY\n",yytext); return ANY; }
(A|a)(L|l)(L|l)						{printf("%s\t\tALL\n",yytext); return ALL; }
(A|a)(S|s)(C|c)						{printf("%s\t\tASC\n",yytext); return ASC; }
(D|d)(E|e)(S|s)(C|c)					{printf("%s\t\tDESC\n",yytext); return DESC; }
(O|o)(N|n)						{printf("%s\t\tON\n",yytext); return ON; }
"ORDER BY"						{printf("%s\t\tORDER_BY\n",yytext); return ORDER_BY; }
(H|h)(A|a)(V|v)(I|i)(N|n)(G|g)				{printf("%s\t\tHAVING\n",yytext); return HAVING; }
"GROUP BY"						{printf("%s\t\tGROUP_BY\n",yytext); return GROUP_BY; }
(D|d)(I|i)(S|s)(T|t)(I|i)(N|n)(C|c)(T|t)		{printf("%s\t\tDISTINCT\n",yytext); return DISTINCT; }
"NOT LIKE"						{printf("%s\t\tNOT_LIKE\n",yytext); return NOT_LIKE; }
(L|l)(I|i)(K|k)(E|e)					{printf("%s\t\tLIKE\n",yytext); return LIKE; }
"NOT BETWEEN"						{printf("%s\t\tNOT_BETWEEN\n",yytext); return NOT_BETWEEN; }
(B|b)(E|e)(T|t)(W|w)(E|e)(E|e)(N|n)			{printf("%s\t\tBETWEEN\n",yytext); return BETWEEN; }
"INNER JOIN"	{printf("%s\t\tINNER_JOIN\n",yytext); return INNER_JOIN; }
"LEFT JOIN"		{printf("%s\t\tLEFT_JOIN\n",yytext); return LEFT_JOIN; }
"RIGHT JOIN"	{printf("%s\t\tRIGHT_JOIN\n",yytext); return RIGHT_JOIN; }
"FULL OUTER JOIN"	{printf("%s\t\tFULL_JOIN\n",yytext); return FULL_JOIN; }
"UNION ALL"		{printf("%s\t\tUNION_ALL\n",yytext); return UNION_ALL; }
(U|u)(N|n)(I|i)(O|o)(N|n)				{printf("%s\t\tUNION\n",yytext); return UNION; }
"NOT IN"				{printf("%s\t\tNOT_IN\n",yytext); return NOT_IN; }
(I|i)(N|n)						{printf("%s\t\tIN\n",yytext); return IN; }
(L|l)(I|i)(M|m)(I|i)(T|t)				{printf("%s\t\tLIMIT\n",yytext); return LIMIT; }
(E|e)(X|x)(I|i)(S|s)(T|t)(S|s)				{printf("%s\t\tEXISTS\n",yytext); return EXISTS; }
(V|v)(A|a)(L|l)(U|u)(E|e)(S|s)				{printf("%s\t\tVALUES\n",yytext); return VALUES; }
(C|c)(O|o)(U|u)(N|n)(T|t)				{printf("%s\t\tCOUNT\n",yytext); return COUNT; }
(A|a)(V|v)(G|g)						{printf("%s\t\tAVERAGE\n",yytext); return AVERAGE; }
(S|s)(U|u)(M|m)						{printf("%s\t\tSUM\n",yytext); return SUM; }
(M|m)(I|i)(N|n)						{printf("%s\t\tMINIMUM\n",yytext); return MINIMUM; }
(M|m)(A|a)(X|x)						{printf("%s\t\tMAXIMUM\n",yytext); return MAXIMUM; }
"="							{printf("%s\t\tEQUALITY_OPERATOR\n",yytext); return EQUALITY_OPERATOR; }
("<"|">"|"<="|">="|"<>"|"!=")				{printf("%s\t\tRELATIONAL_OPERATOR\n",yytext); return RELATIONAL_OPERATOR; }
(A|a)(N|n)(D|d) 					{printf("%s\t\tAND\n",yytext); return AND; }
(O|o)(R|r) 						{printf("%s\t\tOR\n",yytext); return OR; }
"IS NULL"			{printf("%s\t\tIS_NULL\n",yytext); return IS_NULL; }
"IS NOT NULL"	{printf("%s\t\tIS_NOT_NULL\n",yytext); return IS_NOT_NULL; }
(N|n)(O|o)(T|t)						{printf("%s\t\tNOT\n",yytext); return NOT; }
"("							{printf("%s\t\t(\n",yytext); return '('; }
")"							{printf("%s\t\t)\n",yytext); return ')'; }
";"							{printf("%s\t\t;\n",yytext); return ';'; }
","							{printf("%s\t\tCOMMA\n",yytext); return COMMA; }
(char\([0-9]+\)|char|varchar|varchar\([0-9]+\)|bool|int|bigint|smallint|float)	{printf("%s\t\tDATATYPE\n",yytext); return DATATYPE; }
(([a-zA-Z][a-zA-Z0-9]{0,127})(\.([a-zA-Z][a-zA-Z0-9]{0,127}))?)		{printf("%s\t\tIDENTIFIER\n",yytext); return IDENTIFIER; }
\'(([^\']|\\\')*[^\\])?\'				{printf("%s\t\tSTRING\n",yytext); return STRING; }
\"(([^\"]|\\\")*[^\\])?\"				{printf("%s\t\tSTRING\n",yytext); return STRING; }
[0-9]+							{printf("%s\t\tNUMBER\n",yytext); return NUMBER; }
"*"							{printf("%s\t\tSELECTALL\n",yytext); return SELECTALL; }
%%
