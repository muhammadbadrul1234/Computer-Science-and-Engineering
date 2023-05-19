#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,d;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(b-a>1){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}