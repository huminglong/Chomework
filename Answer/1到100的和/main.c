//
//  main.c
//  1到100的和
//
//  Created by 奥秘Sir on 2020/11/28.
//

#include <stdio.h>

int main(void) {
    int i;
    int sum=0;
    for(i=0;i<=100;i++){
        sum+=i;
        }
    printf("1到100的和是：%d\n",sum);
    return 0;
}
