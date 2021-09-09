#ifndef _TREE_H_
#define _TREE_H_
#include "treeNode.h"

typedef struct{
	PNODE root;
} TREE;

TREE* constructorTree();
void adicionaNaArvore(TREE* tree, int valor);

#endif
