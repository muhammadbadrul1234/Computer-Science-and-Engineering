#include<iostream>
using namespace std;
int main()
{
    int n1,a,b;
    scanf("%d",&n1);
    for(int i=1; i<=n1; i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a%b);
   }
}