#pragma once
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

typedef struct SqQueue {
	double data[MAXSIZE];
	int size;
}SqQueue;

//初始化队列
SqQueue* initQueue();
//入队
void pushQueue(SqQueue* sq, double e);
//出队
void popQueue(SqQueue* sq);
//返回队头元素
double gettop(SqQueue* sq);
//返回队尾元素
double getend(SqQueue* sq);
//返回队列长度
int sizeQueue(SqQueue* sq);
//清空队列
void cleaQueue(SqQueue* sq);
//销毁队
void freespace(SqQueue* sq);