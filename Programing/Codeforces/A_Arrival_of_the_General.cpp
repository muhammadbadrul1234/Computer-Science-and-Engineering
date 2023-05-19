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
int main(){
    /* Muhammad Badrul Alom Tawsyat
    badrulalom.me
    CF Handle: Hellobadrul*/
    int n;
    int maxvalue=0;
    int minvalue=1000;
    int maxindex=0;
    int minindex=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    if(x>maxvalue){
        maxindex=i;
        maxvalue=x;
    }
    if(x<=minvalue){
        minindex=i;
        minvalue=x;
    }
    }
    //cout<<maxindex<<"   max"<<minindex<<"min\n";
    if(maxindex>minindex){
        cout<<(maxindex-1)+(n-minindex)-1;
    }
    else{
        cout<<(maxindex-1)+(n-minindex);

    }





        return 0;
    
}