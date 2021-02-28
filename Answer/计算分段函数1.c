#include <stdio.h>

int main(void){
	float x,y;
	printf("请输入实数x\n");
	scanf("%f",&x);

	if(x != 0){
		y = 1 / x;
	}
	else{
		y = 0;
	}

	printf("f(%.1f) = %.1f\n",x,y);

	return 0;
}