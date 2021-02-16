#include <stdio.h>

struct stu{
	int *p;
};

int main(void){
	int a[5] = {1,2,3,4,5};
	struct stu arr = {a};
	printf("%d\n",arr.p[0]);
	printf("%d\n",arr.p[1]);
	printf("%d\n",arr.p[2]);
	printf("%d\n",arr.p[3]);
	printf("%d\n",arr.p[4]);

	return 0;
}