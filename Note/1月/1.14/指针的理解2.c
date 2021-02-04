/*指针的写*/

#include <stdio.h>

int main(void){
	int a = 12;
	int *p = &a;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%p\n",p);


	*p = 13;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%p\n",p);
	return 0;
}
