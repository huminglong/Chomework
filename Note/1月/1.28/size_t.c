/*32位编译器环境下 ，size_t = unsigned int */

#include <stdio.h>

int main(void){
	int a = sizeof(size_t);
	printf("%d\n",a);
}