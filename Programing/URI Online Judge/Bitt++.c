#include<stdio.h>
int main(){
    int a,sum=0,v,v1,v3,v4;
    char s[100];
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%s",&s);

    v=strcmp("X++",s);
    v1=strcmp("X--",s);
    v3=strcmp("++X",s);
    v4=strcmp("--X",s);
    if(v==0){
    sum++;
    }
    if(v1==0){
        sum--;
    }
    if(v3==0){
    sum++;
    }
    if(v4==0){
        sum--;
    }
    }


    printf("%d",sum);
    return 0;

}
