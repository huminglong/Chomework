#include <stdio.h>
int fun(int a);

int main(void){
	int b;
	int (*p)(int) = fun;
	p(b);

	return 0;
}

int fun(int a){
	a = 12;
	printf("%d\n",a);

	return a;
}