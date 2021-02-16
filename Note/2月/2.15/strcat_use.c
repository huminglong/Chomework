#include <stdio.h>
#include <string.h>

int main(void){
	char p1[7] = "abc";
	char p2[4] = "def";

	strcat(p1,p2);
	printf("%s\n",p1);

	return 0;
}