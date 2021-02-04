/*指针的读*/ 
//指针

#include <stdio.h>

int main(void){
	int a = 12; 
	int *p = &a;

	
	printf("%d\n",*p);     //*p=a
	printf("%d\n",a);      //*p=a
	printf("%p\n",p);     //p=&a
	return 0;
}