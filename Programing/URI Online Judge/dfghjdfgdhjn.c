#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f", &a);
    printf("NOTAS:\n", a);
    printf("%f nota(s) de R$ 100.00\n",a/100);
    b=(a%100.00);
    printf("%f nota(s) de R$ 50.00\n",b/50);
    b=(a%50.00);
    printf("%f nota(s) de R$ 20.00\n",b/25);
    b=(a%25.00);
    printf("%f nota(s) de R$ 10,00\n",b/10);
    b=(a%10.00);
    printf("%f nota(s) de R$ 5,00\n",b/5);
    b=(a%5.00);
    printf("%f nota(s) de R$ 2,00\n",b/2);
    printf("MOEDAS:\n", a);
    b=(a%2.00);
    printf("%f moeda(s) de R$ 1.00\n",b/1);
    b=(a%1.00)
    printf("%f moeda(s) de R$ 0.50\n",b/.50);
    b=(a%.50);
    printf("%f moeda(s) de R$ 0.25\n",b/.25);
    b=(a%.25);
    printf("%f moeda(s) de R$ 0.10\n",b/.10);
    b=(a%.10);
    printf("%f moeda(s) de R$ 0.05\n",b/.05);
    b=(a%.05);
    printf("%f moeda(s) de R$ 0.05\n",b/.02);
    b=(a%.02);
    printf("%f moeda(s) de R$ 0.01\n",b/.01);

    return 0;

}


