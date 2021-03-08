#include <stdio.h>

int main(void){
	int a[4];
	float Sum;
	float Average;
	printf("格式:四个整数间用空格隔开\n");
	printf("请输入4个整数:");

	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
	Sum = a[0] + a[1] + a[2] + a[3];
	Average = Sum / 4;

	printf("Sum = %.0f ; Average = %f\n",Sum,Average);

	return 0;
}