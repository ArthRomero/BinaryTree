#include <stdio.h>
#include "tree.h"
#include "treeNode.h"

int main(void) {
  TREE* tree1 = constructorTree();

	adicionaNaArvore(tree1, 15);
	adicionaNaArvore(tree1, 12);
	adicionaNaArvore(tree1, 21);
	
	printf("ARVORE\n");
	printTreeNode(tree1->root);
	printf("\n");

	printf("NUMERO DE NOS: %d\n", countTreeNode(tree1->root));

	PNODE Search = searchTreeNode(tree1->root, 21);
	if(Search != NULL)
		printf("ACHEI O NÚMERO %d \n", Search -> value);
	else
		printf("NÃO ACHEI O NUMERO \n");
  return 0;
}
