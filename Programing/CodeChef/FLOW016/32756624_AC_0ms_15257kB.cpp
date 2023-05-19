#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    while(n--){
        long long int a=0,b=0;
        cin>>a>>b;
        cout<<__gcd(a,b)<<" "<<((a*b)/__gcd(a,b))<<endl;
    }return 0;
}