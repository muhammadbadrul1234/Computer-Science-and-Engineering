#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,a,sum=0;
    scanf("%d%d\n",&n,&a);
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B')
            sum++;
    }
    for(int j=0;j<a;j++){
        for(int i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                   s[i]='G';
                   s[i+1]='B';
                   i++;
            }
        }
    }

    cout<<s<<endl;
}