#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
	    int a,sum=0;
	    cin>>a;
	    long long int num,minn=INT_MAX;
	    for(int j=0;j<a;j++){
	        cin>>num;
	        minn=min(num,minn);
	    }cout<<minn*(a-1)<<endl;
	}return 0;
}
