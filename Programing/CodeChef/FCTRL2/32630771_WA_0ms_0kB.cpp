#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        int N,factorial=1;
        cin>>N;
        while(N>0){
            factorial*=N;
            N--;
        }cout<<factorial<<endl;
    }return 0;
}