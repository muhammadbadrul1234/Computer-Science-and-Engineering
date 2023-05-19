#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,x,y;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>x>>y;
        if(x<y)
        {
            x=-x*x;
            y=y*y;
            cout<<x<<" "<<y<<endl;
        }
        else if(x>y)
        {
            x=x*x;
            y=-y*y;
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            x=-x*x;
            y=y*y;
            cout<<x<<" "<<y<<endl;
        }
    }
}
