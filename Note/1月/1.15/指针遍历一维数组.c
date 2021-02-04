#include <stdio.h>

int main(void){
	int a[5] = {1,2,3,4,5};    //定义一个一维数组

	int *p0 = &a[0];    //指向数组a的第一个元素
	int *p1 = &a[1];    //指向数组a的第二个元素
	int *p2 = &a[2];    //指向数组a的第三个元素
	int *p3 = &a[3];    //指向数组a的第四个元素
	int *p4 = &a[4];    //指向数组a的第五个元素

	printf("%p\n",p0);
	printf("%p\n",p1);
	printf("%p\n",p2);
	printf("%p\n",p3);
	printf("%p\n",p4);
}