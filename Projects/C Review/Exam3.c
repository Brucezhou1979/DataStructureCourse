//���⣺(1) д����������н����(2)������������е�b[j][i]=a[i][j];����д��b[i][j]=a[i][j];��������α仯��
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
		}    /*������*/
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
