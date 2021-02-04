#include <stdio.h>

int main(void){
	int b[3]={1,2,3};
	int c[2]={4,5};
	int d[4]={6,7,8,9};
	int e[3]={12,34,56};

	int* a[4]={&b[0],&c[0],&d[0],&e[0]};

	printf("%d\n",a[0][0]);
	printf("%d\n",a[0][1]);
	printf("%d\n",a[0][2]);
	printf("%d\n",a[1][0]);
	printf("%d\n",a[1][1]);
	return 0;
}