#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    int sum=0;
    cin>>a;
    cin>>b;
    cin>>c;
    d=a*c;
    for(int i=1;i<a;i++){
            cin>>f;
            sum+=f;
            }
    
    e=d-sum;
    if(e>0 && e<=b){
        printf("%d\n",e);
    }else if(e>b){
    printf("-1\n");
    }
    else if(e<0){
        printf("0\n");
    }
    return 0;
}