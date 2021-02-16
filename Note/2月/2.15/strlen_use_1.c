#include <stdio.h>
#include <string.h>

int main(void){
	char p = 'a';
	size_t num = strlen(&p);
	printf("%zu\n",num);
	return 0;
}