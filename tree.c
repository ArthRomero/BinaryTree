#include <stdio.h>
#include <malloc.h>
#include "tree.h"

TREE* constructorTree(){
	TREE* newTree = (TREE*) malloc(sizeof(TREE));
	newTree->root = NULL;

	return newTree;
}

void adicionaNaArvore(TREE* tree, int valor){
	PNODE nodo = constructTreeNode(valor);
	tree->root = addTreeNode(tree->root, nodo);
}
