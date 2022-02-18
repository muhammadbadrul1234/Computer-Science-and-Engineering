#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<long long int>v(a);
      for(int i=0;i<a;i++)
           cin>>v[i];
        sort(v.begin(),v.end());
        for(int j=0;j<a;j++)
           cout<<v[j]<<" ";
     return 0;
}
