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
    string s;
    int a;
    cin>>a;
    while(a--){
        cin>>s;
            /* code */
            int num = stoi(s);
            int num1=num/100000,
                num2=num%100000/10000,
                num3=num%100000%10000/1000,
                num4=num%100000%10000%1000/100,
                num5=num%100000%10000%1000%100/10,
                num6=num%100000%10000%1000%100%10,
                condition1=num1+num2+num3,
                condition2=num4+num5+num6;
            if(condition1==condition2)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
    }
void_return
}