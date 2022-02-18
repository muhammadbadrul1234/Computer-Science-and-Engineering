#include<stdio.h>
int main()
{

    float X,Y,Z,x1,x2,y1,y2,Distance;

    scanf("%f%f",&x1,&x2);
    scanf("%f%f",&y1,&y2);

    X= (x2-x1)*(x2-x1);
    Y= (y2-y1)*(y2-y1);
    Distance=sqrt(X+Y);

    printf("%.4f\n",Distance);



    return 0;
}
