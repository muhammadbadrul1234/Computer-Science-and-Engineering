#include<stdio.h>
int main(){
    int a,b,n[100],k,c=0,d=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
        scanf("%d",&k);
        if(n[k]==n[b]){
            c++;
            printf("%d\n",c);
        }

        else if(n[k]>=n[b]){
            d++;
            printf("%d\n",c);
        }



    }


    return 0;
}
