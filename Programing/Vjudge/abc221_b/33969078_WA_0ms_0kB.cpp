#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int sum=0,sum2=0;
    for(int i=0;i<=s.size();i++)
    {
       
        if(s[i]!=t[i])
        {
            sum++;
        }
    }
    if(sum==2)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

}