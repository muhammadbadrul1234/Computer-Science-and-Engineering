//LabTask2: Divide and Conquer
//MD.BADRUL ALOM TAWSYAT
//ID;2012020216
#include<bits\stdc++.h>
void merging(int low,int mid,int high);
void sort(int low, int high);
int brr[a];
           int low,mid,high;
           int l1, l2, i;
           for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=high;i++){
                if(arr[l1]<=arr[l2])
                    brr[i]=arr[l1++];
                else
                    brr[i]=arr[l2++];
            }while(l1 <= mid)
            brr[i++] = arr[l1++];
            while(l2 <= high)
                brr[i++] = arr[l2++];
            for(i = low; i <= high; i++)
                arr[i] = brr[i];
int main(){
    int a,b;
    printf("Enter Array Size:");
    scanf("%d",&a);
    int arr[a];
    printf("Array Values: ");
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    while(1){
            printf("\nPress 1: Merge Sort\nPress 2: Quick Sort\nPress 0: Exit\n");//2012020216
            printf("Choose your option: ");
            int badrul;
            scanf("%d",&badrul);
//Merge Sort







   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else {
      return 0;
   }

   printf("List before sorting\n");

   for(i = 0; i <=a; i++)
      printf("%d ", arr[i]);

   sort(0, a);

   printf("\nList after sorting\n");

   for(i = 0; i <= a; i++)
      printf("%d ", arr[i]);
}
}




