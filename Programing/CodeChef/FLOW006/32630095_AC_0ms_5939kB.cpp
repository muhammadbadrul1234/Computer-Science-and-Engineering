#include<iostream>
using namespace std;
int main()
{
    int number1,n;
    scanf("%d",&number1);
    for(int i=1; i<=number1; i++)
    {
        scanf("%d",&n);
        int sum=0;
        while(n!=0)
        {
            sum +=n% 10;
            n=(n/10);
        }
        printf("%d\n",sum);
    }

    return 0;

}
