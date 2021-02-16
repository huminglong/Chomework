#include <stdio.h>

int main(void){
	char num[] = "Hello";
	char *p = "world";
	int i=0;

	for( ;*p == '\n';p++){
		num[i] = *p;
		i++;
	}

	printf("%s\n",num);
	return 0;
}