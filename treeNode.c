#include <stdio.h>
#include <malloc.h>
#include "treeNode.h"



PNODE constructTreeNode(int value) {
	PNODE newNode = (PNODE) malloc(sizeof(TREE_NODE));

	newNode->value = value;
	newNode->nLeft = NULL;
	newNode->nRight = NULL;

	return newNode;
}

PNODE addTreeNode(PNODE root, PNODE newNode) {
	if(root == NULL) return newNode;

	if(newNode->value < root->value){
		root -> nLeft = addTreeNode(root->nLeft, newNode);
	} else {
		root -> nRight = addTreeNode(root->nRight, newNode);
	}
	return root;
}

int countTreeNode(PNODE root) {
	if(root == NULL) return 0;

	//PRE ORDER
	return 1 + countTreeNode(root->nLeft) + countTreeNode(root->nRight);
}

void printTreeNode(PNODE root) {
	if(root != NULL){
		printf("%d", root-> value);
		printf("(");
		printTreeNode(root->nLeft);
		printTreeNode(root->nRight);
		printf(")");
	}

}

PNODE searchTreeNode(PNODE root, int searchValue) {
	if(root == NULL) return NULL;
	if(root->value == searchValue) return root;

	if(searchValue < root->value)
		return searchTreeNode(root->nLeft, searchValue);

	return searchTreeNode(root->nRight, searchValue);
}
