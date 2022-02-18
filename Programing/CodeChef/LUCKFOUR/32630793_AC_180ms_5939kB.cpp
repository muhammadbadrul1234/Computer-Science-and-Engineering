#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
       cin>>n;
       long long int c=0;
       while(n>0){
          long long int r=n%10;
          if(r==4)
          c++;
          n/=10;
       }cout<<c<<endl;
    }return 0;
}