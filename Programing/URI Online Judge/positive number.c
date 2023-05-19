#include<stdio.h>
int main(){
    int a,even=0,odd=0,positive=0,negative=0;
    for(float i=1; i<=6; i++){
        scanf("%f",&a);
        if(a>0){
            positive++;
        }
        else if (a<0){
            negative++;
        }
    }
    printf("%d valores positivos\n", positive);
}
