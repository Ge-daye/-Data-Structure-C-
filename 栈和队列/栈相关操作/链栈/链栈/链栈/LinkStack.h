#pragma once
#include<stdio.h>
#include<stdlib.h>

/*======================��ջ���*/
typedef struct LinkNode {
	double e;//�ڵ��е�������
	struct LinkNode* next;//ָ����
}LinkNode;

//=======================����ջ
typedef struct LinkStack {
	LinkNode head;//��ջ��ͷ���
	int size;
}LinkStack;

//=======================��ʼ����ջ
LinkStack* init();
//=======================��ջ
void push(LinkStack* s, LinkNode* node);
//=======================��ջ
void pop(LinkStack* s);
//=======================����ջ��Ԫ��
LinkNode* gettop(LinkStack* s);
//=======================����ջԪ�صĸ���
int size(LinkStack* s);
//=======================���ջ
void clear(LinkStack* s);
//=======================����ջ
void freespace(LinkStack* s);
