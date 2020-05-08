#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5//栈最大的长度定为10

//栈数据的结构
typedef  struct  SqStack {
	double  data[MAXSIZE];//这里用double代表栈里的元素类型
	int top;//指向栈顶指针(其实是栈顶元素的下标)
}SqStack;

//判断栈空
int stackEmpty(SqStack* s)
{
	if (s->top == -1)
	{
		return 1;
	}
	return 0;
}

//入栈(将e添加到栈顶）
void push(SqStack *s,double e)
{
	if (s->top == MAXSIZE - 1)
	{
		printf("栈已满，无法添加元素\n");
		return;
	}
	s->top++;//栈顶指针加一
	s->data[s->top] = e;//更新栈顶元素

}
//出栈(将栈顶元素移除）,函数返回被弹出的元素
double pop(SqStack* s)
{
	double x;
	if (s->top == -1)
	{
		printf("栈已为空！\n");
		return -1;
	}
	x = s->data[s->top];
	s->top--;
	return x;
}

//查询栈顶元素
double getTop(SqStack *s)
{
	double x = 0;
	if (s->top >= MAXSIZE )
	{
		printf("栈顶指针出错");
		return -1;
	}
	if (s->top == -1)
	{
		printf("栈为空！\n");
		return -1;
	}
	x = s->data[s->top];
	return x;
}
//遍历栈
void display(SqStack* s)
{
	if (s->top == -1)
	{
		printf("栈是空的！\n");
		return;
	}
	for (int  i = 0; i <=s->top; i++)
	{
		printf("%.2f \t", s->data[i]);
	}
	printf("\n");
}

int main()
{
	SqStack* SQ= (SqStack*)malloc(sizeof(SqStack));
	SQ->top=-1;//初始栈顶指针是-1
	push(SQ, 1.25);
	push(SQ, 2.323);
	push(SQ, 4.33);
	//printf("%d\n", SQ->top);
    push(SQ, 5.33);
	push(SQ, 6.666);
	//printf("%d\n", SQ->top);
	printf("%.2f\n", getTop(SQ));
	pop(SQ);
	printf("%.2f", getTop(SQ));
	//display(SQ);

	return 0;
}