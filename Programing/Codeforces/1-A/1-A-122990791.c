#include<stdio.h>
#include <stdint.h>
int main(){
    int a,b,c;
    unsigned long long x,y;
    scanf("%d%d%d", &a,&b,&c);
    if(a%c==0 ){
        x=(a/c);
    }else{
        x=(a/c)+1;
    }
    if(b%c==0){
        y=(b/c);
    }else{
        y=(b/c)+1;
    }
    printf("%llu\n",x*y);
    return 0;
}