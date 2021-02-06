#include <stdio.h>
int fun(void);

int main(void){
	int a;
	a = 1+2+fun()*3;
	printf("%d\n",a);

	return 0;
}

int fun(void){
	return 5;
}


/*函数的返回值可以直接参与运算*/