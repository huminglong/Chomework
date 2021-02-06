#include <stdio.h>

int main(void){
	int i;
	int a[5];
	for(i=0i<5;i++){
		printf("请输入第%d个数：\n",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}

	return 0;
}