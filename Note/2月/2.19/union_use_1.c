#include <stdio.h>

union stu{
	char a;
	int b;
	short c;
};

int main(void){
	union stu stu1;
	printf("%p\n%p\n%p\n",&stu1.a,&stu1.b,&stu1.c);

	return 0;
}