#include<stdio.h>
#include<stdlib.h>

typedef struct LinkNode {
	double data;//结点的数据域
	struct LinkNode* next;//结点的指针域
}LinkNode;

typedef struct LinkQueue {
	LinkNode* frnot;//指向队头的指针
	LinkNode* rear;//指向队尾的指针
	int size;//链式队列的长度
}LinkQueue;
//================================初始化队列
LinkQueue* init_Linkqueue()
{
	LinkQueue* lq = (LinkQueue*)malloc(sizeof(LinkQueue));
	lq->frnot = NULL;
	lq->rear = NULL;

	lq->size = 0;
	return lq;
}

//====================================入队
void push_Linkqueue(LinkQueue* lq, LinkNode* newnode)
{
	if (lq == NULL)
	{
		printf("队列未初始化！");
		return;
	}
	//空队列和非空队列的操作不同
	if (lq->size == 0)
	{
		lq->frnot = lq->rear = newnode;
	}
	else
	{
		lq->rear->next = newnode;
		lq->rear = newnode;
	}
	lq->rear->next = NULL;//保证最后给一个结点指针指向空
	lq->size++;
}
//==================================出队
void pop_queue(LinkQueue* lq)
{
	if (lq->size == 0)
	{
		printf("队列为空！无法出队！");
		return;
	}
	LinkNode* temp = lq->frnot->next;
	free(lq->frnot);//释放掉头结点
	lq->frnot = temp;//更新头结点
	lq->size--;


}

//==================================返回队头元素
double getfront(LinkQueue* lq)
{
	if (lq->size == 0)
	{
		printf("队列为空！无法获取队头元素！");
		return -1;
	}
	return lq->frnot->data;
}
//==================================返回队尾元素
int getrear(LinkQueue* lq)
{
	if (lq->size == 0)
	{
		printf("队列为空！");
		return -1;
	}
	return lq->rear->data;
}
//==================================返回队列长度
int length_queue(LinkQueue* lq)
{
	return lq->size;
}
//==================================清空队列
//==================================销毁队列