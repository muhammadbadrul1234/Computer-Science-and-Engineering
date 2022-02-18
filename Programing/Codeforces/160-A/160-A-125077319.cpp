#include<bits\stdc++.h>

using namespace std;
int main(){
    int a,b;
    int sum1=0;
    int sum2=0;
    int sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum2+=arr[i];
    }int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<a;i++){
        if(sum1<=sum2){
        sum1+=arr[i];
        sum2-=arr[i];
        sum++;
        }
        else{
            break;
        }


    }if(a<2){
        printf("1\n");
    }else{
    cout<<sum<<endl;
    }
    return 0;
}