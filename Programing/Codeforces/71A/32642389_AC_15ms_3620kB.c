#include<stdio.h>
int main(){
    int i,n,len;
    char s[100];
    scanf("%d",&n);
    for(int a=0;a<n;a++){
        scanf("%s",&s);
        len=strlen(s);
 
        if(len>10){
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }
        else{
            printf("%s\n",s);
        }
    }
}