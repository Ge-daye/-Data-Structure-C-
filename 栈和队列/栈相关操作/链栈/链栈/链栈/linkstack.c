#include "LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
//初始化链栈
LinkStack* init()
{
	LinkStack* stack = (LinkStack*)malloc(sizeof(LinkStack));
	stack->head.next = NULL;
	stack->size = 0;
	return stack;
}

//入栈
void push(LinkStack* s, LinkNode* node)
{
	if (s == NULL)
	{
		printf("栈未初始化！");
		return;
	}
	if (node == NULL)
	{
		printf("入栈的结点为空！");
		return;
	}
	node->next = s->head.next;
	s->head.next = node;
	s->size++;
}

//出栈
void pop(LinkStack* s)
{
	if (s == NULL)
	{
		printf("栈未初始化！");
		return;
	}
	if (s->head.next == NULL)
	{
		printf("栈为空！无法出栈操作！");
		return;
	}

	//第一个有效元素,也是要被弹出的元素
	LinkNode* pNext = s->head.next;
	s->head.next = pNext->next;//头结点后移一个
	//free(pNext);不能free
	s->size--;
}

//返回栈顶元素
LinkNode* gettop(LinkStack* s)
{
	if (s == NULL)
	{
		printf("栈未初始化！");
		return NULL;
	}
	return s->head.next;
}

//返回栈元素的个数
int size(LinkStack* s)
{
	if (s == NULL)
	{
		printf("栈未初始化！");
			return -1;
	}
	return s->size;
}

//清空栈
void clear(LinkStack* s)
{
	if (s->head.next == NULL)
	{
		printf("栈原本已空！");
		return;
	}
	s->head.next == NULL;
	s->size = 0;
}

//销毁栈
void freespace(LinkStack* s)
{
	free(s);
}