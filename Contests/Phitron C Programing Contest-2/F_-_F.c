/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>

int main(){
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++){
       // for(int j=0;j<b;j++){
            if(i%2==0){
                for(int j=0;j<b;j++)
                printf("#");
                sum++;
            }
            else if(sum==1){
                for(int x = 0 ; x < ((b-1)) ; x++){
                    printf(".");
                }
                printf("#");
                sum++;

            }
            else if(sum==3) {
                printf("#");
                for(int x = 0 ; x < ((b-1)) ; x++){
                    printf(".");
                }
                
                sum=0;

         //   }
            
        }   
  
    printf("\n");

    //printf("%d ",sum);
    }
    
        
}