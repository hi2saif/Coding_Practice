/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int i,j,k,m,n,o,x;
    vector<int> a;
     vector<int> b;
    cin>>m>>n>>o;
    int total=m+n+o;
    for(i=0;i<total;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    //cout<<a[0];
    if(a[0]==a[1]){
        b.push_back(a[0]);
    }
    for(j=1;j<total-1;j++){
        if(a[j-1]!=a[j] && a[j]==a[j+1]){
        	b.push_back(a[j]);
        }
    }
   // if(a[j]!=a[j-1]){
        //cout<<a[j]<<" ";
   // }
   cout<<b.size()<<"\n";
   	for(k=0;k<b.size();k++){
   		cout<<b[k]<<"\n";
   }
}*/

