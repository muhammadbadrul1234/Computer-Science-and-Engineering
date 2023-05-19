#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a;
   float b,c,d;
   cin>>a;
   cin>>b;
   c=b-.50;
   if(a<=c && a%5==0){
        d=b-a-.50;
        printf("%.2lf\n",d);
   }else{
        printf("%.2lf\n",b);
   }return 0;
}