#include<bits\stdc++.h>
using namespace std;
int main(){
    int a,b;
    int sum=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        if(arr[i]!=arr[i+1])
            sum++;
        else{

        }

    }
    cout<<sum<<endl;
    return 0;
}