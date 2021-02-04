#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){
	int *p = (int*)calloc(5,4);

	int i;
	for(i=1;i<5;i++){
		printf("%d  ,  %p\n",*(p+i),(p+i));
	}
}

