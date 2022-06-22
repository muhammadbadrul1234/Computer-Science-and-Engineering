#include<bits\stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string a="hello";
    int sum=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==a[sum]){
                sum++;
        }
    }if(sum==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }return 0;
}