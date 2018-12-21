#include <stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	//code
	int test,i,j,k,n,x,k1;
	cin>>test;
	vector<int>a;
	for(i=0;i<test;i++){
	    cin>>n;
	    a.clear();
	    for(j=0;j<(2*n+2);j++){
	        cin>>x;
	        a.push_back(x);
	    }
	    int xr=a[0];
	    for(k=1;k<n;k++){
	        xr=xr^a[k];
	    }
	    int set_bit= xr & ~(xr-1);
	    int left=0,right=0;
	    for(k1=0;k1<(2*n+2);k1++){
	        if(a[k1]&set_bit)
	            left = left ^ a[k1];
	       else
	            right = right ^ a[k1];
	    }
	    cout<<left<<" "<<right;
	    cout<<"\n";
	}
	return 0;
}
