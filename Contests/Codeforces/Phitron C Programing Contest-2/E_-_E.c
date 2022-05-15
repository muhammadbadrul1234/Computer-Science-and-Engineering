/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main() {
    int A, B, C, D, E, F, X;
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    int t = A+C;
    int Calc = X/t;
    int rem = X%t;
    if (rem>A)  {
        rem = A;
    }
    int Takashi = ((Calc*A*B) + (rem*B));

    int t2 = D+F;
    int Calc2 = X/t2;
    int rem2 = X%t2;
    if (rem2>D)  {
        rem2 = D;
    }
    int Aoki = ((Calc2*D*E) + (rem2*E));

    if (Takashi>Aoki) printf("Takahashi");
    else if (Aoki>Takashi) printf("Aoki");
    else printf("Draw");

return 0;
}