#include <stdio.h>

int main(void){
	int UseCount;
	float cost;
	printf("请输入您本月的用电量：");
	scanf("%d",&UseCount);

	if(UseCount <= 50 && UseCount >= 0){
		cost = 0.53 * UseCount;
	}
	else{
		cost = 0.53 * 50 + (UseCount - 50) * (0.53 + 0.05); 
	}

	printf("您本月的电费是:%.2f\n",cost);


	return 0;
}