//
//  main.c
//  4.7
//
//  Created by 黄祥河 on 2020/11/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    double m,n;
    for(i=1;i<=100;i++){
        m=i%5;
        n=i%9;
        if(m=2||n=0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
