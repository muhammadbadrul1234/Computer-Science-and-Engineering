#include<bits\stdc++.h>
using namespace std;
int main(){
    int a;
    string s;
    string s2;
    scanf("%d",&a);
    s2="abcdefghijklmnopqrstuvwxyz";
    int c=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=towlower(s[i]);
    }
    sort(s.begin(),s.end());
    s.erase(std::unique(s.begin(),s.end()),s.end());
    for(int i=0;i<a;i++){
        if(s[i]==s2[c]){
            c++;
        }
    }
    if(c>=26){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 
}