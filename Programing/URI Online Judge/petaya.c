#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
                s[i]=len--;
            }

    }
    printf("%s",s);
    return 0;


    }

