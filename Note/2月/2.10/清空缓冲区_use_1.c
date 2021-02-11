#include <stdio.h>

int main(void){
	char a, b,c;
	scanf("%c",&a);
	setbuf(stdin,NULL);
	scanf("%c",&b);
	while( (c = getchar()) != '\n' && c != EOF);
	scanf("%c",&c);

	printf("%c %c %c\n",a,b,c);

	return 0;
}