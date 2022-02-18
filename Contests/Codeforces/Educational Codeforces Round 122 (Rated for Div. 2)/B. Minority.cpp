#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    string y;
    for (int i = 0; i < x; i++){
        
        cin>>y;
        int a=0,b=0;
        for(int j=0;j<y.size();j++){
            if(y[j]=='0')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<b<<endl;
        else if(a<b)
            cout<<a<<endl;
        else
            cout<<"0"<<endl;

    }
    
}
