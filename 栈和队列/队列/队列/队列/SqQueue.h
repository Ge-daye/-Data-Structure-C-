#pragma once
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

typedef struct SqQueue {
	double data[MAXSIZE];
	int size;
}SqQueue;

//��ʼ������
SqQueue* initQueue();
//���
void pushQueue(SqQueue* sq, double e);
//����
void popQueue(SqQueue* sq);
//���ض�ͷԪ��
double gettop(SqQueue* sq);
//���ض�βԪ��
double getend(SqQueue* sq);
//���ض��г���
int sizeQueue(SqQueue* sq);
//��ն���
void cleaQueue(SqQueue* sq);
//���ٶ�
void freespace(SqQueue* sq);