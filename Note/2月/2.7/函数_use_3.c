/*通过参数修改外部的值*/
/*需要修改谁就传谁的地址！这里没有所以没啥用*/

#include <stdio.h>
void fun(int *p);

int main(void){
	int a = 12;
	int *p1 = &a;
	printf("%p\n",p1);
	fun(p1);
	printf("%p\n",p1);
	printf("%p\n",&a);


	return 0;
}

void fun(int *p){
	printf("%p\n",p);
	p = NULL;
	printf("%p\n",p);
}