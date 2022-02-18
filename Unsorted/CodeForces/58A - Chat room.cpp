#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a="hello";
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==a[sum]){
                sum++;
        }
    }if(sum==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }return 0;
}
