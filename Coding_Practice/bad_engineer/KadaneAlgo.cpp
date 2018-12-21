/*#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;


int main(){

int i,j,k,n,test,max_far,max_end,j1;
vector<int> a;
cin>>test;
for(j=0;j<test;j++){
   cin>>n;
   a.clear();
for(i=0;i<n;i++){
    cin>>j1;
    a.push_back(j1);
}
max_far=a[0];
max_end=a[0];
for(k=1;k<n;k++){
    max_end=max(a[k],max_end+a[k]);
    max_far=max(max_end,max_far);
}
cout<<max_far<<"\n";
}
}
*/

