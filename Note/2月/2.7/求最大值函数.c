#include <stdio.h>
int FindMaxNum(int *p,int nLength);

int main(void){
	int a[8] = {12,345,654,6676,44,35,3,45};
	printf("%d\n",FindMaxNum(a,8));

	return 0;
}


int FindMaxNum(int *p,int nLength){
	int i,max;
	for(i=0;i<nLength;i++){
		if(max<p[i]){
			max = p[i];
		}
	}

	return max;
}