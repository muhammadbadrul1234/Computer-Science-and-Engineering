#include<bits\stdc++.h>
using namespace std;
int main(){
    int a;
    string s1;
    string s2;
    scanf("%d",&a);
    s2="abcdefghijklmnopqrstuvwxyz";
    int c=0;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        s1[i]=towlower(s1[i]);
    }
    sort(s1.begin(),s1.end());
    s1.erase(std::unique(s1.begin(),s1.end()),s1.end());
    for(int i=0;i<a;i++){
        if(s1[i]==s2[c]){
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