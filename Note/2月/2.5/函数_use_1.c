#include <stdio.h>
void fun1(void);
void fun2(void);


int main(void){
	fun2();
	return 0;
}

void fun1(void){
	printf("我是fun1函数\n");
}

void fun2(void){
	fun1();
	printf("我是fun2函数\n");
}