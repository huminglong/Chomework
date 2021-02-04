#include <stdio.h>

int main(void){
	int a[5] = {1,2,3,4,5};   //定义一个一维数组
	int *p = &a[0];

	printf("%d\n",*p);
	printf("%p\n",p);     //指针变量p指向数组a的第一个元素的空间
	printf("%d\n",++*p); 
	printf("%p\n",++p);   //++p即下一块空间
	printf("%d\n",++*p);
	printf("%p\n",++p);
	printf("%d\n",++*p);
	printf("%p\n",++p);
	printf("%d\n",++*p);
	printf("%p\n",++p);
	return 0;
}

//注意++p是自加，他会修改指针变量p本身的指向