//���⣺(1) �ó���Ĺ�����ʲô��(2) �����е� * �� & �ֱ����ʲô���������3�������� 5   3 �������н����Σ�
#include<stdio.h>
void fun(int *p1, int *p2)
{
	int t;
	t = *p1;	*p1 = *p2;	*p2 = t;
}
void main()
{
	int x, y;
	int *p1, *p2;
	scanf_s("%d  %d", &x, &y);
	p1 = &x; 	p2 = &y;
	if (x > y) fun(p1, p2);
	printf("x=%d,y=%d", x, y);
}
