/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int i,j,k,test,n,m=1,x,sum=0,flag=0;
    vector<int>a;
    cin>>n>>k;
    a.clear();
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int left=0;
    int right=1;
    while(right<n){
        if(a[right]-a[left]>=k){
            sum = sum + (n-right);

            left++;
        }
        else{
            right++;
        }
    }

    cout<<sum;

    return 0;
}
*/
