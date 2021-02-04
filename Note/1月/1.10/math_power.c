/*
	此处使用了定义了一个power函数来求指数幂，调用的数据类型尽量和函数定义里面的一样
*/
#include <stdio.h>
double power(double x , int exp);   /*声明power函数*/

int main(void){
	double a;
	int b; 
	double sum;

	printf("请输入您的底数:\n");
	scanf("%lf",&a);

	printf("请输入您的指数:\n");
	scanf("%d",&b); 

	sum = power(a,b);    /*调用power函数*/
	printf("您求指数后的结果是:%lf",sum);
	return 0;
}


/*定义power函数*/
double power(double x , int exp){
	double pow = 1;
	int i;

	for(i=1;i<exp;i++){
		pow *= x;
	}
	return pow;
}