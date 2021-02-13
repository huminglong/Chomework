#include <stdio.h>

int main(void){
	char num;
	printf("请输入一个字母:");
	scanf("%c",&num);
	if(num >= 65 && num <= 90){
		printf("您输入的是一个大写字母，对应的小写字母是:");
		printf("%c\n",num+32);
	}
	else if(num >=97 && num <=122){
		printf("您输入的是一个小写字母，对应的大写字母是:");
		printf("%c\n",num-32);
	}
	else{
		printf("您输入的不是一个字母，请重新输入!\n");
	}

	return 0;
}