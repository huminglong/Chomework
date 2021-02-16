#include <stdio.h>
#include <stdlib.h>
#include <sys/malloc.h>
#include <string.h>

struct stu{
	char name[20];
	int age;
	char id[20];
};

int main(void){
	//struct stu stu1 = {"黄祥河",19,"2668318433"};
	struct stu *p = (struct stu *)malloc(sizeof(struct stu));
	strcpy(p->name,"黄祥河");
	p->age = 19;
	strcpy((*p).id,"2668318433");

	printf("%s\n",p->name);
	printf("%d\n",p->age);
	printf("%s\n",p->id);

	return 0;
}