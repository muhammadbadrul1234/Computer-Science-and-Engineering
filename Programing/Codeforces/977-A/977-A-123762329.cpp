#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,k,c,d;
    scanf("%d%d",&n,&k);
    for(int i=0;i<k;i++){
            if(n%10==0){
                n/=10;
            }else{
                n--;
            }
    }printf("%d\n",n);
    return 0;
}