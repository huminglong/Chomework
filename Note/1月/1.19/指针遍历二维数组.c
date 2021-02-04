#include <stdio.h>

int main(void){
	int a[2][3] = {{1,2,3},{4,5,6}};

	int *p = &a[0][0];
	printf("%d %d %d %d",*p,*(p+1),*(p+2),*(p+3));
}