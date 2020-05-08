#include<stdio.h>
#include<stdlib.h>
#include"SqQueue.h"

int main()
{
	//创建初始化
	SqQueue* queue = initQueue();
	//入队
	pushQueue(queue, 1.0);
	pushQueue(queue, 3.0);
	pushQueue(queue, 5.0);
	//返回队头元素
	printf("队头元素为：%.2f\n", gettop(queue));

	//返回队尾元素
	printf("队尾元素为：%.2f\n", getend(queue));

	//出队
	printf("出栈顺序为：");
	while (sizeQueue(queue) > 0)
	{
		printf("%.2f\t", gettop(queue));//从队头出
		popQueue(queue);
	}
	//销毁队列
	freespace(queue);

	return 0;
}