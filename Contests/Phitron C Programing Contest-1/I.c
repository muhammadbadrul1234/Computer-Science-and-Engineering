
/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,sum=0,sum1=0,sum2=0;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b;
    sum1=c+b;
    sum2=a+c;
    if(sum<=sum1 && sum<=sum2)
    printf("%d",sum);
    else if(sum1<=sum2 && sum1<=sum)
    printf("%d",sum1);
    else
    printf("%d",sum2);
    
}