#include <stdio.h>
int main()
{
   char s[100];
   char t[100];
   scanf("%s%s",&s,&t);
   strrev(s);
   int c=strcmp(s,t);
   if(c==0){
    printf("YES\n");
   }
   else{
       printf("NO\n");
   }
   return 0;
}
