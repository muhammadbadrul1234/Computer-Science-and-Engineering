#include<iostream>
using namespace std;
int main(){
    int d1,h1,m1,s1,d2,h2,m2,s2,x,y,z,z1,z2,z3,z4,z5,z6;

    scanf("%*s %d",&d1);
    scanf("%d%*s%d%*s%d", &h1,&m1,&s1);
    scanf("%*s %d",&d2);
    scanf("%d%*s%d%*s%d", &h2,&m2,&s2);
    x=(d1*24*3600)+(h1*3600)+(m1*60)+s1;
    y=(d2*24*3600)+(h2*3600)+(m2*60)+s2;
    z=y-x;
    z1=z/86400;
    printf("%d dia(s)\n", z1);
    z2=z-(z1*86400);
    z3=z2/3600;
    printf("%d hora(s)\n", z3);
    z4=z-(z1*86400)-(z3*3600);
    z5=z4/60;
    printf("%d minuto(s)\n", z5);
    z6=z-(z1*86400)-(z3*3600)-(z5*60);
    printf("%d segundo(s)\n", z6);
    return 0;

}
