#include<bits/stdc++.h>
using namespace std;
void insSort(int lst[], int n){
    for(int i=1; i<n; i++){
        int tpp = lst[i];
        int position = i-1;
        while(position>=0 && lst[position] > tpp){
            lst[position+1] = lst[position];
            position--;
        }
        lst[position+1] = tpp;

    }
}
void mrgLIST(int lst[], int left, int mid, int right)
{
    int t1 = mid - left + 1;

    int t2 = right - mid;

    int list1[t1], list2[t2];

    for (int i = 0; i < t1; i++) list1[i] = lst[left + i];

    for (int i = 0; i < t2; i++) list2[i] = lst[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while(i < t1 && j < t2){

        if (list1[i] <= list2[j]) {

            lst[k] = list1[i];

            i++;
        }
        else {

            lst[k] = list2[j];

            j++;
        }
        k++;
    }
    while(i < t1){

        lst[k] = list1[i];

        i++;

        k++;
    }
    while (j < t2) {

        lst[k] = list2[j];

        j++;

        k++;
    }
}

void mrgSort(int lst[],int left,int right){
    if(left>=right) return;

    int mid =left+ (right-left)/2;

    mrgSort(lst,left,mid);
    mrgSort(lst,mid+1,right);
    mrgLIST(lst,left,mid,right);

}

int div(int lst[], int left, int right)
{
    int pivot = lst[right];

    int i = (left - 1);

    for (int j = left; j <= right- 1; j++){
        if (lst[j] <= pivot){
            i++;
            swap(lst[i], lst[j]);
        }
    }
    swap(lst[i + 1], lst[right]);
    return (i + 1);
}

void qckSort(int lst[], int left, int right){
    if(left>=right) return;
    int tpp = div(lst, left, right);
    qckSort(lst, left, tpp - 1);
    qckSort(lst, tpp + 1, right);
}

void Display(int lst[], int n){
    for(int i=0; i<n; i++) cout << lst[i] << " ";
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
        for(int i=0; i<n; i++) scanf("%d",&lst[i]);
        puts("Press 1: Insertion Sort");
        puts("Press 2: Merge Sort");
        puts("Press 3: Quick Sort");
        puts("Press 4: Exit");

        int CHOICE;
        printf("Please Choose your CHOICE: ");
        scanf("%d",&CHOICE);

        if(CHOICE==1){
            insSort(lst, n);

            cout << "By using Insertion Sort, Sorted List: ";

            Display(lst, n);
        }
        else if(CHOICE==2){
            mrgSort(lst, 0, n-1);

            cout << "By using Merge Sort, Sorted List: ";

            Display(lst, n);
        }
        else if(CHOICE==3){
            qckSort(lst, 0, n-1);

            cout << "By using Quick Sort, Sorted List: ";

            Display(lst, n);
        }
        else if(CHOICE==4){
            puts("Program Terminated");
            break;
        }
        else puts("Invalid Choice\nTry Again.");

    }

    return 0;
}
