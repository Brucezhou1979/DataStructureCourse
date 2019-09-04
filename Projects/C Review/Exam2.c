//问题：(1) 写出该程序的运行结果；(2) 如果将static int c=3; 语句改写成int c=3; ，则运行结果如何变化？为什么？
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
