//问题：(1) 写出程序的运行结果；(2)如果将第七行中的b[j][i]=a[i][j];语句改写成b[i][j]=a[i][j];，则结果如何变化。
#include <stdio.h>
main()
{
	int a[2][3] = { 1,2,3,4,5,6 }, b[3][2], i, j;
	printf("array a : \n");
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf(" % 5d", a[i][j]);
			b[j][i] = a[i][j];
		}    /*第七行*/
		printf("\n");
	}
	printf("array b : \n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 1; j++)
			printf(" % 5d", b[i][j]);
		printf("\n");
	}
}
