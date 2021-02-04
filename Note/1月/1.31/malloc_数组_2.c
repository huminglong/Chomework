/*数组指针复习*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>
#include <string.h>

int main(void){
	int *p = (int*)malloc(sizeof(int)*5);
	int i;
	memset(p,0,20);

	for(i=0;i<5;i++){
		printf("%d  %p\n",p[i],(p+i));
	}

	free(p);
	*p = NULL;
}