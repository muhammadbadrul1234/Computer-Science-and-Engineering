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
const int NN = 1e6;
bool Prime[NN];
vector <int> primes;
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }return true;
}
void sieve() {
    Prime[0] = Prime[1] = 1;
    for (int i = 2; i < NN / i; i += 1 + (i % 2))
        if (Prime[i] == 0) {
            primes.push_back(i);
            for (int j = i * i; j < NN; j += i)
                Prime[j] = 1;
        }
}
int main() {
  sieve();
  int n , k , result ;
  cin >> n >> k ;
  int c=0;
  for ( int i = 0 ; i < (primes.size()-1) ; i ++ ) {
      result = primes[i]+primes[i+1]+1 ;
      if(isPrime(result) && result <= n){ 
          c++;
      }
  }
      if ( c >= k){
          cout << "YES" << endl;
      }
      else
      cout << "NO" << endl ;
 
  
    return 0;
}