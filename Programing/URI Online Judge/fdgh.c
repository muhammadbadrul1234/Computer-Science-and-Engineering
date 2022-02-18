#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d", &a);
    b=a/3600;
    printf("%d:", b);
    c=a-(b*3600);
    d=c/60;
    printf("%d:", d);
    e=c-(d*60);
    printf("%d\n",e);

    return 0;

}
