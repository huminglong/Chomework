#include <stdio.h>
#include <sys/malloc.h>
#include <stdlib.h>

struct stu{
	int *p;
};

int main(void){
	struct stu arr = {(int *)malloc(32)};
	arr.p[0] = 1;
	arr.p[1] = 2;
	arr.p[2] = 3;
	arr.p[3] = 4;
	arr.p[4] = 5;

	printf("%d\n",arr.p[0]);
	printf("%d\n",arr.p[1]);
	printf("%d\n",arr.p[2]);
	printf("%d\n",arr.p[3]);
	printf("%d\n",arr.p[4]);

	return 0;
}