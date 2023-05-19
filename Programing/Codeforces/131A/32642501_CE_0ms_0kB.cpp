include<bits\stdc++.h>
using namespace std;
int main()
{
 
    string s;
    int c=0;
    cin>>s;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            c++;
        }
 
    }
    if(c==0)
    {
        for(int i=0; s[i]!='\0'; i++)
        {
            s[i]+=32;
        }
 
           cout<<s;
    }
 
    else if(islower(s[0]) && c==1)
        {
            for(int i=0; s[i]!='\0'; i++)
            {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]+=32;
            }
            if(s[0]>=97 && s[i]<=122)
            {
                s[i]-=32;
            }
            }
            cout<<s;
        }
    else
    {
        cout<<s;
    }
       return 0;
 
}