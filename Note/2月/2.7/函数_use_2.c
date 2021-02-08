/*通过参数修改外部的值*/
/*得是地址*/
#include <stdio.h>
void fun(int *p);

int main(void){
	int a = 2;  //int *p = &a;
	printf("a = %d\n",a);
	fun(&a);
	printf("a = %d\n",a);

	return 0;
}

void fun(int *p){
	printf("b = %d\n",*p);
	*p = 12;
	printf("b = %d\n",*p);
}