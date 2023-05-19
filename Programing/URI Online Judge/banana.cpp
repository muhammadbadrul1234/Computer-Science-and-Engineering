#include<bits\stdc++.h>
using namespace std;
int main(){
    int k,n,w,z=0;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        z+=i*k;
    }
    printf("%d",z);
}
