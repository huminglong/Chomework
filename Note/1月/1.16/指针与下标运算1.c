#include <stdio.h>

int main(void){
	int a[5] = {1,2,3,4,5};  //定义一个一维数组
	int *p = &a[0];          //定义一个指针变量p并将其指向数组a的首地址

	//指针的下标运算
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",p[3]);
	printf("%d\n",p[4]);

	printf("%d\n",*p);
	printf("%d\n",*(p+1));
	printf("%d\n",*(p+2));
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+4));
	return 0;
}