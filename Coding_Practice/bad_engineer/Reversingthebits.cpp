/*#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int main(){

    int i,j,k,x,n,num=0;
    cin>>n;
    vector<int>a;
    cout<<"The Original number is: "<<n;
    cout<<"\n";
    while(n!=0){
        x = n & 1;
        n= n>>1;
        a.push_back(x);
    }
    cout<<"The original number in bits :";
    for(i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<"\n";
      k=0;
      cout<<"The reversed number in bits :";
   for(j=a.size()-1;j>=0;j--){
    num = num + pow(2,k)*a[j];
    cout<<a[k];
    k++;
   // cout<<num;
   }
   cout<<"\n";
   cout<<"The reversed number is: "<<num;
}
*/
