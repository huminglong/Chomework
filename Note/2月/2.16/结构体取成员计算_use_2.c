#include <stdio.h>

struct stu{
	char name[20];
	int age;
	char id[20];
};

int main(void){
	struct stu stu1 = {"黄祥河",19,"2668318433"};
	struct stu *p = &stu1;

	printf("%s\n",p->name);
	printf("%d\n",p->age);
	printf("%s\n",p->id);

	return 0;
}