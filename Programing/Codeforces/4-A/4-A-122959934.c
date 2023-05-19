#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%2!=0 || i==2){
        printf("NO\n");
    }
    else{
       printf("YES\n") ;
    }
    return 0;
}