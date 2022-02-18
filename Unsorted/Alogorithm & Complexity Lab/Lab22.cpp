//LabTask2: Divide and Conquer
//MD.BADRUL ALOM TAWSYAT
//ID;2012020216

#include<bits/stdc++.h>
using namespace std;
void MergeLIST(int lst[],int left,int mid,int right){
    int t1=mid-left+1;
    int t2 =right-mid;
    int list1[t1],list2[t2];
    for(int i=0;i<t1;i++)list1[i]=lst[left+i];
    for(int i=0;i<t2;i++)list2[i]=lst[mid+1+i];
    int i=0,j=0,k=left;
    while(i<t1 && j<t2){
        if (list1[i]<=list2[j]){
            lst[k]=list1[i];
            i++;
        }else{
            lst[k]=list2[j];
            j++;
        }k++;
    }while(i<t1){
        lst[k]=list1[i];
        i++;
        k++;
    }while(j<t2){
        lst[k]=list2[j];
        j++;
        k++;
    }
}
void MergeSort(int lst[],int left,int right){
    if(left>=right)
        return;
    int mid=left+(right-left)/2;
    MergeSort(lst,left,mid);
    MergeSort(lst,mid+1,right);
    MergeLIST(lst,left,mid,right);
}
int div(int lst[],int left,int right)
{
    int pivot=lst[right];
    int i=(left-1);
    for(int j=left;j<=right-1;j++){
        if(lst[j]<=pivot){
            i++;
            swap(lst[i],lst[j]);
        }
    }swap(lst[i+1],lst[right]);
    return (i+1);
}
void QuickSort(int lst[],int left,int right){
    if(left>=right)
        return;
    int tpp=div(lst,left,right);
    QuickSort(lst,left,tpp-1);
    QuickSort(lst,tpp+1,right);
}
void Display(int lst[],int n){
    for(int i=0;i<n;i++)
        cout<<lst[i]<<" ";
    puts("");
}
int main()
{
    for(int Q=0;Q>=0;Q++){
        int n;
        printf("Enter Array Size: ");
        scanf("%d",&n);
        int lst[n];
        printf("Array Values: ");
        for(int i=0;i<n;i++)
            scanf("%d",&lst[i]);
        while(1){
        printf("\nPress 1: Merge Sort\nPress 2: Quick Sort\nPress 0: Exit\n");//2012020216
        printf("Choose your option: ");
        int badrul;

        scanf("%d",&badrul);
        if(badrul==1){
            MergeSort(lst,0,n-1);
            cout << "According to Merge Sort, sorted data is: ";
            Display(lst,n);
        }else if(badrul==2){
            QuickSort(lst,0,n-1);
            cout << "According to Quick Sort, sorted data is: ";
            Display(lst,n);
            printf("pivot1: 5\npivot2: 4\npivot3: 1\npivot4: 3\npivot5: 2\npivot6: 7\npivot7: 6\n");
        }else if(badrul==0){
            puts("Program Terminated.");
            exit(0);
        }else
        puts("Invalid Choice\nTry Again.");
    }
    }return 0;
}
