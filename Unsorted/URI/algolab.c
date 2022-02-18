#include<stdio.h>
int main(){
    int a,b,x,j,n,temp,pos,sum=0;
    printf("Enter Array Size:");
    scanf("%d",&a);
    int arr[a];
    printf("Enter Array Values: ");
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }printf("Searching data: ");
    scanf("%d", &x);
    while(1){
            printf("\nPress 1: Sequential Search\nPress 2: Binary Search\nPress 3: Comparison Report\nPress 4: Exit\n");//2012020216
            printf("Choose your option: ");
            int badrul;
            scanf("%d",&badrul);
//Sequential Search
            if(badrul==1){
                    for(j=0;j<a;j++){
                        if(arr[j]==x)
                        break;
                        }printf("Data %d is found after %d times checking.\n",x,j+1);
//Insertion Sort and Binary Search
            }else if(badrul==2){
                //Insertion sort
                for(int i=1;i<a;++i){
                    temp=arr[i];
                    pos=i;
                    while(pos>0 && arr[pos-1]>temp){
                        arr[pos]=arr[pos-1];
                        pos--;
                    }arr[pos]=temp;
                }printf("According to the Insertion sort, sorted data: ");
                for(int i=0;i<a;i++)
                printf("%d ",arr[i]);
                //Binary Search
                int first,last,mid;
                first=0;
                last=a-1;
                while(first<=last){
                        mid=(first+last)/2;
                        if(arr[mid]==x){
                            sum++;
                            printf("\nData %d is found after %d times checking.\n",x,sum);
                            break;
                        }else if(x>arr[mid]){
                            first=mid+1;
                            sum+=first;
                        }else if(x<arr[mid]){
                            last=mid-1;
                            sum+=last;
                        }
                }
//Comparison Report
            }else if(badrul==3){
                if(sum<j+1){
                    printf("Binary Search has taken less steps than sequential search to find the result.\n");
                }else if(sum==j+1){
                    printf("Both Binary Search & sequential search  has taken same steps to find the result.\n");
                }else{
                    printf("Binary Search has taken more steps than sequential search to find the result.\n");
                }
            }else if(badrul==4){
                printf("Program Terminated.\n");
                exit(0);
            }
            else{

            }

    }return 0;
}



