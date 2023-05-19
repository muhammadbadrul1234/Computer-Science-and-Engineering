#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    ll x= s.size();
    int sum=0,sum2=0;
    for(int i=0;i<x;i++){
        if(isupper(s[i]))
        sum2++;
        if(isupper(t[i]))
        sum2++;
    }
    if(x>1 && x<101)
    {
        for(ll i=0;i<=x;i++)
        {
            if(s[i]!=t[i])
            {
                sum++;
            }
        }
    }
    if(sum<3 && sum2==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
    