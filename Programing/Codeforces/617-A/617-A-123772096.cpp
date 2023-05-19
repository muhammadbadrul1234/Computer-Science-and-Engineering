#include<bits\stdc++.h>
using namespace std;
int main(){
    int x,y5,y41,y42,y31,y32,y21,y22,y11,y12,sum=0;
    scanf("%d",&x);
    if(x>=5){
        y5=(x/5);
        sum+=y5;
    }

    if(x%5==4){
        y41=((x%5)/4);
        sum+=y41;
    }
    else if(x==4){
        y42=x/4;
        sum+=y42;
    }
    if(x%5==3 ){
        y31=((x%5)/3);
        sum+=y31;
    }
    else if(x==3){
        y32=x/3;
        sum+=y32;
    }
    if(x%5==2 ){
        y21=((x%5)/2);
        sum+=y21;
    }
    else if(x==2){
        y22=x/2;
        sum+=y22;
    }
    if(x%5==1 ){
        y11=((x%5)/1);
        sum+=y11;
    }
    else if(x==1){
        y12=x/1;
        sum+=y12;
    }

    printf("%d",sum);
    return 0;
}