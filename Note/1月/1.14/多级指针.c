#include <stdio.h>

int main(void){

	
    int a = 12;
    int *p = &a;     //一级指针
    int * *p1 = &p;  //二级指针
    int ** *p2 = &p1;  //三级指针

    printf("%p\n",p);
    printf("%p\n",p1);
    printf("%p\n",p2);

    printf("%d\n",*p);
    printf("%p\n",*p1);
    printf("%p\n",*p2);
    return 0;
}