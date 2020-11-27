//
//  main.c
//  4.3
//
//  Created by 黄祥河 on 2020/11/22.
//

#include <stdio.h>

int main() {
    long int i,sum;
    long int m=1;
    sum=0;
    for(i=1;i<=19;i++){
        m=m*i;
        sum=sum+m;
    }
    printf("%ld\n",sum);
    return 0;
}
