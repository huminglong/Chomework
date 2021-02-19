#include <stdio.h>

struct stu{
	char a;
	short c;
	int b;
	double d;
};

int main(void){
	printf("%lu\n",sizeof(struct stu));

	return 0;
}