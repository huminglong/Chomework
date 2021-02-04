/*多级指针2*/

//详情对比13-19行的代码

//一级指针p是变量a的地址，二级指针变量p1的值是p的地址，所以打印p1和&p的结果是一样的
//三级指针变量又是二级指针变量的啊吧啊吧，p1的值和*p2的值是一样的
//


#include <stdio.h>

int main(void){
    int a = 12;
    int *p1 = &a;     //一级指针
    int * *p2 = &p1;  //二级指针
    int ** *p3 = &p2;  //三级指针

    printf("%p\n",&a);
    printf("%p\n",p1);
    printf("%d\n",*p1);

     printf("\n");

    printf("%p\n",&p1);
    printf("%p\n",p2);
    printf("%p\n",*p2);

     printf("\n");

    printf("%p\n",&p2);
    printf("%p\n",p3);
    printf("%p\n",*p3);
    return 0;
}