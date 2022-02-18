#include<iostream>
using namespace std;
int main(){
    int a,b;
    int sum=0;
    int sum1=0;
    cin>>a;
    for(int i=0;i<a;i++){
            cin>>b;
            if(b%2==0){
                    sum++;
            if(b%3==0){
                sum1++;
            }
            else if(b%5==0){
                sum1++;
            }break;
            
            }
    }
    if(sum==sum1)
        cout<<"APPROVED"<<endl;
    else
        cout<<"DENIED"<<endl;
    return 0;
}