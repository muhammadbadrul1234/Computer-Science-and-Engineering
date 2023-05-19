/******************************************************************************
Md. Badrul Alom Tawsyat
badrulalomtawsyat@gmail.com
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main(){
    int c=-1;
    char str[100],ch;
    int i,j,l;
    fgets(str, sizeof str, stdin);
    l=strlen(str);
    for(i=1;i<l;i++){
    for(j=0;j<l-i;j++)
	if(str[j]>str[j+1]){
	  ch=str[j];
	  str[j] = str[j+1];
	  str[j+1]=ch;
	}
    }
    for(int k=0;k<l;k++){
        if(str[k]!=str[k+1]){
            c++;
        }
   // printf("%d",c);
   
   //printf("%s\n",str);

    }if(c%2==0){
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!");
    }
 
}