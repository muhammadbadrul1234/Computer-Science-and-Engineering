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
        int n;
        cin>>n;
        int arr[n];
        fl(i,n)cin>>arr[i];
        int ans=0;
        int pointer=0;
        int x;
        fl(i,n){
            if(arr[i]==2)ans+=1;
            //cout<<pointer<<endl;

        }

        fl(i,n){
            if(arr[i]==2){pointer+=1;
                if(pointer==ans/2){
                    x=i+1;
                    break;
                }
            }
        }
          
        if(ans%2==0 && ans!=0)
        cout<<x<<endl;
        else if (ans==0)
        cout<<"1"<<endl;
        else
        cout<<"-1"<<endl;
        
    }
void_return
}
/*
7
2222221
*/