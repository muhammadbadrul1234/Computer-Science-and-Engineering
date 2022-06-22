/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main(){
    int S, T, X;
    scanf("%d %d %d", &S, &T, &X);
    if(S == 0) S = 24;
    if(T == 0) T = 24;
    if(X == 0) X = 24;
    float giv = (X+0.5);
    int max, min;

    if(S>T){
        if((giv>=1) && (giv<=T)) printf("Yes");
        else if((giv>=S) && (giv<=24)) printf("Yes");
        else printf("No");
    }
    else if(T>S){
        max = T; min=S;
        if((min<=giv) && (giv<=max)) printf("Yes");
        else printf("No");
    }
    return 0;
}