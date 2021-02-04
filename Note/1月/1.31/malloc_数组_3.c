#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){
	int a;
	printf("请输入一个数：");
	scanf("%d\n",&a);
	int *p = (int*)malloc(a);

	printf("%lu\n",sizeof(*p));

	return 0;
}