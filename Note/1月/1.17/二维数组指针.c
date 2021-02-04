#include <stdio.h>

int main(void){
	int a[2][3] = {{1,2,3},{4,5,6}};

	int *p = &a[1][2];     //具体到元素，定义的时候不需要加括号
	int (*p1)[3] = &a[1];  //没有具体到元素，此时相当于在用一个一维数组给指针赋值，所以要加括号
	int (*p2)[2][3] = &a;  //没有具体到元素，此时相当于在用一个二维数组给指针赋值，所以要加括号

	printf("p指针的打印\n");
	printf("%d\n",*p);          

	printf("p1指针的打印\n");
	printf("%p\n",p1);     
	printf("%d\n",(*p1)[0]);
	printf("%d\n",(*p1)[1]);
	printf("%d\n",(*p1)[2]);

	printf("p2指针的打印\n");
	printf("%d\n",(*p2)[0][0]);
	printf("%d\n",(*p2)[0][1]);
	printf("%d\n",(*p2)[0][2]);
	printf("%d\n",(*p2)[1][0]);
	printf("%d\n",(*p2)[1][1]);
	         
	return 0;
}