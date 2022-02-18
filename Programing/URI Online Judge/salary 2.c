#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,increase,salary;

    scanf("%f", &a);
    if(a>=0){
    if(a>=0 && a<=400.00){
        increase=a*.15;
        salary=a+increase;
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>=400.01 && a<=800.00){
        increase=a*.12;
        salary=a+increase;
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>=800.01 && a<=1200.00){
        increase=a*.10;
        salary=a+increase;
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>=1200.01 && a<=2000.00){
        increase=a*.07;
        salary=a+increase;
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 7 %%\n");
    }
    else if(a>=2000.01){
        increase=a*.04;
        salary=a+increase;
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 4 %%\n");
    }
    }
    return 0;
}

