#include <stdio.h>

struct stu{
	char name[20];
	int age;
	char id[20];
};

int main(void){
	struct stu stu1 = {"皮皮",20,"744415085"};
	stu1 = (struct stu){"黄祥河",19,"2668318433"};
	printf("%s\n",stu1.name);
	printf("%d\n",stu1.age);
	printf("%s\n",stu1.id);

	return 0;
}