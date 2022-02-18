#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<6;i++){
        if(s[2]==s[3] && s[4]==s[5])
            c++;
    }if(c>0){
        cout<<"Yes"<<endl;
    }else{
       cout<<"No"<<endl; 
    }
    
}