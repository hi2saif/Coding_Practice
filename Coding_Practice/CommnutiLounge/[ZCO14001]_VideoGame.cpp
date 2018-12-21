/*#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,h,i,j,crane=0,take=0,x,k;
    vector<int>a;
    cin>>n>>h;
    for(i=0;i<n;i++){
            cin>>x;
        a.push_back(x);
    }
    crane=0;
    take=0;
    cin>>j;
    while(j!=0){
        if(j==1){
            if(crane!=0){
                crane=crane-1;
            }
        }
        if(j==2){
            if(crane!=n-1){
                crane=crane+1;
            }
        }
        if(j==3){
            if(take==0 && a[crane]>0){
                take=1;
                a[crane]=a[crane]-1;
            }
        }
        if(j==4){
            if(take==1 && a[crane]<h){
                take=0;
                a[crane]=a[crane]+1;
            }
        }
        cin>>j;
       // if(j==0){
       //     return 0;
       // }
    }
    for(i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
}*/
