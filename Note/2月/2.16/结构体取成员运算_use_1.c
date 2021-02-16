#include <stdio.h>

struct Stu{
	char name[20];
	int age;
	char id[20];
};

int main(void){
	struct Stu stu1 = {"奥秘Sir",19,"2668318433"};
	printf("%s\n",stu1.name);
	printf("%d\n",stu1.age);
	printf("%s\n",stu1.id);

	return 0;
}