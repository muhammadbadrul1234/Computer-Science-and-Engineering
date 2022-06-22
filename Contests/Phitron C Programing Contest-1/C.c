/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        if(b<0)
        sum+=1;
    }
    printf("%d",sum);
}