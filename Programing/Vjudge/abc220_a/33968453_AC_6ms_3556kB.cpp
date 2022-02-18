#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    int sum=0;
    cin>>a>>b>>c;
    for (int i=0;i<100;i++)
    {
        d=c*i;
        if(d>=a && d<=b)
        {
        cout<<d<<endl;
        sum++;
        break;
        }
    }
    if (sum==0)
    {
        cout<<"-1"<<endl;
    }
}