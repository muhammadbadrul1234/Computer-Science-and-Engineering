#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    int i,sum=0,sum1=0;
    scanf("%s",&str);
    scanf("%s",&str1);
    for (i=0;i<strlen(str1);i++){
           if(str1[i]>=65 && str1[i]<=90){
            str1[i]=str1[i]+32;
           }
    }
    for (i=0;i<strlen(str);i++){
           if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
           }
    }
    if(strcmp(str,str1)==0){
        printf("0\n");
    }
    else{
    int len=strlen(str);
    int len1=strlen(str1);
    for(i=0;i<len;i++){
        sum=sum+str[i];
    }
    for(i=0;i<len1;i++){
        sum1=sum1+str1[i];
    }

    if(sum<sum1){
        printf("-1\n");
    }
    else if(sum>sum1){
        printf("1\n");
    }
    else{
        printf("-1\n");
    }
    }
    return 0;

}
