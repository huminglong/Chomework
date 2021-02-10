#include <stdio.h>

int main(void){
	int fahr;
	int celsius;
	scanf("%d\n",&fahr);
	celsius =5*(fahr-32)/9;
	printf("Celsius = %d\n",celsius);

	return 0;
}