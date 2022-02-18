#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int x;
    scanf("%s",&s);
    x=strlen(s);
    for(int i=0;i<x;i++){
        if(s[0]>=97 && s[0]<=122){
            s[0]-=32;
        }
    }
    printf("%s\n",s);

}