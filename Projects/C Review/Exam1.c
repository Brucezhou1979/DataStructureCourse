//���⣺��1��д����������н������2���ֱ��г��βκ�ʵ�Σ���3������#include <stdio.h>��
#include <stdio.h>
int fun1(int x, int y)
{
	if (x > y)
		printf("a>b\n");
	else if (x < y) printf("a<b\n");
	else printf("a==b\n");
}

void main()
{
	int a = 10, b = 18;
	fun1(a, b);
}
