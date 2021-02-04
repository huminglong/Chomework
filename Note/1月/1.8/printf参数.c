/*
	%nd (n为参数，123都行)，表示输出的宽度，以下面这个为例子，d前面加的数字小于
	这个数值的长度就按照本来的输出，如果大于就在前面补空格，加负号同理，不过是在后
	面补空格
*/
#include <stdio.h>
#define PI 53
int main(void){
	printf("*%d*\n",PI);
	printf("*%1d*\n",PI);
	printf("*%2d*\n",PI);
	printf("*%3d*\n",PI);
	printf("*%4d*\n",PI);
	printf("*%-2d*\n",PI);
	printf("*%-5d*\n",PI);
	return 0;
}