#include <stdio.h>

union stu{
	char a;
	int b;
	short c;
};

int main(void){
	union stu stu1 = {.b = 99};
	printf("%d\n",stu1.a);
	printf("%d\n",stu1.b);
	printf("%u\n",stu1.c);
	printf("%lu\n",sizeof(stu1));
	return 0;
}