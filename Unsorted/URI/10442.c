#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && b>c){
            printf("%d\n%d\n%d\n\n", c,b,a);
            printf("%d\n%d\n%d\n", a,b,c);
    }
    else if(b>a &&a>c){
            printf("%d\n%d\n%d\n\n", c,a,b);
            printf("%d\n%d\n%d\n", a,b,c);
    }
    else if(c>b && b>a){
            printf("%d\n%d\n%d\n\n", a,b,c);
            printf("%d\n%d\n%d\n", a,b,c);
    }
    else if(c>a&& a>b){
            printf("%d\n%d\n%d\n\n", b,a,c);
            printf("%d\n%d\n%d\n", a,b,c);
    }
    else if(a>c &&c>b){
            printf("%d\n%d\n%d\n\n", a,c,b);
            printf("%d\n%d\n%d\n", a,b,c);
    }
    else if(b>c &&c>a){
            printf("%d\n%d\n%d\n\n", a,c,b);
            printf("%d\n%d\n%d\n", a,b,c);
    }
    return 0;
}
