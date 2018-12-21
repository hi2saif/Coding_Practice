/*#include <iostream>
#include<vector>
#include<limits>
#include<limits.h>
using namespace std;


int main(){
    int test,i,j,k,flag=0,x,n,m,max1=INT_MIN,min1=INT_MAX;
    vector<int>a;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n>>m;
        flag=0;
        a.clear();
        max1=INT_MAX;
        min1=INT_MIN;
        for(k=0;k<n;k++){
            cin>>x;
            a.push_back(x);
        }
        for(j=0;j<n-1;j++){
            if(a[j]>m && a[j]<max1){
                max1=a[j];
            }else if(a[j]<m && a[j]>min1){
               min1=a[j];
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES\n";

        }else
            cout<<"NO\n";
    }


}*/
