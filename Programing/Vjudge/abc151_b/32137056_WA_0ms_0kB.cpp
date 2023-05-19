#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    int sum=0;
    cin>>a;
    cin>>b;
    cin>>c;
    d=a*c;
    for(int i=1;i<a;i++){
            cin>>b;
            sum+=b;
            }
    
    e=d-sum;
    printf("%d\n",e);
    return 0;
}