#include <stdlib.h>
#include<stdio.h>
#include "ASTNode.h"
int flags[100], whileflag, declared_error;
node *makeNode(char *rootname, node *left, node *right )
{
	node *newnode = (node *)malloc(sizeof(node));
	strcpy(newnode->operand, rootname);
	newnode->left = left;
	newnode->right = right;
	return newnode;
}

void printTree (node* tree, int tab, int flag){ //打印抽象语法树
    int nextTab = tab;
    if (strlen(tree->operand) > 0) {
        if (strcmp(tree->operand, "empty") != 0){
            flags[tab] = 1;
            printTabs(tab);
        }
        if (flag == 2 || flag == 0) {
            printf ("\\--> %s", tree->operand);
            flags[tab] = 0;
        }
        else{
            if (strcmp(tree->operand, "empty") != 0)
                printf ("|--> %s", tree->operand);
        }
        if (tree->left != NULL) {
            printf("\n");
        }
    }
    if (tree->left) {
        if (strlen(tree->operand) == 0) {
            nextTab = tab - 1;
        }
        printTree(tree->left, nextTab + 1, 1);
        if (strlen(tree->operand) > 0 && flag == 0) {
            printTabs(tab);
        }
    }
    if (strlen(tree->operand) > 0) {
        if (tree->left || tree->right)
            if ((tree->left && strcmp(tree->left->operand, "empty") != 0) || tree->left == NULL)
                printf("\n");
    }
    if (tree->right) {
        flags[tab + 1] = 0;
        printTree(tree->right, tab + 1, 2);
    }
}

void printTabs(int numOfTabs) { //打印抽象语法树每一行的缩进
    int i;
    for (i = 0; i < numOfTabs; i++) {
        if (flags[i] == 0)
            printf("  ");
        else
            printf("| ");
    }
}

int powNumber(int a, int b) {
    if (b == 0) {
        return 1;
    }
    int temp = 1;
    for (int i = 0; i < b; i++) {
        temp *= a;
    }
    return temp;
}