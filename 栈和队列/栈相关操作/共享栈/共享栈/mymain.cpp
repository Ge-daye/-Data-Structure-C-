#include<stdio.h>
#include<stdlib.h>
#define  MAXSIZE 10

typedef  struct  SqStack {

	double data[MAXSIZE];
	//����ջ������ָ��
	int top1;
	int top2;

}SqDoubleStack;

//��ջ����
void Push(SqDoubleStack* s, double e, int flag)
{
	if (s->top1 + 1 == s->top2)
	{
		printf("����ջ������");
		return;
	}
	if (flag == 1)
	{
		s->top1++;
		s->data[s->top1] = e;
	}
	else if (flag == 2)
	{
		s->top2--;
		s->data[s->top2] = e;

	}
}

//��ջ����
double pop(SqDoubleStack* s, int flag)
{
	double e=0;
	if (flag == 1)
	{
		if (s->top1 = -1)
		{
			printf("1��ջΪ�գ��޷�����Ԫ�أ�");
			return;
		}
		e = s->data[s->top1];
		s->top1--;
	}
	else if (flag == 2)
	{
		if (s->top2 == MAXSIZE )
		{
			printf("2��ջΪ�գ��޷�����Ԫ�أ�");
			return;
		}
		e = s->data[s->top2];
		s->top2++;
	}
}

int main()
{
	SqDoubleStack* sq = (SqDoubleStack*)malloc(sizeof(SqDoubleStack));
	sq->top1 = -1;
	sq->top2 = MAXSIZE - 1;
	Push(sq, 3.56, 1);
	Push(sq, 5.23, 2);
	return 0;
}