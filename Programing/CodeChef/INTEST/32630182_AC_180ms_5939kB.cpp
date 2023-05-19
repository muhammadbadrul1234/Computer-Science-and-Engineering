#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int a,b,c=0,d;
    scanf("%d%d",&a,&b);
    for(int i=1; i<=a; i++){
        scanf("%d",&d);
        if(d%b==0){
            c++;
        }
    }printf("%d\n",c);
    return 0;
}