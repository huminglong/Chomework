#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tea{

	struct stu{
		char tall[30];
		int id;
	};

	struct stu stu1;
	char name[30];
	int age;


};

int main(void){
	struct tea tea1;

	strcpy(tea1.stu1.tall,"奥秘Sir");
	tea1.stu1.id = 19;
	strcpy(tea1.name,"奥秘Sir1");
	tea1.age = 20;


	printf("%s\n",tea1.stu1.tall);
	printf("%d\n",tea1.stu1.id);
	printf("%s\n",tea1.name);
	printf("%d\n",tea1.age);

	return 0;
}