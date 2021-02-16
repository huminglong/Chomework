#include <stdio.h>
void fun(void);

struct stu{
	void (*p)(void);
};

void fun(void){
	printf("I'm 奥秘Sir\n");
}

int main(void){
	struct stu a = {fun};
	
}