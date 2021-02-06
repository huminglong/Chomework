#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum[100] = {0};
	int *p = &sum[0];
	int i = 0 , j =  0 ;
	for (i = 0;i<=99;i++,j++)
	{
		scanf("%d", p[i]);
		printf("这是第%d次录入", j);

	}

	system ("pause");
	return 0;
}