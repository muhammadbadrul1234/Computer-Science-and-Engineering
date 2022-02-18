#include<stdio.h>
#include <stdint.h>
int main(){
    int a,b,c;
    unsigned long long x,y;
    scanf("%d%d",&a,&b);
    if(a%2==0 ){
        x=(a/2);
    }else{
        x=(a/2)+1;
    }
    if(b%2==0){
        y=(b/2);
    }else{
        y=(b/2)+1;
    }
    printf("%llu\n",x*y);
    return 0;
}
