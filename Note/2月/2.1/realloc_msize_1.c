#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>


int main(void){
	int *p = (int*)malloc(20);
	unsigned int a = _msize(p);
	printf("%d\n",a);

	int *p1 =realloc(p,12);
	unsigned int b = _msize(p1);
	printf("%d\n",b);

	return 0;
}