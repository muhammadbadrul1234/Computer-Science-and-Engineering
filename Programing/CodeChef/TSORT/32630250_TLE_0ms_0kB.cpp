#include<iostream>
using namespace std;
int main(){
int a,b,x,j,n,temp,pos,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<a;++i){
                    temp=arr[i];
                    pos=i;
                    while(pos>0 && arr[pos-1]>temp){
                        arr[pos]=arr[pos-1];
                        pos--;
                    }arr[pos]=temp;
                }for(int i=0;i<a;i++)
                printf("%d\n",arr[i]);
}