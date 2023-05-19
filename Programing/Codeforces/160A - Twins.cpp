#include<bits\stdc++.h>
using namespace std;
int main(){
    int a,b,e,sum=1,sum2=1;
    scanf("%d",&a);
    int arr[a];
    scanf("%d",arr[a]);
    if(a<2){
        printf("1\n");
    }
    else{
        for(int i=0;i<a;i++){
            if(arr[i]>a){
                printf("1\n");
            }else{
                if(a%2==0){
                        sum+=(a/2);
                printf("%d\n",sum);
                }
                else{
                    sum2+=(a/2);
                printf("%d\n",sum2);

                }
                }break;
                }
}
}
