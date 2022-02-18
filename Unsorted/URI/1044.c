#include<stdio.h>
#include<math.h>
int main(){
    int a,b,x;
    float c;
    scanf("%d%d", &a,&b);
    c=b/a;
    x=ceil(c);

    if((x-(int)x)==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
