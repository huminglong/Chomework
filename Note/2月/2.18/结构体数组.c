#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu{
	char name[20];
	int age;
};

int main(void){
	struct stu stu1[3] = {{"奥秘Sir",19},{"奥秘Sir1",20},{"奥秘Sir2",21}};
	printf("%s\n",stu1[0].name);
	printf("%d\n",stu1[1].age);

	struct stu stu2[2];
	strcpy(stu2[0].name,"心有猛虎");
	stu2[1].age = 30;
	printf("%s\n",stu2[0].name);
	printf("%d\n",stu2[1].age);
	printf("%d\n",stu2[0].age);

	return 0;

}