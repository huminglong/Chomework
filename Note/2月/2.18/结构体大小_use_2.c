#include <stdio.h>
#pragma pack(4)

struct stu{
	char a;
	int b;
	double d;
	short c;
};

int main(void){
	printf("%lu\n",sizeof(struct stu));

	return 0;
}