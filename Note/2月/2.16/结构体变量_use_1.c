/*结构体变量的初始化*/
#include <stdio.h>

struct stu{
	char name[20];
	int age;
	char id[30];
}stu1={"奥秘Sir",19,"2668318433"},stu2;

int main(void){
	struct stu stu3 = {"奥秘Sir1",19,"123456"};

	return 0;
}