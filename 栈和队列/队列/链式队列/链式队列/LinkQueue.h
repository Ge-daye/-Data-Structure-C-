#include<stdio.h>
#include<stdlib.h>

typedef struct LinkNode {
	double data;//����������
	struct LinkNode* next;//����ָ����
}LinkNode;

typedef struct LinkQueue {
	LinkNode* frnot;//ָ���ͷ��ָ��
	LinkNode* rear;//ָ���β��ָ��
	int size;//��ʽ���еĳ���
}LinkQueue;
//================================��ʼ������
LinkQueue* init_Linkqueue()
{
	LinkQueue* lq = (LinkQueue*)malloc(sizeof(LinkQueue));
	lq->frnot = NULL;
	lq->rear = NULL;

	lq->size = 0;
	return lq;
}

//====================================���
void push_Linkqueue(LinkQueue* lq, LinkNode* newnode)
{
	if (lq == NULL)
	{
		printf("����δ��ʼ����");
		return;
	}
	//�ն��кͷǿն��еĲ�����ͬ
	if (lq->size == 0)
	{
		lq->frnot = lq->rear = newnode;
	}
	else
	{
		lq->rear->next = newnode;
		lq->rear = newnode;
	}
	lq->rear->next = NULL;//��֤����һ�����ָ��ָ���
	lq->size++;
}
//==================================����
void pop_queue(LinkQueue* lq)
{
	if (lq->size == 0)
	{
		printf("����Ϊ�գ��޷����ӣ�");
		return;
	}
	LinkNode* temp = lq->frnot->next;
	free(lq->frnot);//�ͷŵ�ͷ���
	lq->frnot = temp;//����ͷ���
	lq->size--;


}

//==================================���ض�ͷԪ��
double getfront(LinkQueue* lq)
{
	if (lq->size == 0)
	{
		printf("����Ϊ�գ��޷���ȡ��ͷԪ�أ�");
		return -1;
	}
	return lq->frnot->data;
}
//==================================���ض�βԪ��
int getrear(LinkQueue* lq)
{
	if (lq->size == 0)
	{
		printf("����Ϊ�գ�");
		return -1;
	}
	return lq->rear->data;
}
//==================================���ض��г���
int length_queue(LinkQueue* lq)
{
	return lq->size;
}
//==================================��ն���
//==================================���ٶ���