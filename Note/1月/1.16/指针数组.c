#include <stdio.h>

int main(void){
	int b = 2,
		c = 5,
		d = 8,
		e = 4,
		f = 70;

	int* a[5] = {&b,&c,&d,&e,&f};

	printf("%d\n",*a[2]);
	*a[2] = 34;
	printf("%d\n",*a[2]); 
	printf("%d\n",d);      //14-15行的代码表示*a[2]等价于b
	return 0;
}