#include "LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
//��ʼ����ջ
LinkStack* init()
{
	LinkStack* stack = (LinkStack*)malloc(sizeof(LinkStack));
	stack->head.next = NULL;
	stack->size = 0;
	return stack;
}

//��ջ
void push(LinkStack* s, LinkNode* node)
{
	if (s == NULL)
	{
		printf("ջδ��ʼ����");
		return;
	}
	if (node == NULL)
	{
		printf("��ջ�Ľ��Ϊ�գ�");
		return;
	}
	node->next = s->head.next;
	s->head.next = node;
	s->size++;
}

//��ջ
void pop(LinkStack* s)
{
	if (s == NULL)
	{
		printf("ջδ��ʼ����");
		return;
	}
	if (s->head.next == NULL)
	{
		printf("ջΪ�գ��޷���ջ������");
		return;
	}

	//��һ����ЧԪ��,Ҳ��Ҫ��������Ԫ��
	LinkNode* pNext = s->head.next;
	s->head.next = pNext->next;//ͷ������һ��
	//free(pNext);����free
	s->size--;
}

//����ջ��Ԫ��
LinkNode* gettop(LinkStack* s)
{
	if (s == NULL)
	{
		printf("ջδ��ʼ����");
		return NULL;
	}
	return s->head.next;
}

//����ջԪ�صĸ���
int size(LinkStack* s)
{
	if (s == NULL)
	{
		printf("ջδ��ʼ����");
			return -1;
	}
	return s->size;
}

//���ջ
void clear(LinkStack* s)
{
	if (s->head.next == NULL)
	{
		printf("ջԭ���ѿգ�");
		return;
	}
	s->head.next == NULL;
	s->size = 0;
}

//����ջ
void freespace(LinkStack* s)
{
	free(s);
}