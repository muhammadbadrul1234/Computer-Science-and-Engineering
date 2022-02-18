#include<iostream>
using namespace std;
int main()
{
    int a1,b1,c1,temp,temp1;
    scanf("%d %d %d",&a1,&b1,&c1);
    temp=a1;
    a1=b1;
    b1=temp;
    temp1=a1;
    a1=c1;
    c1=temp1;
    printf("%d %d %d",a1,b1,c1);
 
    return 0;
 
}