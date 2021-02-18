#include <stdio.h>

struct stu{
	char name[20];
	int age;
};

struct tea{
	struct stu stu1;
	char tall[20];
	int id;
};

int main(void){
	struct tea tea1 = {{"奥秘Sir",19},"奥秘Sir",299};

	printf("%s\n",tea1.stu1.name);
	printf("%d\n",tea1.stu1.age);
	printf("%s\n",tea1.tall);
	printf("%d\n",tea1.id);
	
	return 0;

}