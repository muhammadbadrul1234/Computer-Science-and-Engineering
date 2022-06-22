/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,sum=0,sum1=0,sum2=0;
    scanf("%d%d%d",&a,&b,&c);
    for (int i =1; i <=c; i++) {
        if(i%a==0 && i%b==0)
        printf("FizzBuzz\n");
        else if(i%a==0 )
        printf("Fizz\n");
        else if(i%b==0 )
        printf("Buzz\n");
        else
        printf("%d\n",i);
    }
    
}