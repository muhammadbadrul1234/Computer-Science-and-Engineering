/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    double b,c,d,sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%lf%lf",&b,&c);
        d=b*c;
        sum+=d;
    }
    printf("%.3lf",sum);
}