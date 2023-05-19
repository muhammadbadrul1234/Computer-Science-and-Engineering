#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,n;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<a;i++)
                printf("%d\n",arr[i]);
    return 0;
}