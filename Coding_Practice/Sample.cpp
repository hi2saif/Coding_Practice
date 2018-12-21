/*#include <stdio.h>
#include<iostream>
#include <algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int i,j,k,test,n,x,min1=100000;;
	vector<int>arr;
	cin>>test;
	for(i=0;i<test;i++){
	    cin>>n;
	    min1=100000;
	    for(j=0;j<n;j++){
	        cin>>x;
	        arr.push_back(x);
	    }
	    sort(arr.begin(),arr.end());
        for(k=1;k<n;k++){
            if((arr[k]-arr[k-1])<min1){
                min1=arr[k]-arr[k-1];
            }
        }
        cout<<min1<<"\n";
	}
	return 0;
}
*/
