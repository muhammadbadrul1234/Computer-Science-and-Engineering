/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>
int main(){
    int fib[5];
	fib[0] = fib[1] = 1;
for (int i=2; i<5; i++) {
fib[i] = fib[i-1]+fib[i-2];
}
printf("%d", fib[4]); 
}