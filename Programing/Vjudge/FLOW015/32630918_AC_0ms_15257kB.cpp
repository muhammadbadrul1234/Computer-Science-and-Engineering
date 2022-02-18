#include <iostream>
using namespace std;
int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int y,i,d=0;
        cin>>y;
        for(i=1900;i<y;i++)
        {
         if((i%400==0)||(i%4==0 && i%100!=0))
         d=d+366;
         else
         d=d+365;
        }
        d=d%7;
        if(d==0)
        cout<<"monday"<<endl;
        
        else if(d==1)
        cout<<"tuesday"<<endl;
        
        else if(d==2)
        cout<<"wednesday"<<endl;
        
        else if(d==3)
        cout<<"thursday"<<endl;
        
        else if(d==4)
        cout<<"friday"<<endl;
        
        else if(d==5)
        cout<<"saturday"<<endl;
        
        else if(d==6)
        cout<<"sunday"<<endl;
        
    }
    return 0;
}