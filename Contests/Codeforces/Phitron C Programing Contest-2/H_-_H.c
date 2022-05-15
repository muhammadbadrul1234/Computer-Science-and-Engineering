/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a==1)
    printf("I hate it");
    else if(a==2)
    printf("I hate that I love it");
    else if(a==3)
    printf("I hate that I love that I hate it");
    else if(a==4)
    printf("I hate that I love that I hate that I love it");
    else if(a%2==0){
        int c=a/2;
        for(int i=0;i<(c-1);i++){
            printf("I hate that I love that ");
        }
        printf("I hate that I love it ");
    }
    else{
        int c=a/2;
        for(int i=0;i<c;i++){
            printf("I hate that I love that ");
        }
        printf("I hate it");
    }
}