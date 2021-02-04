/*memset的使用*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>
#include <memory.h>    //memory.h or string.h都可以

int main(void){
	int *p = (int *)malloc(40);
	memset(p,0,40);
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",p[i]);
	}
}