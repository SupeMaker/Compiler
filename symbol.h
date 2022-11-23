#ifndef SYMBOL_H
#define SYMBOL_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define KEY 76543
#define P 107
/* 与词法分析器的接口 */
extern int yylineno; /* 来自词法分析器 */
void yyerror(char *s, ...);

struct NodeType {
  char *name; // 符号名
  char *type; // 符号对应的类型
  int value; // 符号对应的值
  int lineValue; // 定义所在的行号
};
struct symbol{
  unsigned long long Hash;
  struct NodeType *info;
  int next;
};

struct HashTable {
  int first[KEY], e;
  // unsigned long long (*getHash)( char*);
  // struct NodeType* (*newSymbol)(struct HashTable*, char*, unsigned long long);
  // int (*Count)(struct HashTable*, char *);
  // void (*printTable)(struct HashTable*);
  // struct NodeType* (*getElement) (struct HashTable*, char*);
};

struct NodeType* createNodeType(char *);
struct NodeType* freeNodeType(struct NodeType*);
int Equ(char*, char *);

struct symbol* createSymbol();
struct symbol* freeSymbol(struct symbol *sym);

struct NodeType* getElement (struct HashTable*, char*);
void printTable(struct HashTable*);
int Count(struct HashTable*, char *);
struct NodeType* newSymbol(struct HashTable*, char*, unsigned long long);
unsigned long long getHash (char *);

#endif
