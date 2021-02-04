/*指针取地址*/

#include <stdio.h>

int main(void){
	int a = 12;
	int *p = &a;
	printf("%d\n",*p);
	printf("%d\n",a);
	printf("%p\n",&*p);
	printf("%p\n",&a);
	printf("%p\n",p);
	return 0;
}