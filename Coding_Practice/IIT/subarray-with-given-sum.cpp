/*
#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
int main() {
	//code
	int i,j,k,test,x,n,m,curr_sum,flag;
	vector<int>arr;
	cin>>test;
	for(i=0;i<test;i++){
	    cin>>n>>m;
	    curr_sum=0;
	    flag=0;
	    k=0;
	    arr.clear();
	    for(j=0;j<n;j++){
	        cin>>x;
	        arr.push_back(x);
	    }
	    int r=0;
	   for(k=0;k<=n;k++)
       {
            while(curr_sum>m && r < k){
                curr_sum=curr_sum-arr[r];
                r++;
            }
            if(curr_sum==m)
            {
                cout<<r+1<<" "<<k<<"\n";
                break;
            }
            curr_sum =curr_sum + arr[k];
	   }
        //cout<<r<<k;
// 42 468
//135 101 170 125 79 159 163 65 106 146 82 28 162 92 196 143 28 37 192 5 103 154 93 183 22 117 119 96 48 127 172 139 70 113 68 100 36 95 104 12 123 134


	}
	return 0;
}*/
