#include<stdio.h>
#include<stdlib.h>
#include "symbol.h"
#include<string.h>


struct symbol a[KEY];
unsigned long long symbolList[KEY];
int head = 0;

struct NodeType* createNodeType(char *s) {
  struct NodeType* node = (struct NodeType*)malloc(sizeof(struct NodeType));
  if(!node) {
    yyerror("out of space ");
    exit(0);
  }
  node->name = strdup(s);
  return node;
}

struct NodeType* freeNodeType(struct NodeType* node) {
  free(node->name);
  node->name = NULL;
}

int Equ(char*c, char *s) {
  return (strcmp(c, s) == 0);
}

struct symbol* createSymbol() {
  struct symbol* sym = (struct symbol*)malloc(sizeof(struct symbol));
  if(!sym) {
    yyerror("out of space ");
    exit(0);
  }
  return sym;
}

struct symbol* freeSymbol(struct symbol *sym) {
  free(sym->info);
  sym->info=NULL;
}

unsigned long long getHash (char* s) {
  unsigned long long Ans = 0;
  for (int i = 0; s[i]; ++i) {
    Ans = Ans * P + s[i];
  }
  return Ans;
}

struct NodeType* newSymbol (struct HashTable* table, char* s, unsigned long long hash) {
  int index = table->first[hash % KEY];
  symbolList[head++] = hash % KEY;
  while((a[index]).next != 0 ) {
    index = a[index].next;
  }
  if (table->first[hash % KEY] == 0) {
    table->first[hash % KEY] = ++(table->e);
    a[table->e].next = 0;
  } else {
    a[index].next = ++(table->e);
  }
  a[table->e].Hash = hash;
  a[table->e].info = createNodeType(s);
  return a[table->e].info;
}

int Count(struct HashTable*table, char *s) {
  unsigned long long hash = getHash(s);
  for ( int i = table->first[hash % KEY]; i; i = a[i].next) {
    if (a[i].info && Equ((a[i].info)->name, s)) {
      return 1;
    }
  }
  return 0;
}

struct NodeType* getElement (struct HashTable* table, char* s) {
  unsigned long long  hash = getHash(s);
  for ( int i = table->first[hash % KEY]; i; i = a[i].next) {
    int bo = Equ((a[i].info)->name, s);
    if (a[i].info && bo) {
      return a[i].info;
    }
  }
  return newSymbol(table, s, hash);
}

void printTable(struct HashTable* table) {
  printf("\n+-------------------------------------------+\n");
      printf("|                Symbol Table               |\n");
      printf("+----------+----------+---------------+----------+\n");
      printf("|  symbol  |   value  |   lineValue   |   type   |\n");
      printf("+----------+----------+----------+----------+\n");
    for(int i; i < head; i++){
        for (unsigned long long j = table->first[symbolList[i]]; j; j = a[j].next){
            printf("|%9s |%9d |%9d |%9s |\n", a[j].info->name, a[j].info->value, a[j].info->lineValue, a[j].info->type);
            printf("+----------+----------+----------+----------+\n");
        }
    }
}
