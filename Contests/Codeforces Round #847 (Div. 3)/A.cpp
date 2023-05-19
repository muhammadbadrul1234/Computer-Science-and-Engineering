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
    string s="3141592653589793238462643383279502884197169399375105820974944592";
    cin>>a;
    //string s1="0000000000000000000000000000000000000000000000000000000000000000";
    while(a--){
        string x;
        cin>>x;
        //match the string serially
        int i=0;
        for(int j=0;j<x.size();j++){
            if(x[j]!=s[j]){
                //s1[j]=0;
                break;
        
            }
            else {
                
                i++;
            }
        }
        cout<< i <<endl;

        // for(int j=0;j<x.size();j++){
        //     if(x[j]!=s[j])continue;
        //     else i++;
        // }
        // cout<< i <<endl;
        // i==0;
        
    }
void_return
}


// 9
// 000
// 3
// 4141592653
// 141592653589793238462643383279
// 31420
// 31415
// 314159265358
// 27182
// 314159265358979323846264338327