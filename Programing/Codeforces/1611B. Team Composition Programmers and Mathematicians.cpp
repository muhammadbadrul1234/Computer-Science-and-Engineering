#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //string s1,t1;
    //cin>>s1>>t1;
    int a,b,c;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b>>c;
        cout<<min((b+c)/4,min(b,c))<<endl;
    }
}
