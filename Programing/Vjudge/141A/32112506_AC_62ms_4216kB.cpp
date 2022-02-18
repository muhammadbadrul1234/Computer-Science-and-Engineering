#include<bits\stdc++.h>
using namespace std;
int main(){
    int a;
    string s1;
    string s2;
    string s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    std::string s=s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    if((s.compare(s3))==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}