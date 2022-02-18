#include<iostream>
using namespace std;
int main(){
   int a,b;
   float c,d=1;
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
        scanf("%d%f",&b,&c);
        if(b>=1000){
            d=b*c*0.90;
            printf("%.6f\n",d);
        }
        else{
            d=b*c;
            printf("%.6f\n",d);
        }

   }
    return 0;

}