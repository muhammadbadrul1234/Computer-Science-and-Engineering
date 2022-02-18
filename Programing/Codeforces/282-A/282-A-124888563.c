#include<stdio.h>
int main(){
    int a,sum=0,v,v5,v6,v7;
    char s[100];
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%s",&s);
 
    v=strcmp("X++",s);
    v5=strcmp("X--",s);
    v6=strcmp("++X",s);
    v7=strcmp("--X",s);
    if(v==0){
    sum++;
    }
    if(v5==0){
        sum--;
    }
    if(v6==0){
    sum++;
    }
    if(v7==0){
        sum--;
    }
    }
 
 
    printf("%d",sum);
    return 0;
 
}