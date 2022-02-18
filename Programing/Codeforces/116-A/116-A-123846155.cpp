#include<bits\stdc++.h>
using namespace std;
int main(){
    int a,b,c,sum=0,k=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        sum=(b+k)-c;
        if(sum<0)
           k=0;
        else
            k=sum;

    }
    printf("%d\n",sum);
}