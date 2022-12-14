%x COMMENT
%x IFILE
%{
#include "y.tab.h"
void yyerror(char* msg);
int left_BRACE, right_BRACE, left_parenthesis, right_parenthesis;
extern int whileflag, declared_error, type_error;
%}
%option yylineno
delim      [ \t]
letter     [a-zA-Z]
digit      [0-9]
id         {letter}{letter}*|{letter}{digit}*
NUM        {digit}{digit}*
FNUM       [0-9]+"."[0-9]*

%%

^"#"[ \t]*include[ \t]*[\"<]                    { printf("%s", yytext); yylval.name = strdup(yytext); BEGIN IFILE; }
<IFILE>[^>\"]+[>\"]                             { printf("%s\n", yytext); { int c; while((c = input()) && c != '\n');} yylval.name = strdup(yytext); BEGIN INITIAL; }
<IFILE>.|\n                                     { printf("%s", yytext);  BEGIN INITIAL; }
{delim}+                                        { printf("%s", yytext); }
"\n"|"\r\n"                                     { printf("%s", yytext); }
"{"                                             { left_BRACE++; printf("%s", yytext); yylval.name = strdup(yytext); return yytext[0];}
"}"                                             { right_BRACE++; printf("%s", yytext); yylval.name = strdup(yytext); return yytext[0];}
"("                                             { left_parenthesis++; printf("%s", yytext); yylval.name = strdup(yytext); return yytext[0];}
")"                                             { right_parenthesis++; printf("%s", yytext); yylval.name = strdup(yytext); return yytext[0];}
"["|"]"|";"|"^"|"%"|"/"|"*"|"-"|"+"|"="|","     { printf("%s", yytext); yylval.name = strdup(yytext); return yytext[0];}
"++"                                            { printf("%s", yytext); yylval.name = strdup(yytext); return DOUBLE_ADD; }
"<<"                                            { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_DOUBLE_LESS; }
"cout"                                          { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_OUT; }
"--"                                            { printf("%s", yytext); yylval.name = strdup(yytext); return DOUBLE_SUB; }
"else"                                          { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_ELSE; }
"if"                                            { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_IF; }
"int"                                           { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_INT; }
"return"                                        { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_RETURN; }
"void"                                          { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_VOID; }
"while"                                         { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_WHILE; }
"for"                                           { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_FOR; }
"break"                                         { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_BREAK; }
"continue"                                      { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_CONTINUE; }
"<"                                             { printf("%s", yytext); yylval.name = strdup(yytext); return LESS_THAN; }
"<="                                            { printf("%s", yytext); yylval.name = strdup(yytext); return LESS_EQUAL_THAN; }
">"                                             { printf("%s", yytext); yylval.name = strdup(yytext); return GREAT_THAN; }
">="                                            { printf("%s", yytext); yylval.name = strdup(yytext); return GREAT_EQUAL_THAN; }
"=="                                            { printf("%s", yytext); yylval.name = strdup(yytext); return DOUBLE_EQUAL; }
"!="                                            { printf("%s", yytext); yylval.name = strdup(yytext); return NOT_EQUAL; }
"&&"                                            { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_AND; }
"||"                                            { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_OR; }
"!"                                             { printf("%s", yytext); yylval.name = strdup(yytext); return KEYWORD_NO; }
{id}                                            { printf("%s", yytext); yylval.name = strdup(yytext); return ID; }
-?{NUM}                                         { printf("%s", yytext); yylval.name = strdup(yytext); return NUM; }
-?{FNUM}                                        { printf("%s", yytext); yylval.name = strdup(yytext); return FNUM; }
"/*"[^*]*"*/"|"/*"[^*]*"*/"\n                   { printf("%s", yytext); return MULTI_LINE_ANNOTATION; }
"//".*
.                                               { printf("%s", yytext); return 0; }

%%

int yywrap(void) {
    return 1;
}
void yyerror(char *msg) {
    if (whileflag){
        printf("\nline %d: error: %s\n", yylineno, msg);
        exit(1);
    }
    if (declared_error){
        printf("\nline %d: error: %s\n", yylineno, msg);
        exit(1);
    }
    if (type_error) {
        printf("\nline %d: error: %s\n", yylineno, msg);
        exit(1);
    }
    if (left_parenthesis < right_parenthesis)
        msg = "'(' is missing on the inner loop."; //???????????????
    else if (left_parenthesis > right_parenthesis) 
        msg = "')' is missing on the inner loop.";
    else if (left_BRACE < right_BRACE)
        msg = "'{' is missing on the inner loop.";
    else if (left_BRACE > right_BRACE)
        msg = "'}' is missing on the inner loop.";
    else
        msg = "syntax error.";
    printf("\nline %d: error: %s\n", yylineno, msg);
    exit(1);
}