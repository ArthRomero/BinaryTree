#ifndef _TREE_NODE_
#define _TREE_NODE_

typedef struct treeNode {
	int value;
	struct treeNode* nRight;
	struct treeNode* nLeft;
}TREE_NODE;

typedef TREE_NODE* PNODE;

PNODE constructTreeNode(int value);
PNODE addTreeNode(PNODE root, PNODE newNode);
int countTreeNode(PNODE root);
void printTreeNode(PNODE root);
PNODE searchTreeNode(PNODE root, int searchValue);

#endif
