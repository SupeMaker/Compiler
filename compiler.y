%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol.h"
#include "ASTNode.h"
struct HashTable *symbolTable;
extern int yylineno;
extern int whileflag, declared_error, flags[100];
int yylex();

%}
%union{
  char* name;
  struct astNode *node;
}

%token<name> ID NUM LESS_EQUAL_THAN LESS_THAN GREAT_THAN GREAT_EQUAL_THAN DOUBLE_EQUAL NOT_EQUAL
%token<name> KEYWORD_ELSE KEYWORD_IF KEYWORD_INT KEYWORD_RETURN KEYWORD_VOID KEYWORD_WHILE MULTI_LINE_ANNOTATION
%token<name> KEYWORD_AND KEYWORD_OR KEYWORD_NO KEYWORD_FOR KEYWORD_BREAK KEYWORD_CONTINUE DOUBLE_ADD DOUBLE_SUB
%type<node> program comment declaration_list declaration var_declaration type_specifier fun_declaration params param_list param compound_stmt local_declarations statement_list
%type<node> statement expression_stmt selection_stmt iteration_stmt return_stmt expression var simple_expression additive_expression term factor call args arg_list for_stmt break_stmt continue_stmt
%left '+' '-'
%left '*' '/'
%expect 3

%%

program : declaration_list { $$ = makeNode("program", NULL, $1); puts(""); printTree($$, 0, 0); } //打印抽象语法树
        ;
declaration_list : declaration_list declaration { $$ = makeNode("declaration_list", $1, $2); }
                 | declaration { $$ = $1; }
                 | comment
                 ;
declaration : var_declaration { $$ = $1; }
            | fun_declaration { $$ = $1; }
            ;
var_declaration : type_specifier ID ';' { // 建立变量的抽象语法树节点
                                            $$ = makeNode("var-declaration", $1, makeNode($2, NULL, NULL));
                                            getElement(symbolTable, $2)->lineValue = yylineno;
                                            getElement(symbolTable, $2)->type = $1->operand;
                                        }
                | type_specifier ID '[' NUM ']' ';' {
                                                       $$ = makeNode("var-declaration", $1, makeNode($2, NULL, NULL));
                                                       getElement(symbolTable, $2)->lineValue = yylineno;
                                                       getElement(symbolTable, $2)->type = $1->operand;
                                                    }
                | type_specifier ID '=' expression ';' {
                                                       $$ = makeNode("var-declaration", $1, makeNode("=", makeNode($2, NULL,NULL), $4));
                                                       getElement(symbolTable, $2)->lineValue = yylineno;
                                                       getElement(symbolTable, $2)->type = $1->operand;
                                                       getElement(symbolTable, $2)->value = $4->Val;
                                                      }
                ;
type_specifier :  KEYWORD_INT { $$ = makeNode($1, NULL, NULL); } // 建立变量类型的语法分析
               |  KEYWORD_VOID { $$ = makeNode($1, NULL, NULL); }
               ;
fun_declaration : type_specifier ID '(' params ')' compound_stmt { $$ = makeNode("fun_declaration", $1, $6); }
                ; // 建立函数的节点
comment : comment MULTI_LINE_ANNOTATION {}  // 处理注释
        | {}
        ;
params  : param_list { $$ = $1; } // 函数参数
        | KEYWORD_VOID  { $$ = makeNode($1, NULL, NULL); }
        ;
param_list : param_list ','  param { $$ = makeNode("param_list", $1, $3); }  // 参数列表
           | param { $$ = $1; }
           ;
param : type_specifier  ID {  // 参数是标识符
                              $$ = makeNode("var-declaration", $1, makeNode($2, NULL, NULL));
                              getElement(symbolTable, $2)->lineValue = yylineno;
                              getElement(symbolTable, $2)->type = $1->operand;
                            }
      | type_specifier ID '[' ']' { // 参数为数组
                                    $$ = makeNode("var-declaration", $1, makeNode($2, NULL, NULL));
                                    getElement(symbolTable, $2)->lineValue = yylineno;
                                    getElement(symbolTable, $2)->type = $1->operand;
                                  }
      ;
compound_stmt : '{' local_declarations statement_list '}' { $$ = makeNode("compound_stmt", $2, $3); } // 函数体的定义
              ;
local_declarations  : local_declarations var_declaration { $$ = makeNode("local-declarations", $1, $2); }
                    | { $$ = makeNode("empty", NULL, NULL); } // 可以处理 { 这个大括号后面为空的情况， 也可以处理后面有定义的地方
                    ;
statement_list  : statement_list statement comment { $$ = makeNode("statement_list", $1, $2); }
                | { $$ = makeNode("empty", NULL, NULL); }
                ;
statement : expression_stmt { $$ = $1; }
          | compound_stmt   { $$ = $1; }
          | selection_stmt  { $$ = $1; }
          | iteration_stmt  { $$ = $1; }
          | for_stmt        { $$ = $1; }
          | continue_stmt   { $$ = $1; }
          | break_stmt      { $$ = $1; }
          | return_stmt     { $$ = $1; }
          ;
expression_stmt : expression  ';' { $$ = $1; }
                | ';' {}
                ;
selection_stmt : KEYWORD_IF '(' expression ')' statement { $$ = makeNode("if", $3, $5); }
               | KEYWORD_IF '(' expression ')' statement KEYWORD_ELSE statement  { $$ = makeNode("if", makeNode("if_statement", $3, $5), makeNode("else_statement", NULL, $7)); }
               ;
iteration_stmt : KEYWORD_WHILE '(' expression {
                                                if (whileflag){
                                                  char temp[256];
                                                  strcat(strcat(strcat(temp, "The integer variable "), $3->operand), " is used as a boolean");
                                                }
                                              }
                ')' statement {
                              $$ = makeNode("while", $3, $6);
                            }
                ;
for_stmt : KEYWORD_FOR '('  ';' expression ';' ')' statement { $$ = makeNode("for",$4,$7); }
                |KEYWORD_FOR '(' expression ';' expression ';' ')' statement {$$ = makeNode("for",$3,makeNode("mian",$5,$8));}
                |KEYWORD_FOR '(' expression ';' expression ';' expression ')' statement{$$=makeNode("for",$3,makeNode("main",$5,makeNode("statement",$7,$9)));}
                |KEYWORD_FOR '(' ';' expression ';' expression ')' statement {$$=makeNode("for", $4,makeNode("statement",$6,$8));}
                |KEYWORD_FOR '(' var_declaration expression ';' expression ')' statement {$$=makeNode("for",$3,makeNode("main",$4,makeNode("statement",$6,$8)));}
                |KEYWORD_FOR '(' var_declaration expression ';' ')' statement {$$ = makeNode("for",$3,makeNode("mian",$4,$7));}
                ;
return_stmt : KEYWORD_RETURN ';' { $$ = makeNode("return\n", NULL, NULL); }
            | KEYWORD_RETURN expression ';' { $$ = makeNode("return", NULL, $2); }
            ;
continue_stmt : KEYWORD_CONTINUE ';' { $$ = makeNode("continue\n", NULL, NULL); }
              ;
break_stmt : KEYWORD_BREAK ';' { $$ = makeNode("break\n", NULL, NULL); }
           ;
expression : var '=' expression { $$ = makeNode("=",$1,$3); getElement(symbolTable, $1->operand)->value = $3->Val;}
           | var DOUBLE_ADD {
              $$ = makeNode("auto_incr", $1, makeNode("++",NULL,NULL)); getElement(symbolTable, $1->operand)->value = $1->Val + 1;
            }
           | var DOUBLE_SUB {
              $$ = makeNode("auto_decr", $1, makeNode("--",NULL,NULL)); getElement(symbolTable, $1->operand)->value = $1->Val - 1;
            }
           | simple_expression KEYWORD_AND simple_expression        { $$ = makeNode("expression", $1, $3); $$->Val = $1 && $3; }
           | simple_expression KEYWORD_OR simple_expression        { $$ = makeNode("expression", $1, $3); $$->Val = $1 || $3; }
           | KEYWORD_NO '(' simple_expression ')'       { $$ = makeNode("expression", $3, NULL); $$->Val = !$3; }
           | simple_expression { $$ = $1; }
var : ID {
            $$ = makeNode($1, NULL, NULL);
            if (Count(symbolTable, $1))
              getElement(symbolTable, $$->operand)->value = getElement(symbolTable, $1)->value;
            else
              declared_error = 1, yyerror(strcat($1, " was not declared in this scope.")); // 检测变量未声明
         }
    | ID '[' expression ']' { $$ = makeNode("var", makeNode($1, NULL, NULL), $3); }
    ;
simple_expression : additive_expression LESS_EQUAL_THAN additive_expression  { $$ = makeNode("simple_expression", $1, $3); $$->Val = $1 <= $3; }
                  | additive_expression LESS_THAN additive_expression        { $$ = makeNode("simple_expression", $1, $3); $$->Val = $1 < $3; }
                  | additive_expression GREAT_THAN additive_expression       { $$ = makeNode("simple_expression", $1, $3); $$->Val = $1 > $3; }
                  | additive_expression GREAT_EQUAL_THAN additive_expression { $$ = makeNode("simple_expression", $1, $3); $$->Val = $1 >= $3; }
                  | additive_expression DOUBLE_EQUAL additive_expression     { $$ = makeNode("simple_expression", $1, $3); $$->Val = $1 == $3; }
                  | additive_expression NOT_EQUAL additive_expression        { $$ = makeNode("simple_expression", $1, $3); $$->Val = $1 != $3; }
                  | additive_expression {
                                            $$ = $1;
                                            if (Count(symbolTable, $1->operand) == 1)
                                                if (strcmp(getElement(symbolTable, $$->operand)->type, "int") == 0) // 检测while参数出现错误。
                                                    whileflag = 1;
                                        }
                  ;
additive_expression : additive_expression '+' term { $$ = makeNode("+",$1,$3); $$->Val = $1->Val + $3->Val;}
                    | additive_expression '-' term { $$ = makeNode("-",$1,$3); $$->Val = $1->Val - $3->Val;}
                    | term { $$ = $1; }
                    ;
term : term '^' factor { $$ = makeNode("^", $1, $3); $$->Val = powNumber($1->Val, $3->Val); }
     | term '*' factor { $$ = makeNode("*", $1, $3); $$->Val = $1->Val * $3->Val;}
     | term '/' factor {
                            $$ = makeNode("/", $1, $3);
                            if (($3->Val) != 0)
                                $$->Val = $1->Val / $3->Val;
                            else
                                yyerror("divide by zero");
                       }
     | term '%' factor {
                            $$ = makeNode("%", $1, $3);
                            if (($3->Val) != 0)
                                $$->Val = $1->Val % $3->Val;
                            else
                                yyerror("mod by zero");
                       }
     | factor { $$ = $1; }
     ;
factor : '(' expression ')' { $$ = $2; }
       | var {
                $$ = $1;
                $$->Val = getElement(symbolTable, $1->operand)->value;
             }
       | call { $$ = $1; }
       | NUM { $$ = makeNode($1,NULL,NULL); $$->Val = atoi($1);}
       ;
call : ID '(' args ')' { $$ = makeNode("call", makeNode($1, NULL, NULL), $3); }
     ;
args : arg_list { $$ = $1; }
     | {}
     ;
arg_list : arg_list ',' expression
         | expression { $$ = $1; }
         ;

%%
int main() {
    symbolTable = (struct HashTable*)malloc(sizeof(struct HashTable));
    yyparse();
    printTable(symbolTable);
}

