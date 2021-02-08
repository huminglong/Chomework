 #include <stdio.h>
void fun(int *p,int nLength);


int main(void){
	int a[5] = {1,2,3,4,5};
	fun(a,5);
	return 0;
}

void fun(int *p,int nLength){
	int i;
	for(i=0;i<nLength;i++){
		printf("%d\n",p[i]);
	}
}