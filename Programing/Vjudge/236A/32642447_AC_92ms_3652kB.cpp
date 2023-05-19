#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    int c=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
            c++;
        }
    }if(c%2==0){
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!");
    }
 
}