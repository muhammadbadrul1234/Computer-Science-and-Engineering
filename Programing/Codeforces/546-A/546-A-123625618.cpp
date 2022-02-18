#include<bits\stdc++.h>
using namespace std;
int main(){
    int k,n,w,y,z=0;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        z+=i*k;
    }y=z-n;
    if(y>0){
        printf("%d\n",y);
    }
    else{
       printf("0"); 
    }
}