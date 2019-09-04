//问题：（1）写出程序的运行结果；（2）分别列出形参和实参；（3）解释#include <stdio.h>。
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
