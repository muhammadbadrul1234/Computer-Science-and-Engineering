#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    char c='.';
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
            for(int i=0;i<s.size();i++){
                    s.erase(remove(s.begin(),s.end(),'a'),s.end());
                    s.erase(remove(s.begin(),s.end(),'e'),s.end());
                    s.erase(remove(s.begin(),s.end(),'i'),s.end());
                    s.erase(remove(s.begin(),s.end(),'o'),s.end());
                    s.erase(remove(s.begin(),s.end(),'u'),s.end());
                    s.erase(remove(s.begin(),s.end(),'y'),s.end());
 
            }
    for(int i=0;i<s.size();++i){
            cout<<"."<<s[i];
    }return 0;
}