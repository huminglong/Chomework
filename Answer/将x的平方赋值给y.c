#include <stdio.h>
#include <math.h>

int main(void){
	int x,y;
	x = 3;
	y = pow(x,2);

	printf("%d = %d * %d\n",y,x,x);
	printf("%d * %d = %d\n",x,x,y);

	return 0;
}