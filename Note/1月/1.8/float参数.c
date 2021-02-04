/*
	%x.yf(xy为参数值)，x为总的位数，如果小于这个浮点数包括小数点就照常输出
	如果大于这个数值，就在小数点的前面补空格，假如y前面放一个数值，
	就会在输出的时候将空格换成数值，y的话代表输出几位小数，实际输出
	的时候会四舍五入
*/

#include <stdio.h>
#define PI 3.14

int main(void){
	printf("*%f*\n",PI);
	printf("*%e*\n",PI);
	printf("*%3.1f*\n",PI);
	printf("*%2.1f*\n",PI);
	printf("*%2.2f*\n",PI);
	printf("*%4.5f*\n",PI);
	printf("*%5.5f*\n",PI);
	printf("*%15.5f*\n",PI);
	printf("*%010.5f*\n",PI);
	printf("*%010.6f*\n",PI);
	printf("*%5.7f*\n",PI);
	printf("*%+4.5f*\n",PI);
	return 0;
}