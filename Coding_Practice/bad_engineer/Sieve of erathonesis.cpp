/*#include<string.h>
#include <iostream>
#include<math.h>
using namespace std;


void se(int n){

    int i,j,k,sum=0;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(i=2;i<=sqrt(n);i++){
        if(prime[i]==true){
            for(j=2;i*j<=n;j++){
                prime[i*j]= false;
               // cout<<"asdas "<<prime[i*j]<<" ";
            }
        }
    }
    //cout<<prime[4];
    for(k=2;k<=n;k++){
        if(prime[k]){
           // cout<<k<<" ";
            sum =sum +1;
        }
    }
    cout<<"The Number of Prime Numbers are : "<<sum;
}

int main(){

int n=1000000;
se(n);
return 0;
}*/
