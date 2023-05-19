#include<bits\stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s;
    cin>>s1;
    string rev=string(s.rbegin(),s.rend());
    if(rev==s1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}