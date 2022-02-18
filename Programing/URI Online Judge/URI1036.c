#include<stdio.h>
int main(){
    float a,b,c,m,n,o,p,q,r,s,t,z;
    scanf("%f%f%f", &a,&b,&c);
    m=b*b;
    n=4*a*c;
    o=2*a;
    z=m-n;
    p=sqrt(z);
    q=-b+p;
    r=-b-p;
    s=q/o;
    t=r/o;

    if((a>0) && (b>0) && (c>0) && (z>=0)){
        printf("R1 = %.5f\n",s);
        printf("R2 = %.5f\n",t);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;

}
