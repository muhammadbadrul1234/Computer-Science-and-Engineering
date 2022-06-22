#include<stdio.h>

int main(){
    int n;
    int a=0;
    int d=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        printf("Anton\n");
    }
    else if(d>a){
        printf("Danik\n");
    }
    else{
        printf("Friendship\n");
    }return 0;
 
}