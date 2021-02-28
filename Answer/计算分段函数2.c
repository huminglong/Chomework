#include <stdio.h>
#include <math.h>

int main(void){
	float x,y;

	printf("请在下行中输入一个实数\n");
	scanf("%f",&x);

	if(x >= 0){
		y = sqrt(x);
	}
	else{
		y = pow(x+1,2) + 2*x + 1/x;
	}

	printf("f(%.2f) = %.2f\n",x,y);

	return 0;
}