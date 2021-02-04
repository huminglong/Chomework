#include <stdio.h>

int main(void){
	int a = 10;
	int b = 10;

	while(a++ < 15){
		printf("%d\n",a);
	}

	while(++b < 15){
		printf("%d\n",b);
	}
	return 0;
}