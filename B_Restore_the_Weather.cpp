#include <bits/stdc++.h>
using namespace std;
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
        int x, y;
        cin>>x>>y;
        int arr1[x], arr2[x],arr3[x],arr4[x];
        for(int i=0;i<x;i++){
            cin>>arr1[i];
            arr3[i]=arr1[i];
        }
        for(int i=0;i<x;i++){
            cin>>arr2[i];
            //arr4[i]=arr2[i];
        }
        sort(arr1,arr1+x);
        sort(arr2,arr2+x);
        cout<< "TC 1 :" <<endl;
        cout<< "Array 1: " <<endl;
        for(int i=0;i<x;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        cout<< "Array 2 : " <<endl;
        for(int i=0;i<x;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        cout<< "Array 3 : " <<endl;
        for(int i=0;i<x;i++){
            cout<<arr3[i]<<" ";
        }
        cout<<endl;
        cout<< "Array 4 : " <<endl;
        for(int i=0;i<x;i++){
            cout<<arr4[i]<<" ";
        }
        cout<<endl;

        for(int i = 0 ; i < x ; i++){
            for(int j =0 ; j < x ; j++){
                if(arr3[i]==arr1[j]) {
                    arr4[j]=arr2[i];
                    //cout<< arr4[j] <<" ";
                   
                }
                
            }
            
        }
        // for(int i=0;i<x;i++){
        //     cout<<arr4[i]<<" ";
        // }
        // cout<<endl;
        //cout<< "Final Result: " <<endl;
        //cout<< "Array 4 : " <<endl;
        for(int i=0;i<x;i++){
            cout<<arr4[i]<<" ";
        }
        cout<<endl;
 
        
    }
void_return
}

// -1 3 -2 0 -5 -1

// 0 4 -1 0 -4 0
// -5 -2 -1 -1 0 3
// -4 -1 0 0 0 4





// -4 0 -1 4 0 0