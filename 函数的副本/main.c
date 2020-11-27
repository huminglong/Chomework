//
//  main.c
//  函数
//
//  Created by 黄祥河 on 2020/11/20.
//

#include <stdio.h>

int area(int a,int b,int c,int v){
    v=a*b*c;
    return (v);
}

int main(void){
    int a,b,c,v;
    printf("请输入长宽高：");
    scanf("%d,%d,%d",&a,&b,&c);
    v=area(a,b,c,v);
    printf("%d\n",v);
    return 0;
    
}
