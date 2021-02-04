/*判断申请的字节数有没有溢出*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){

	int* p = (int*)malloc(2*1024*1024*1024);
	int* p1 = (int*)malloc(4);
	if(NULL == p){
		printf("p == NULL\n");
	}

	if(NULL != p1){
		printf("NULL != p1\n");
	}
}