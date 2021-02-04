#include <stdio.h>

void test(void);

int main(void){
	test();
	test();
	test();
	printf("\n");
	test();
	test();
	printf("\n");
	test();
	printf("\n");
	return 0;
}

void test(void){
	printf("Smile!");
}