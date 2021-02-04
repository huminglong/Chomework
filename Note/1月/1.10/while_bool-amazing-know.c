/*
	这个程序的作用是while和bool的关系
	真1假0，非0即为真
	假如while中的语句为非0的数则一直循环，若为0
	则一次都不循环
*/
#include <stdio.h>

int main(void){
	int a;
	scanf("%d",&a);

	while(0){
		printf("%d\n",a++);
	}
	return 0;
}