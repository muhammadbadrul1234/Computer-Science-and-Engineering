# include <bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int sum=0;
        if(N>=100){
            sum+=N/100;
            N=N%100;
        }if(N>=50){
            sum+=N/50;
            N=N%50;
        }if(N>=10){
            sum+=N/10;
            N=N%10;
        }if(N>=5){
            sum+=N/5;
            N=N%5;
        }if(N>=2){
            sum+=N/2;
            N=N%2;
        }if (N>=1){
            sum+=N/1;
            N=N%1;
        }cout<<sum<<endl;
    }
}
