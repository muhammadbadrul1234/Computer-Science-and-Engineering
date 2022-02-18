#include<iostream>
using namespace std;
int main()
{
   int a,b;
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
        scanf("%d",&b);
        if(b<10){
           printf("Thanks for helping Chef!\n");
       }else{
            printf("-1\n");
       }
   }
    return 0;

}