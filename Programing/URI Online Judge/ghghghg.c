#include<stdio.h>
int main(){
    int positive=0,negative=0;
    float a,sum=0,z;
    for(float i=1; i<=6; i++){
        scanf("%f",&a);
        if(a>0){
            positive++;
            sum=sum+a;
        }


        else if(a<0){
            negative++;
        }
    }
    printf("%d valores positivos\n", positive);
    z=sum/positive;
    printf("%.1f\n", z);
}
