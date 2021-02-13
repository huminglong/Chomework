#include <stdio.h>

int main(void){
	int i;
	char arr[5] = {'A','B','C','D'};

	for(i=0;i<5;i++){
		printf("%c ",arr[i]);
	}
	
	printf("\n");

	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}