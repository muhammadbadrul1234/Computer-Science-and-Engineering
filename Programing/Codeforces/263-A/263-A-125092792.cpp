#include<bits\stdc++.h>
using namespace std;
int main(){
    int a,b,i,j;
    for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cin>>a;
                if(a==1){
                    b=abs(i-3)+abs(j-3);
                }
            }

    }
    cout<<b<<endl;
    return 0;
}