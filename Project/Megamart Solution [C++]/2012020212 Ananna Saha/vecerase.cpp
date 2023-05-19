#include <bits/stdc++.h>
using namespace std;
int main() {
    set<long long int>s;
    int a=0;
    cin>>a;
    for(int i=0;i<a;i++){
        int x=0,y=0;
        cin>>x;
        cin>>y;
        if(x==1)
            s.insert(y);
        else if(x==2)
            s.erase(y);
        else{
            set<long long int>::iterator itr=s.find(y);
            if(itr == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }return 0;
}
