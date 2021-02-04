#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>>

int main(void){
	int* p = (int*)malloc(4);
	*p = 16;
	printf("%d\n",*p);
	printf("%d\n",sizeof(*p));


	/*或者下面的写法*/
	int *t;
	t = (int*)malloc(16);  //这里不是定义指针，是使用指针
	*t = 19;
	printf("%d\n",*t);
	printf("%d\n",sizeof(*t));
}