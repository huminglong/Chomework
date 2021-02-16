#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char num[20] = {0};
	itoa(12345,num,10);

	printf("%s\n",num);

	return 0;
}