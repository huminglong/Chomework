#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){
	int *p =(int*)malloc(4);
	*p = 12;

	printf("%d  ,  %p\n",*p,p);

	free(*p);
	printf("%d  ,  %p\n",*p,p);

	return 0;
}