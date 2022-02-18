#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d", &a);
    b=a/365;
    if(b>0){
        printf("%d ano(s)\n", b);
    }
    else{
        printf("0 ano(s)\n");
    }
    c=a-(b*365);
    d=c/30;
    if(d>0){
        printf("%d mes(es)\n", d);
    }
    else{
        printf("0 mes(es)\n");
    }
    e=c-(d*30);
    printf("%d dia(s)\n",e);

    return 0;

}
