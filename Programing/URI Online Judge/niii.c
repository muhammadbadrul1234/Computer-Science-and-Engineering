#include<stdio.h>
int main()
{

   int a,N,b;
   scanf("%d",&a);

   N = a/100;
   b    = a -(N*100);

   printf("%d nota(s) de R$ 100,00\n",N);

   N = a/50;
   b    = a -(N*50);

   printf("%d nota(s) de R$ 50,00\n",N);



   N = a/20;
   b    = a -(N*20);

   printf("%d nota(s) de R$ 20,00\n",N);


   N = a/10;
   b    = a -(N*10);

   printf("%d nota(s) de R$ 10,00\n",N);


   N = a/5;
   b    = a -(N*5);

   printf("%d nota(s) de R$ 5,00\n",N);


   N = a/2;
   b    = a -(N*2);

   printf("%d nota(s) de R$ 2,00\n",N);

   N = a/1;
   b    = a -(N*1);

   printf("%d nota(s) de R$ 1,00\n",N);



    return 0;
}
