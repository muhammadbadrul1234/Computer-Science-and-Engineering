#include<bits\stdc++.h>
using namespace std;
int main(){
    system("cls");
    int n,h,a;
    int c=0;
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>h){
            c++;
        }
    }
    printf("%d\n",n+c);



}