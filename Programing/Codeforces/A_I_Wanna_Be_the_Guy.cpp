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
    int a,b,c,d,e,p,q,sum=0,sum1=0,cn=0;
    cin>>a;
    int x[a*2];
    cin>>p;
    int i,j;
    for( i = 0 ; i < p ; i++){
        /* code */
        cin>>x[i];
    }
    cin>>q;
        for(j = 0 ; j <q ;j++, i++){
        /* code */
        cin>>x[i];
    }
    for ( j=1; j<=a; j++){
      for ( i=0; i<(p+q); i++)
      {
          if( j==x[i]){ cn++; break;}
      }
      

  }
  if ( cn==a) cout<<"I become the guy."<<endl;
      else cout<<"Oh, my keyboard!"<<endl;


return 0;
}