#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b;
    c=a-b;
    if(3<=b && b<=a && a<=9)
    {
    if(c>0)
    {
        long long int d=pow(32,c);
        cout<<d<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    }
}