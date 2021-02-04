/*
	while判断为真则进行循环，判断为假则跳出循环
	bool值是非0即真，比如下面的a，假如输入非0的
	数就会进入循环，输入0就会跳出去。
	Tip：此程序输入负数会慢慢的自增跳出循环，输入正数会
	一直循环下去
*/
#include <stdio.h>

int main(void){
	int a;
	printf("请输入a的值:\n");
	scanf("%d",&a);

	while(a){
		printf("True\n");
		a++;
	}

	return 0;
}