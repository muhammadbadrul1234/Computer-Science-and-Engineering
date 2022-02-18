#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string str,str1,str2;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>str>>str1;
        int n=str.length();
        for(int j=0;j<n/2;j++)
        swap(str[j],str[n-j-1]);
        if(str==str1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}