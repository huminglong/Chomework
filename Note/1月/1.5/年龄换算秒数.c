#include <stdio.h>

int main(void){
	int year;
	float times;
	printf("请输入您的年龄:");
	scanf("%d",&year);
	times=year*3.156*10*10*10*10*10*10*10;
	printf("您年龄对应的秒数为:%f",times);
	return 0;
}