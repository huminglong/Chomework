#include <stdio.h>

int main(void){
	int a[10] = {1,23,45,3,443,4432,34,232,4444,432};
	int i,j,temp;

	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("排序结果：");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}