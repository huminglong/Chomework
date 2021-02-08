/*变量数值交换函数*/
#include <stdio.h>
void temp(int *a,int *b);

int main(void){
	int p1 = 12;
	int p2 = 25;
	temp(&p1,&p2);
	printf("p1 = %d\n",p1);
	printf("p2 = %d\n",p2);

	return 0;
}

void temp(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

