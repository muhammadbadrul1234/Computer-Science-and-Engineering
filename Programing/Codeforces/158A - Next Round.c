#include<stdio.h>
int main(){
    int a,b,k[100],c=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
        scanf("%d",&k[i]);
    }
    for(int i=1;i<=a;i++){
        if(k[i]>=k[b] && k[i]>0){
            c++;
    }

    }
    printf("%d\n",c);
    return 0;
}
