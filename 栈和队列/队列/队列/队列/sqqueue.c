#include<stdio.h>
#include<stdlib.h>
#include"SqQueue.h"

//========================��ʼ������
SqQueue* initQueue()
{
	SqQueue* sq = (SqQueue*)malloc(sizeof(SqQueue));
	for (int i = 0; i < MAXSIZE; i++)
	{
		sq->data[i] = 0;
	}
	sq->size = 0;
	return sq;
}
//========================���
void pushQueue(SqQueue* sq,double e)
{
	//������ߵ�����ͷ
	if (sq == NULL)
	{
		printf("����δ��ʼ����");
		return;
	}
	if (sq->size >= MAXSIZE)
	{
		printf("�����������޷����");
		return;
	}
	sq->data[sq->size] = e;
	sq->size++;

}
//========================����
void popQueue(SqQueue* sq)
{
	if (sq->size == 0)
	{
		printf("����Ϊ�գ�");
		return;
	}
	//�Ӻ���ǰ����
	for (int i = 0; i < sq->size; i++)
	{
		sq->data[i] = sq->data[i + 1];
	}
	sq->size--;
}
//========================���ض�ͷԪ��
double gettop(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("����δ��ʼ����");
		return;
	}
	if (sq->size == 0)
	{
		printf("����Ϊ�գ�");
		return;
	}
	return sq->data[0];
}
//========================���ض�βԪ��
double getend(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("����δ��ʼ����");
		return;
	}
	if (sq->size ==0)
	{
		printf("����Ϊ�գ�");
		return;
	}
	return sq->data[sq->size - 1];//�±�Ϊsize-1�ľ��Ƕ�βԪ��
}
//========================���ض��г���
int sizeQueue(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}
	return sq->size;
}
//========================��ն���
void cleaQueue(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}
	sq->size = 0;
}
//========================���ٶ�
void freespace(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("����δ��ʼ����");
		return -1;
	}
	free(sq);
}