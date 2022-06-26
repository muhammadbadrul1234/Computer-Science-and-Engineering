#include <bits/stdc++.h>
using namespace std;
int* selection_sort(int array[], int n);
bool areSame(int a[],int n);
#define ll long long int
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define function int main()
#define void_return return 0;
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfl(i, n) for(int i=n-1;i>=0;i--)
#define fl(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }return true;
}
    /* Muhammad Badrul Alom Tawsyat
    badrulalom.me
    CF Handle: Hellobadrul*/
function{
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int c[b];
        for(int i = 0 ; i < b ; i++){
            /* code */
            cin>>c[i];
            //1212121
            //
        }
        int* c1 = selection_sort(c, b);
        if(areSame(c, b)) cout<<"0"<<endl;
        else{
            int count = 0;
            int x=c1[0];
            int y;
            for(int i = 1 ; i < b ; i++){
                /* code */
                y=c1[i]-x;
                count+=y;
            }
            cout<< count <<endl;
        }
        
        
    }
void_return
}

int* selection_sort(int array[], int n){
    int i, j, position, swap,count=0;
    for(i = 0; i < (n - 1); i++){
        position=i;
        for(j = i + 1; j < n; j++){
            if(array[position]>array[j])
                position=j;
            }
            if(position != i){
                swap=array[i];
                array[i]=array[position];
                array[position]=swap;
                count++;
            }
    }return array;
}
bool areSame(int a[],int n)
{
    unordered_map<int,int> m;
     
    for(int i=0;i<n;i++)
       m[a[i]]++;
      
    if(m.size()==1)
       return true;
    else
       return false;
}
