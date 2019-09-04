//问题：(1) 该程序的功能是什么；(2) 程序中的 * 和 & 分别代表什么运算符？（3）若输入 5   3 ，则运行结果如何？
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
