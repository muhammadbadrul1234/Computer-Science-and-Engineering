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
int findMaxSoln(int n, int x, int y)
{
    // Stores the minimum solution
    int ans = INT_MIN;
 
    for (int k = 0; k <= n; k++) {
        if (k % x == y) {
            ans = max(ans, k);
        }
    }
    // Return the maximum possible value
    return (ans);
}
 
// Driver Code
int main()
{
    /* Muhammad Badrul Alom Tawsyat
    badrulalom.me
    CF Handle: Hellobadrul*/
    int a,b;
    cin>>a;
    ll n, x, y;
    while(a--){
        cin>> n>>x>>y;
        cout << findMaxSoln(n, x, y)<<endl;
    }
    return 0;

}
