#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int b,w;
   float c,a;
   cin>>w>>c;
   if(w<=c && w%5==0){
        a=c-w-.50;
        printf("%.2f\n",a);
        cout<<endl;
   }else{
        printf("%.2f\n",c);
   }return 0;
}