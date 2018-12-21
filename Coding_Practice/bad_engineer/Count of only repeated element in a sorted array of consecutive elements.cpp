/*#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> a;
int n,i,j,x,k;
cin>>n;
int count1=0;
for(i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
}
for(j=0;j<n;j++){
    if(a[j]==a[j+1]){
            count1++;
            k=j+1;
        while(a[k]==a[j]){
            count1++;
            k++;
        }
        break;
    }
}

cout<<a[j]<<" "<<count1;

}*/
