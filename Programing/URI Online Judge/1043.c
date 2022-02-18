#include<stdio.h>
int main(){
   float a,b,c,q,r;
   scanf("%f%f%f", &a,&b,&c);
   if(a+c>b && a+b>c && b+c>a){
        r=a+b+c;
        printf("Perimetro = %.1f\n",r);

   }
   else{
        q=(a+b)*c/2;
        printf("Area = %.1f\n", q);

   }
   return 0;
}
