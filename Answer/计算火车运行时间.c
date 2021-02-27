#include <stdio.h>

int main(void){
	int start,end;
	int a,b,c,d;
	int hour,min;
	printf("格式：1201 1530\n");
	printf("请按照格式输入出发时间和到达时间:");
	scanf("%d %d",&start,&end);
	a = start/100;
	b = end/100;
	c = start-a*100;
	d = end-b*100;

	if(d > 60 || d < 0){
		printf("请重新输入\n");
	}

	if(a > b){
		printf("请重新输入\n");
	}

	if(c > d){
		hour = b - a - 1;
		min = 60 - c + d;
		printf("%d:%d",hour,min);
	}

	if(c < d){
		hour = b - a;
		min = d - c;
		printf("%d:%d",hour,min);
	}

	return 0;
}