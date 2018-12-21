
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int main() {
	//code
	int i,j,k,test,n,m,x;
	vector<int>a;
	cin>>test;
	int max_so=0;
	int max_crr=0;
	for(i=0;i<test;i++){
	    cin>>n>>m;
	    int start=0,end=0;
	    max_so=0;
	    max_crr=0;
	    a.clear();
	    for(j=0;j<n;j++){
	        cin>>x;
	        a.push_back(x);
	    }
	    max_crr=a[0];

	    for(j=1;j<=n;j++){
	        while(max_crr>m && start<j-1){
	            max_crr = max_crr - a[start];
	            start++;
	        }
	        if(max_crr==m){
	            end=j-1;
	        }
	        if(j<n)
	            max_crr = max_crr + a[j];
	    }

	    cout<<start-1<<" "<<end<<"\n";
	}

}
