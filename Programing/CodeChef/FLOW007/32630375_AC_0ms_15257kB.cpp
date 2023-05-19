#include<iostream>
using namespace std;
int main(){
    int T,N;
    scanf("%d",&T);
    for(int i=1; i<=T; i++){
        int reminder,x=0;
        scanf("%d",&N);
        while (N!=0){
                reminder=N%10;
                x=x*10+reminder;
                N/=10;
    }printf("%d\n",x);
   }return 0;
}
