#include<iostream>
using namespace std;
int main()
{
     int sum=0,sum1=0;
     string str;
     cin>>str;
     for(int i=0; str[i]!='\0'; i++)
     {
         if(str[i]=='A')
         {
             sum++;
         }
         if(str[i]=='B')
         {
             sum1++;
         }

     }
     if(sum==2 || sum1==2)
     {
         printf("Yes\n");
     }
      else
      {
          printf("No\n");
      }

    return 0;

}