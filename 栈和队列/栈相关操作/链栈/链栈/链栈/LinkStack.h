#pragma once
#include<stdio.h>
#include<stdlib.h>

/*======================链栈结点*/
typedef struct LinkNode {
	double e;//节点中的数据域
	struct LinkNode* next;//指针域
}LinkNode;

//=======================链表栈
typedef struct LinkStack {
	LinkNode head;//链栈的头结点
	int size;
}LinkStack;

//=======================初始化链栈
LinkStack* init();
//=======================入栈
void push(LinkStack* s, LinkNode* node);
//=======================出栈
void pop(LinkStack* s);
//=======================返回栈顶元素
LinkNode* gettop(LinkStack* s);
//=======================返回栈元素的个数
int size(LinkStack* s);
//=======================清空栈
void clear(LinkStack* s);
//=======================销毁栈
void freespace(LinkStack* s);
