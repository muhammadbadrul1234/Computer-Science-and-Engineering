#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    int a;
    int c=0;
    scanf("%d",&a);
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }printf("%d\n",c);
}