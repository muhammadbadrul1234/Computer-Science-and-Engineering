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
int main()
{


    int n;
    char c;
    
    cin >> n >> c;

    if(n>=1 && n<=2 && c=='A' || c=='D' )
    {

        cout<<"window";

    }
    else if(n>=21 && c=='F' || c=='F')
    {
        cout<<"neither";
    }
    else if(n>=3 && n<=20 && c=='A' || c=='F' )
    {
        cout<<"window";
    }
    else if(n>=21 && n<=65 && c=='A' || c=='K')
    {
        cout<<"window";
    }
    else if(n>=1 && n<=2 && c=='B' || c=='D')
    {
        cout<<"aisle";
    }

    else if(n>=3 && n<=20 && c=='B' || c=='C'  || c=='D' || c=='E')
    {
        cout<<"aisle";
    }

    else if(n>=21 && n<=65 && c=='C' || c=='D' || c=='G' || c=='H')
    {
        cout<<"aisle";
    }

    else {
        cout<<"neither" << endl;;
    }

}