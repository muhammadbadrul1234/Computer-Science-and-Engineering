#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[i]==t[j])
            {
                sum++;
            }
        }
    }
    if(sum==s.size())
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

}
    