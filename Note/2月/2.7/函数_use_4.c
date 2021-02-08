/*通过参数修改指针的指向，错误演示！*/

#include <stdio.h>


int main(void){
	int a = 12;
	int *p = &a;
	printf("p = %p\n",p);
	fun(p);
	printf("p = %p\n",p);

}

void** fun(int* *p1){
	printf("p1 = %p\n",*p1)
	*p1 = NULL;
	printf("p1 = %p\n",*p1);
}