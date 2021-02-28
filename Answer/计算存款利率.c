#include <stdio.h>
#include <math.h>

int main(void){
	int year;
	double money,interst,rate;

	printf("请按格式输入:本金，存款年限，年利率\n");
	//printf("\n");
	scanf("%lf %d %lf",&money,&year,&rate);

	interst = money*pow(1+rate,year)-money;

	printf("interst = %.2lf\n",interst);

	return 0;
}