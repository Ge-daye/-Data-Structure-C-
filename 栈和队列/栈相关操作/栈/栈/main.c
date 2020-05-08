#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5//ջ���ĳ��ȶ�Ϊ10

//ջ���ݵĽṹ
typedef  struct  SqStack {
	double  data[MAXSIZE];//������double����ջ���Ԫ������
	int top;//ָ��ջ��ָ��(��ʵ��ջ��Ԫ�ص��±�)
}SqStack;

//�ж�ջ��
int stackEmpty(SqStack* s)
{
	if (s->top == -1)
	{
		return 1;
	}
	return 0;
}

//��ջ(��e��ӵ�ջ����
void push(SqStack *s,double e)
{
	if (s->top == MAXSIZE - 1)
	{
		printf("ջ�������޷����Ԫ��\n");
		return;
	}
	s->top++;//ջ��ָ���һ
	s->data[s->top] = e;//����ջ��Ԫ��

}
//��ջ(��ջ��Ԫ���Ƴ���,�������ر�������Ԫ��
double pop(SqStack* s)
{
	double x;
	if (s->top == -1)
	{
		printf("ջ��Ϊ�գ�\n");
		return -1;
	}
	x = s->data[s->top];
	s->top--;
	return x;
}

//��ѯջ��Ԫ��
double getTop(SqStack *s)
{
	double x = 0;
	if (s->top >= MAXSIZE )
	{
		printf("ջ��ָ�����");
		return -1;
	}
	if (s->top == -1)
	{
		printf("ջΪ�գ�\n");
		return -1;
	}
	x = s->data[s->top];
	return x;
}
//����ջ
void display(SqStack* s)
{
	if (s->top == -1)
	{
		printf("ջ�ǿյģ�\n");
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
	SQ->top=-1;//��ʼջ��ָ����-1
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