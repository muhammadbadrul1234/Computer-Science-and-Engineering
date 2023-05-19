#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,d;
    cin>>n;
    while(n++){
        a=n/1000;
        b=(n-(a*1000))/100;
        c=(n-((a*1000)+(b*100)))/10;
        d=(n-((a*1000)+(b*100)+(c*10)));
        if(a==b || a==c ||a==d ||b==c ||b==d || c==d){

        }
        else{
            break;
        }
        }
    cout<<n<<endl;


    return 0;
}