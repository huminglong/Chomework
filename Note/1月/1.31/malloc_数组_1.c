#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>
#include <string.h>

int main(void){
	int *p = (int*)malloc(sizeof(int)*5);
	int *p1 = (int*)malloc(sizeof(int)*5);
	int i;

	
	memset(p,0,20);              /*使用memset进行初始化*/

	
	for(i=0;i<5;i++){
		printf("%d\n",p[i]);     /*数组指针的输出_1*/
	}

	printf("\n");

	for(i=0;i<5;i++){
		printf("%d\n",*(p+i));  /*数组指针的输出_2*/
	}

	printf("\n");


	for(i=0;i<5;i++){
		*(p+i) = 0;     /*使用for循环对其赋值*/
	}

	for(i=0;i<5;i++){
		printf("%d\n",p1[i]);
	}

	free(p)
	*p = NULL;
	free(p1);
	*p1 = NULL;

	return 0;

}