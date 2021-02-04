/*
	第8行的语句不是单纯的赋值语句，首先
	scanf获取用户输入的内容，然后赋值给a
	的是输入数据的个数，假如我在这里输入的是
	5个数据，则a打印出来的值为5
*/
#include <stdio.h>

int main(void){
	int a;
	a = scanf("%d",&a);
	printf("%d\n",a);
	return 0;
}