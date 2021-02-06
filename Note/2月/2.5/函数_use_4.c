#include <stdio.h>
int fun(void);

int main(void){ 
	int a = fun();
	printf("%d\n",a);
	return 0;
}

int fun(void){
	int a = 12;

	if(a > 5 && a < 10){
		return 3;
	}
	else if(a >= 10){
		return 4;
	}
	else{
		return 8;
	}
}

/*多个返回值的情况*/