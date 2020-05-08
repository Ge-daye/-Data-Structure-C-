#include<stdio.h>
#include<stdlib.h>
#include"SqQueue.h"

int main()
{
	//������ʼ��
	SqQueue* queue = initQueue();
	//���
	pushQueue(queue, 1.0);
	pushQueue(queue, 3.0);
	pushQueue(queue, 5.0);
	//���ض�ͷԪ��
	printf("��ͷԪ��Ϊ��%.2f\n", gettop(queue));

	//���ض�βԪ��
	printf("��βԪ��Ϊ��%.2f\n", getend(queue));

	//����
	printf("��ջ˳��Ϊ��");
	while (sizeQueue(queue) > 0)
	{
		printf("%.2f\t", gettop(queue));//�Ӷ�ͷ��
		popQueue(queue);
	}
	//���ٶ���
	freespace(queue);

	return 0;
}