#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>


int main(void){
	int (*p)[5] = (int(*)[5])malloc(sizeof(int)*5);
	*(*p+1) = 1;
	printf("%d\n",*(*p+1));    //这里的两个*的来源看指针的三原则
	printf("%d\n",(*p)[1];
	return 0;
}