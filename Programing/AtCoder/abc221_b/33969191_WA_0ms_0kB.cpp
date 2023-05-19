#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int sum=0,sum2=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        sum2++;
        if(isupper(t[i]))
        sum2++;
    }
    if(s.size()>1 && s.size()<101)
    {
        for(int i=0;i<=s.size();i++){
            if(s[i]!=t[i]){
                sum++;
            }
        }
    }
    if(sum<3 && sum2==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
    