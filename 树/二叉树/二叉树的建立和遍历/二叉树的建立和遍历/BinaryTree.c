#include<stdio.h>
#include<stdlib.h>

typedef struct BinTree {
	int data;
	struct BinTree* left;
	struct BInTree* right;
}BinTree;
/*先序遍历，根节点->左子树->右子树==================*/
void PreOrder(BinTree* T)
{
	//如果树T非空，则进入操作
	if (T)
	{
		printf("%d\t", T->data);
		PreOrder(T->left);
		PreOrder(T->right);
	}
	else
	{
		return;
	}
		return;
}

/*中序遍历，左子树->根节点->右子树===================*/
void InOrder(BinTree* T)
{
	if (T)
	{
		InOrder(T->left);
		printf("%d\t", T->data);
		InOrder(T->right);
	}
	else
		return;
}
/*后序遍历，左子树->右子树->根节点===================*/
void PostOrder(BinTree* T)
{
	if (T)
	{
		PostOrder(T->left);
		PostOrder(T->right);
		printf("%d\t", T->data);

	}
	else
		return;
}
//创建结点，输入-1时表示当前结点为空不存在
BinTree*  creataTree()
{
	BinTree* tree;
	int x;
	scanf_s("%d", &x);
	if (x == -1)
	{
		tree = NULL;
	}
	else
	{
		tree = (BinTree*)malloc(sizeof(BinTree));//为当前结点申请空间
		if (tree == NULL)
		{
			exit(0);
		}	
		tree->data = x;//为当前结点赋值
		tree->left = creataTree();
		tree->right = creataTree();

	}
	return tree;


}
int main()
{
	BinTree* tree=NULL;
	tree=creataTree();
	printf("前序遍历：\n");
	PreOrder(tree);
	printf("\n中序遍历：\n");
	InOrder(tree);

	return 0;
}