#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,d,e,f,g;

    scanf("%f", &a);
    if(a>=0){



    if(a>=0 && a<=2000.00){
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00){
        b=a-2000.00;
        c=b*.08;
        printf("R$ %.2f\n", c);
    }
    else if(a>=3,000.01 && a<=4500.00){
        d=a-3000.00;
        e=(d*.18)+80;
        printf("R$ %.2f\n", e);
    }
    else if(a>4500.00){
        f=a-4500.00;
        g=(f*.28)+350;
        printf("R$ %.2f\n", g);
    }

    }
    return 0;
}
