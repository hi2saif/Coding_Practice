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
                t[v] = min(t[v],1+t[v-b[c]]);
                r[v]=c;
            }
        }
    }
    return t[total];
}

int numberchange(vector<int>b1,int sum1){

int coin[b1.size()][sum1+1];
int q,w,e;
for(e=0;e<=sum1;e++){
    coin[0][e]=1;
}
for(q=1;q<b1.size();q++){
    for(w=0;w<=sum1;w++){
        if(w==0)
            coin[q][w]=1;
        else if(w>=b1[q]){
            coin[q][w]= coin[q-1][w] + coin[q][w-b1[q]];
        }else{
        	coin[q][w] = coin[q-1][w];
        }
    }
}

return coin[b1.size()-1][sum1];
}
int main() {
	//code
	int test,i,j,k,x,n,sum;
	vector<int>a;
	cin>>test;
	for(i=0;i<test;i++){
	    cin>>n;
	    for(j=0;j<n;j++){
	        cin>>x;
	        a.push_back(x);
	    }
	    cin>>sum;
	    int ans=numberchange(a,sum);
	    cout<<ans;
	}
	return 0;
}

