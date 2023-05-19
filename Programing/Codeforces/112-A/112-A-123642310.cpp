#include<bits\stdc++.h>
using namespace std;
int main(){
    string s,t;
    int a,b;
    cin>>s;
    cin>>t;
    for(int i=0;i<s.size();i++){
        s[i]=towlower(s[i]);
        t[i]=towlower(t[i]);
    }
    if(s==t){
        printf("0\n");
    }
    else{
            for(int i=0;i<s.size();i++){
                if(s[i]>t[i]){
                printf("1\n");
                break;
                }
                if(s[i]<t[i]){
                printf("-1\n");
                break;
                }
            }


    }return 0;
}