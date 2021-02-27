#include <stdio.h>

int main(void){
	int a[3],temp,i,j;
	printf("此程序是一个三个整数的大小比较\n");
	printf("请按格式输入");
	printf("格式：1 2 3\n");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);

	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("%d->%d->%d\n",a[0],a[1],a[2]);
	return 0;
	
}