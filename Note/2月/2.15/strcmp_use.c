#include <stdio.h>
#include <string.h>

int main(void){
	char *p1 = "abcdf";
	char *p2 = "abcee";
	int a = strcmp(p1,p2);

	printf("%d\n",a);

	return 0;
}