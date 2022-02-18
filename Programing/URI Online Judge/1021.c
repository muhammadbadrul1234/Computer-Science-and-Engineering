#include<stdio.h>
#include<stdlib.h>
int main()
{
  int b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;
  float a;
  scanf("%f",&a);
  printf("NOTAS:\n");
//calculation//



//Program to solve decimal//
   if(a>0 && a<1000000)
        {
    d=a/100;
    if(d>0){
        printf("%d nota(s) de R$ 100,00\n",d);
    }
    else
    {
        printf("%d nota(s) de R$ 100,00\n", d);
    }
    e=a-(d*100);
    f=e/50;
    if(f>0)
    {
        printf("%d nota(s) de R$ 50,00\n",f);
    }
    else {
        printf("%d nota(s) de R$ 50,00\n",f);
    }


    g=e-(f*50);
    h=g/20;
    if(h>0)
        {
        printf("%d nota(s) de R$ 20,00\n",h);
    }
    else {
        printf("%d nota(s) de R$ 20,00\n",h);
    }

    i=g-(h*20);
    j=i/10;
    if(j>0)
        {
        printf("%d nota(s) de R$ 10,00\n",j);
    }
    else
    {
        printf("%d nota(s) de R$ 10,00\n",j);
    }

    k=i-(j*10);
    l=k/5;
    if(l>0)
        {
        printf("%d nota(s) de R$ 5,00\n",l);
    }
    else
    {
        printf("%d nota(s) de R$ 5,00\n",l);
    }

    m=k-(l*5);
    n=m/2;
    if(n>0)
        {
        printf("%d nota(s) de R$ 2,00\n",n);
    }
    else
    {
        printf("%d nota(s) de R$ 2,00\n",n);
    }


//Floating number only 1//
    printf("MOEDAS:\n");
    o=m-(n*2);
    printf("%d moeda(s) de R$ 1.00\n",o);


//calculation 2//

    a1=a-d*100-f*50-h*20-j*10-l*5-n*2;
    printf("%.3f\n",a2);
    a2=a1*100;

    a3=a2/50;
    if(a3>0)
    {
        printf("%d moeda(s) de R$ 0.50\n",a3);
    }
    else {
        printf("%d moeda(s) de R$ 0.50\n",a3);
    }


    a4=a2-(a3*50);
    a5=a4/25;
    if(a5>0)
        {
        printf("%d moeda(s) de R$ 0.25\n",a5);
    }
    else {
        printf("%d moeda(s) de R$ 0.25\n",a5);
    }

    a6=a4-(a5*25);
    a7=a6/10;
    if(a7>0)
        {
        printf("%d moeda(s) de R$ 0.10\n",a7);
    }
    else
    {
        printf("%d moeda(s) de R$ 0.10\n",a7);
    }

    a8=a6-(a7*10);
    a9=a8/5;
    if(a9>0)
        {
        printf("%d moeda(s) de R$ 0.05\n",a9);
    }
    else
    {
        printf("%d moeda(s) de R$ 0.05\n",a9);
    }

    a10=a8-(a9*5);
    a11=a10/2;
    if(a11>0)
        {
        printf("%d nota(s) de R$ 0.01\n",a11);
    }
    else
    {
        printf("%d nota(s) de R$ 0.01\n",a11);
    }
    }
  return 0;
}
