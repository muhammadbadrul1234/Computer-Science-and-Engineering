#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    int a;
    int c=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] && s[i+3]==s[i+4] && s[i+4]==s[i+5] && s[i+5]==s[i+6]){
                c++;
            }
        }
        if(c>=1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
    }
    return 0;
}