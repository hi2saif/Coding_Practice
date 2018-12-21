#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	int i,j,k,test,n,m,x;
	cin>>test;
	vector<int>b;
	vector<vector<int>>a;
	for(i=0;i<test;i++){
	    cin>>n;
	    a.clear();
	    b.clear();
	    for(j=0;j<n;j++){
	        b.clear();
	        for(k=0;k<n;k++){
	            cin>>x;
	            b.push_back(x);
	        }
	        a.push_back(b);
	    }
	}
	for(i=n-1;i>=0;i--){
	    for(j=0;j<n;j++){
	        cout<<a[j][i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
