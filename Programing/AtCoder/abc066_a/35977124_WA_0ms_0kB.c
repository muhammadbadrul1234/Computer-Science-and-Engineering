#include<stdio.h>
int main(){
    int x,y,z,sum1,sum2,sum3;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    sum1=x+y;
    sum2=y+z;
    sum3=x+z;
    if(sum1>sum2 && sum2>sum3){
        printf("%d",sum3);
    }
    else if(sum1>sum3 && sum3>sum2){
        printf("%d",sum2);
    }
    else if(sum3>sum2 && sum2>sum1){
        printf("%d",sum1);
    }
    else{
        printf("%d",sum1);
    }
}