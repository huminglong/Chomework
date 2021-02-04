#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){
	int (*p)[5] =(int(*)[5])malloc(sizeof(int)* 5);
	*(*p+1) = 1;
	(*p)[2] = 2;

	printf("%d  ,  %p\n",*(*p+1),(*p+1));
	printf("%d  ,  %p\n",(*p)[2],p[2]);


	
	return 0;

}