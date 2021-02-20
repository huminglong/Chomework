#include <stdio.h>

int main(void){
    int i,j;   //定义循环变量
    int temp;  //定义中间变量
    int a[10] = {1,34,53,2,46,276,346,341,64,24};

    /*交换算法*/
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /*排序打印*/
    printf("最后的排序是：");
    for(i=0;i<10;i++){
        printf(" %d ",a[i]);
    }

    return 0;

}