#include<iostream>
using namespace std;
int main()
{
   int number,a,sum=0;
   cin>>number;
   while(number>0){
        a=number%10;
        sum=a+sum;
        number=number/10;
   }
   cout<<sum<<endl;
   return 0;
}