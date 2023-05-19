#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    vector<long long int>v;
    cin>>a;
    long long int b;
    int x,y,z;
    for(int i=0;i<a;i++){
        cin>>b;
        v.push_back(b);
    }cin>>x;
    cin>>y;
    cin>>z;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(y-1),v.begin()+(z-1));
    cout<<v.size()<<endl;
    for(int c=0;c<v.size();c++){
        cout<<v[c]<<" ";
    }return 0;
}