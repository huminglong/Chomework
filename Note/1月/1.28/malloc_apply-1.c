/*malloc函数参数为0*/
/*在堆区申请的是0字节，但任会分配一个地址*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>

int main(void){
	int* p =(int*)malloc(0);
	*p = 1;
	printf("%d\n",*p);
	printf("%p\n",p);
}