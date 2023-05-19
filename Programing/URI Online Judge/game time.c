#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,x,y;

    scanf("%d%d%d%d", &a,&x,&b,&y);
//when b is greater than a//
    if(b>a && y>x){
        c=b-a;
        d=y-x;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c, d);
    }
    else if(b>a && x>y){
        c=b-a-1;
        d=60-(x-y);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c,d);
    }
//One or both equal//
    else if(a==b && x==y){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a==b && x>y){
            c=24-1;
            d=60-(x-y);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c,d);
    }
    else if(a==b && x<y){
        c=0;
        d=y-x;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c,d);
    }
    else if(a>b && x==y){
          c=b-a+24;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", c);
    }
    else if(a<b && x==y){
        c=b-a;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", c);
    }
//When a is greater than b//


    else if(a>b && y>x ){
        c=b-a+24;
        d=y-x;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c,d);
    }
    else if(a>b && x>y ){
        c=b-a+24-1;
        d=60-(x-y);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c,d);
    }


    return 0;
}
