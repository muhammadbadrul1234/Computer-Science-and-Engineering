#include<iostream>
using namespace std;
int main(){
    int a,b,l,f,num;
    scanf("%d\n",&a);
    for(int i=0; i<a; i++){
        int sum=0;
        scanf("%d", &num);
        l=num%10;
        f=num;
        while(num>=10){
            num=num/10;
        }f=num;
        sum=f+l;
        printf("%d\n",sum);
        }
    return 0;
}