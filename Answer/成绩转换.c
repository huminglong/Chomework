#include <stdio.h>

int main(void){
	int grades;
	printf("请输入您的成绩：\n");
	scanf("%d",&grades);

	if(grades >= 90 && grades <= 100)
	{
		printf("A\n");
	}
	else if(grades >= 80 && grades < 90)
	{
		printf("B\n");
	}
	else if(grades >= 70 && grades < 80)
	{
		printf("C\n");
	}
	else if(grades >= 60 && grades < 70)
	{
		printf("D\n");
	}
	else if(grades >= 0 && grades < 60)
	{
		printf("E\n");
	}
	else
	{
		printf("您输入的数据不合理，请重新输入\n");
	}

	return 0;
}