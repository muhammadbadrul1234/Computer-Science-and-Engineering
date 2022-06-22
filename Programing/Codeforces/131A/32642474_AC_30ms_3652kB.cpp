#include<bits\stdc++.h>
using namespace std;
int main()
{
    string b;
    int sum=0;
    cin>>b;
    for(int i=0;b[i]!='\0';i++){
        if(b[i]>=97 && b[i]<=122){
            sum++;
        }
    }if(sum==0){
        for(int i=0;b[i]!='\0';i++){
            b[i]+=32;
        }cout<<b;
    }else if(islower(b[0]) && sum==1){
            for(int i=0;b[i]!='\0';i++){
            if(b[i]>=65 && b[i]<=90){
                b[i]+=32;
            }if(b[0]>=97 && b[i]<=122)
            {
                b[i]-=32;
            }
            }
            cout<<b;
        }
    else
    {
        cout<<b;
    }
       return 0;
 
}