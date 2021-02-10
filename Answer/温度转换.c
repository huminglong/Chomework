#include <stdio.h>

int main(void){
	int fahr = 150;
	double celsius;
	celsius = 5*(fahr-32)/9;

	printf("fahr = 150,celsius = %f\n",celsius);

	return 0;

}