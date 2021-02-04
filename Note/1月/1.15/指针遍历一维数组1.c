#include <stdio.h>

int main(void){
	int a[5]=  {1,2,3,4,5};   //定义一个一维数组
	int *p = &a[0];

	printf("%d\n",*p);      //指针变量p指向数组a的第一个元素
	printf("%p\n",p);
	printf("%d\n",*(p+1));    //p+1指向数组a的第二个元素
	printf("%p\n",(p+1));
	return 0;
}