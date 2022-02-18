#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if((a<b<c)){
        printf("%d\n", a);
    }
    else if((b<a<c)){
        printf("%d\n", b);
    }
    else{
        printf("%d\n", c);
    }

    if((c<a<b)){
        printf("%d\n", c);
    }
    else if((a<c<b)){
        printf("%d\n", a);
    }
    else{
        printf("%d\n", b);
    }














    return 0;
}
