#include<stdio.h>
#include<stdlib.h>
#include "LinkStack.h"

int main()
{

	//����ջ
	LinkStack* stack = init();
	//����������ջ���
	LinkNode node1, node2, node3;
	node1.e = 1;
	node2.e = 3;
	node3.e = 4;

	//��ջ
	push(stack,(LinkNode*) &node1);
	push(stack, (LinkNode*)&node2);
	push(stack, (LinkNode*)&node3);
	
	//�������
	while (size(stack) > 0)
	{
		//��ȡջ��Ԫ�ص�ַ����ӡ
		LinkNode* temp = gettop(stack);
		printf("%.2f\t", temp->e);

		//����
		pop(stack);
	}

	//����ջ
	freespace(stack);

	return 0;
}