#include <stdio.h>
#include <stdlib.h>

int main(void){
	int RandomNumber = rand()%100;   //生成随机数RandomNumber
	int count = 0;  //猜数字的次数
	int UserNumber1;


	do{
		printf("请输入一个您猜想的数字:\n");
		scanf("%d",&UserNumber);
		if(UserNumber > RandomNumber)
		{
			printf("Too big\n");
			count++
		}
		else if(UserNumber > RandomNumber)
		{
			printf("Too small\n");
			count++;
		}
		else
		{
			count++;
			break;
		}
	}while(RandomNumber == UserNumber);


	if (count == 1)
	{
		printf("Bingo\n");
	}
	else if(count > 1 && count <= 3)
	{
		printf("Lucky You\n");
	}
	else if(count > 3 && count < )
	{
		printf("Good Guess\n");
	}
	else
	{
		printf("Game Over\n");
	}


	


}