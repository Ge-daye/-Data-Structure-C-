#include<stdio.h>
#include<stdlib.h>
#include "LinkStack.h"

int main()
{

	//创建栈
	LinkStack* stack = init();
	//创建几个链栈结点
	LinkNode node1, node2, node3;
	node1.e = 1;
	node2.e = 3;
	node3.e = 4;

	//入栈
	push(stack,(LinkNode*) &node1);
	push(stack, (LinkNode*)&node2);
	push(stack, (LinkNode*)&node3);
	
	//遍历输出
	while (size(stack) > 0)
	{
		//获取栈顶元素地址并打印
		LinkNode* temp = gettop(stack);
		printf("%.2f\t", temp->e);

		//弹出
		pop(stack);
	}

	//销毁栈
	freespace(stack);

	return 0;
}