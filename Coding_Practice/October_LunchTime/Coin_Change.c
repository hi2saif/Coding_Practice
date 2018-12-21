#include <iostream>
#include <string>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int coinchange(vector<int>b,int total){
    int t[total+1];
    int r[total+1];
    int c,v,c1,v1;
    for(c1=0;c1<=total;c1++){
        t[c1]=INT_MAX-1;
        r[c1]=-1;
    }
    for(c=0;c<b.size();c++){
        for(v=0;v<=total;v++){
            if(v==0){
                t[v]=0;
            }
            if(v>=b[c]){
                t[v] = min(t[v],1+t[v-b[c]);
                r[v]=c;
            }
        }
    }
}


int main() {
	//code
	int test,i,j,k,x;
	vector<int>a;
	cin>>test;
	for(i=0;i<test;i++){
	    cin>>n;
	    for(j=0;j<n;j++){
	        cin>>x;
	        a.push_back(x);
	    }
	    cin>>sum;
	    ans=coinchange(a,sum);
	}
	return 0;
}
