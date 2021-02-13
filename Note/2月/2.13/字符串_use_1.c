#include <stdio.h>

int main(void){
	char arr[5] = {'A','b','X','S','\0'};
	char ayy[5] = {'A','b','\0','S','\0'};
	printf("%s\n",arr);
	printf("%s\n",&arr[1]);
	printf("%s\n",ayy);

	return 0;
}