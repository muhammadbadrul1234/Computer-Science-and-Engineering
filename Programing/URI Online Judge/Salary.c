#include <stdio.h>
int main() {
    double a;
    scanf("%lf",&a);
    int b=a;
    int c=(a-b)*100;
    if((c*1000)%10==9){
        c++;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",b/100);
    b=b%100;
    printf("%d nota(s) de R$ 50.00\n",b/50);
    b=b%50;
    printf("%d nota(s) de R$ 20.00\n",b/20);
    b=b%20;
    printf("%d nota(s) de R$ 10.00\n",b/10);
    b=b%10;
    printf("%d nota(s) de R$ 5.00\n",b/5);
    b=b%5;
    printf("%d nota(s) de R$ 2.00\n",b/2);
    printf("Moedas:\n");

    b=b%2;
    printf("%d moeda(s) de R$ 1.00\n",b/1);
    b=b%1;
    printf("%d moeda(s) de R$ 0.50\n",c/50);
    c=c%50;
    printf("%d moeda(s) de R$ 0.25\n",c/25);
    c=c%25;
    printf("%d moeda(s) de R$ 0.10\n",c/10);
    c=c%10;
    printf("%d moeda(s) de R$ 0.05\n",c/5);
    c=c%5;
    printf("%d moeda(s) de R$ 0.01\n",c/1);

    return 0;
}
