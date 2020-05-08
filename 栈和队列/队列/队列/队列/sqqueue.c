#include<stdio.h>
#include<stdlib.h>
#include"SqQueue.h"

//========================初始化队列
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
//========================入队
void pushQueue(SqQueue* sq,double e)
{
	//数组左边当作队头
	if (sq == NULL)
	{
		printf("队列未初始化！");
		return;
	}
	if (sq->size >= MAXSIZE)
	{
		printf("队列已满！无法入队");
		return;
	}
	sq->data[sq->size] = e;
	sq->size++;

}
//========================出队
void popQueue(SqQueue* sq)
{
	if (sq->size == 0)
	{
		printf("队列为空！");
		return;
	}
	//从后往前覆盖
	for (int i = 0; i < sq->size; i++)
	{
		sq->data[i] = sq->data[i + 1];
	}
	sq->size--;
}
//========================返回队头元素
double gettop(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("队列未初始化！");
		return;
	}
	if (sq->size == 0)
	{
		printf("队列为空！");
		return;
	}
	return sq->data[0];
}
//========================返回队尾元素
double getend(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("队列未初始化！");
		return;
	}
	if (sq->size ==0)
	{
		printf("队列为空！");
		return;
	}
	return sq->data[sq->size - 1];//下标为size-1的就是队尾元素
}
//========================返回队列长度
int sizeQueue(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("队列未初始化！");
		return -1;
	}
	return sq->size;
}
//========================清空队列
void cleaQueue(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("队列未初始化！");
		return -1;
	}
	sq->size = 0;
}
//========================销毁队
void freespace(SqQueue* sq)
{
	if (sq == NULL)
	{
		printf("队列未初始化！");
		return -1;
	}
	free(sq);
}