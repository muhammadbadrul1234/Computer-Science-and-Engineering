#include<bits\stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=a;i++){
        for(int j=0;j<a;j++){
            if(arr[j]==i){
                cout<<j+1<<" ";
            }
        }
    }

    return 0;
}