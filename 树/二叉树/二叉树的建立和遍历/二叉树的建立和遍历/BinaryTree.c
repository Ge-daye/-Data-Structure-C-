#include<stdio.h>
#include<stdlib.h>

typedef struct BinTree {
	int data;
	struct BinTree* left;
	struct BInTree* right;
}BinTree;
/*������������ڵ�->������->������==================*/
void PreOrder(BinTree* T)
{
	//�����T�ǿգ���������
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

/*���������������->���ڵ�->������===================*/
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
/*���������������->������->���ڵ�===================*/
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
//������㣬����-1ʱ��ʾ��ǰ���Ϊ�ղ�����
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
		tree = (BinTree*)malloc(sizeof(BinTree));//Ϊ��ǰ�������ռ�
		if (tree == NULL)
		{
			exit(0);
		}	
		tree->data = x;//Ϊ��ǰ��㸳ֵ
		tree->left = creataTree();
		tree->right = creataTree();

	}
	return tree;


}
int main()
{
	BinTree* tree=NULL;
	tree=creataTree();
	printf("ǰ�������\n");
	PreOrder(tree);
	printf("\n���������\n");
	InOrder(tree);

	return 0;
}