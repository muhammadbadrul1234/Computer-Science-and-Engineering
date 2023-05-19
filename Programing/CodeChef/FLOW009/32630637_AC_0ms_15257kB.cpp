#include<iostream>
using namespace std;
int main(){
   int a;
   double b,c,d;
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
        scanf("%lf%lf",&b,&c);
        if(b>1000){
            d=b*c*0.9;
            printf("%.6lf\n",d);
        }
        else{
            d=b*c;
            printf("%.6lf\n",d);
        }

   }
    return 0;

}