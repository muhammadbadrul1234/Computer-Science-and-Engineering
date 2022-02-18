#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    int c=0;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
            if(s[i]>96 &&s[i]<123){
                    c++;
            }
    }
    if(c==2 || c==1){
            cout<<s<<endl;
    }
    else{
            for(int i=0;i<s.size();i++){
                s[i]=towlower(s[i]);
                s[0]=towupper(s[0]);
                }cout<<s<<endl;
    }return 0;

}

