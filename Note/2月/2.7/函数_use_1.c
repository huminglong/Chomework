/*通过参数修改外部的值*/
/*得通过指针，只是在函数内修改值是没用的*/

#include <stdio.h>
void fun(int b);

int main(void){
	int a = 2;
	printf("a = %d\n",a);
	fun(a);
	printf("a = %d\n",a);

	return 0;
}

void fun(int b){
	printf("b = %d\n",b);
	b = 12;
	printf("b = %d\n",b);
}