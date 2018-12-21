#include<iostream>
#include<vector>
using namespace std;

int main(){

    int test,n,i,j,k;
    vector<int>a;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
        }
    for(k=0;k<n;k++){
        if(k%2==0){
                if(a[k]%2!=0){
                    flag=1;
                    if(a[k]>1){
                        a[k] = a[k]-1;
                        count1++;
                    }
                }
        }else{
                if(a[k]==0){
                    flag=1;
                    if(a[k]>1){
                        a[k]=a[k]-1;
                        count1++;
                    }
                }
        }

    }



    }

}
