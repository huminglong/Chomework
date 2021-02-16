#include <stdio.h>

int main(void){
	char name[3] = "黄";
	char name1[7];
	scanf("%s",name1);

	puts(name);
	puts(name1);
	printf("%c%c\n",name[0],name[1]);  //此方法不适用gcc编译器

	return 0;
}