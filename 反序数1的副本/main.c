//
//  main.c
//  反序数1
//
//  Created by 黄祥河 on 2020/11/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,d,e,f,g;
    for(a=1000;a<=9999;a++){
        b=a/1000%10;
        c=a/100%10;
        d=a/10%10;
        e=a/1%10;
        f=1000*e+100*d+c*10+b*1;
        g=9*a;
        if(f==g){
            printf("%d\n",a);
        }
    }
    return 0;
}
