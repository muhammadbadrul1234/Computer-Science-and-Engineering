#include<iostream>
using namespace std;
int main(){
    int x,a,b,c;
    cin>>x;
    for(int i=1;i<=x;i++){
        cin>>a>>b>>c;
        int sum=(a+b+c);
        if(sum==180){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }return 0;
}
