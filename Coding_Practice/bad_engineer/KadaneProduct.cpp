/*#include<iostream>
#include<vector>
using namespace std;

int main(){

    int i,j,k,n,test,max_far=-10000,max_end=1,j1;
    vector<int> a;
    cin>>test;
    for(j=0;j<test;j++){
   cin>>n;
   a.clear();
for(i=0;i<n;i++){
    cin>>j1;
    a.push_back(j1);
}
    for(k=0;k<n;k++){
        max_end=max_end*a[k];
        if(max_far<max_end){
            max_far=max_end;
        }
        if(max_end<0){
            max_end=1;
        }
    }

cout<<max_far<<"\n";
}
}
*/
