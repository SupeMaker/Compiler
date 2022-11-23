#ifndef ASTNODE_H
#define ASTNODE_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct astNode {
  char operand[20];
  int Val;
  struct astNode *left;
  struct astNode *right;
} node;

node* makeNode(char *rootName, node *left ,node *right);
void printTree (node *tree, int tab, int flag);
void printTabs(int numOfTabs);
int powNumber(int a, int b);

#endif
