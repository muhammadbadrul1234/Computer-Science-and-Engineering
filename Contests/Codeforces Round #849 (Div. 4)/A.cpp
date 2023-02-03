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
    int j=0;
    string s="codeforces";
    while(a--){
        
        string s1;
        cin>>s1;
        for(int i = 0 ; i < 10 ; i++){
            if(s[i]==s1[0]){
               // cout<< "YES" <<endl;
                j+=1;
                //cout<< s[i] <<endl;
            }

        }
        //cout<< j <<endl;
        if(j>0) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
        j=0;
        
    }
void_return
}