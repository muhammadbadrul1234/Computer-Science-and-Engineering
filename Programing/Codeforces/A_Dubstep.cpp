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
    string s;
    string st=" ";
    cin>>s;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s.erase(i,3);
            s.insert(i,st);
        }
    }
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]==' ' && s[i+1]==' '){
            s.erase(i,2);
            s.insert(i,st);
        }
    }
    cout<<s<<endl;

return 0;
}