//���⣺(1) д���ó�������н����(2) �����static int c=3; ����д��int c=3; �������н����α仯��Ϊʲô��
#include <stdio.h>
int fun(int a)
{
	int b = 0;
	static int c = 3;
	b = b + 1;
	c = c + 1;
	return(a + b + c);
}
main()
{
	int a = 2, i;
	for (i = 0; i < 3; i++)
		printf("%d", fun(a));
}
