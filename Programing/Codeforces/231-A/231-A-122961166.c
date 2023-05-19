#include<stdio.h>
int main(){
    int a,b,c,sum=0,sum2=0,f,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a==1 && b==1 && c==1) || (a==0 && b==1 && c==1) || (a==1 && b==1 && c==0) || (a==1 && b==0 && c==1)){
           sum++;

        }



    }
    printf("%d\n",sum);

}