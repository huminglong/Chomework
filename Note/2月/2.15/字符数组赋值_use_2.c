#include <stdio.h>
#include <string.h>

int main(void){
	char num[20] = "hello";
	char str[15] = "hello world";

	strcpy(num,str);
	printf("%s\n",num);

	return 0;
}