#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //string s1,t1;
    //cin>>s1>>t1;
    int a,c;
    string b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        c=b.size();
        //cout<<"Loop:"<<c<<endl;
        if(b[c-1]%2==0)
            cout<<"0"<<endl;
        else if(b[0]%2==0)
            cout<<"1"<<endl;
        else
        {
            int sum=-1;
            for(int k=0;k<c;k++)
            {
                if(b[k]%2==0)
                {
                    sum=2;
                    break;
                }
            }
            cout<<sum<<endl;
        }  
    }
}