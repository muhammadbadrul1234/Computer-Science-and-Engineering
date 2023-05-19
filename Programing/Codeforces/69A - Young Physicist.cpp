#include<bits\stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,sum1=0,sum2=0,sum3=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d%d%d",&b,&c,&d);
        sum1+=b;
        sum2+=c;
        sum3+=d;
    }if(sum1==0 && sum2==0 && sum3==0){
        printf("YES\n");
    }else{
       printf("NO\n");
    }return 0;
}
