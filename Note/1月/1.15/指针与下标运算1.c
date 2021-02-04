#include <stdio.h>

int main(void){
	int a[5] = {1,2,3,4,5};
	int *p = &a[0];
	int i;

	*(p+1)= 11;
	*(p+2)= 34;
	*(p+3)= 432;
	*(p+4)= 341;
	for(i=0;i<5;i++){
		printf("%d %d %d\n",a[i],p[i],*(p+i));  //从运算结果可以看出下标运算不是指针专属的
	}
	return 0;
}