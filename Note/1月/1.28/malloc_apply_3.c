/*malloc函数参数为极限*/
/*会有警告*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){
	int* p =(int*)malloc(2*1024*1024*1024);
	printf("%p\n",p);
	printf("%d\n",*p);
}