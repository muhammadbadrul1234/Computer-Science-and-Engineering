#include<bits\stdc++.h>
using namespace std;
int main(){
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='H')
        c++;
        }
    if(c>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}