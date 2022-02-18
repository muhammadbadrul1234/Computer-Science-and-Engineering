#include <stdio.h>
#include <string.h>

int main () {
   char string[1000];
   char temp;

   int i, j;
   int n = strlen(string);

   scanf("%s",string);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }

   printf("%s\n", temp);
}
