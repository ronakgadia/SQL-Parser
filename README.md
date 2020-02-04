# SQL-Parser

An SQL Parser written in flex and bison. 
It does the lexical analysis by generating tokens in the flex file. These tokens are sent to the bison parser which parsers the input SQL query based on the grammer define in the bison/yacc file.

## Running on Linux Terminal
To run the file on terminal, use the following commnands:-
```
$ lex flex.l
$ yacc -d parse.y
$ gcc y.tab.c -ll -ly
$ ./a.out
```
