#include <stdio.h>
#include <string.h>

int main(void){
	char num[6] = "hello";
	char str[6] = "world";

	strncpy(num,str,3);
	puts(num);

	return 0;
}