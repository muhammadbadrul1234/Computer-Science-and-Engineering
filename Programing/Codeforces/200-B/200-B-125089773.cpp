#include<bits\stdc++.h>
using namespace std;
int main(){
    int a,b;
    double sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        sum+=b;
    }sum=sum/a;
    printf("%.12lf\n",sum);
    return 0;
}