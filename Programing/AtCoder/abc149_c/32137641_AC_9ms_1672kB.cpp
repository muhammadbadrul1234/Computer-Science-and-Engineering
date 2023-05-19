#include<stdio.h>
#include <stdlib.h>

int main()
{
int a,count=0;
scanf("%d",&a);
for(int i=2; i<a; i++)
{
    if(a%i==0)
    {
        count++;
        break;
    }
}
if(count==0)
{
    printf("%d",a);
}
else{
for(int i=a+1;i>0;i++)
{
  int count=0;
for(int j=1;j<=i;j++)
{
         if(i%j==0)
        count++;
}
     if(count==2){
     printf("%d",i);
       break;
}
}
}
}