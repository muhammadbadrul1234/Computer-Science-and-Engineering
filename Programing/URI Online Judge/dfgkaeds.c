#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int x=a; x<=a+12; x+12){
        if(x%2==1){
          printf("%d\n", x);
        }

    }
    return 0;
}
