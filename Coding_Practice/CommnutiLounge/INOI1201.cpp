#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Interval(vector<int>x,vector<int>y){

    return x[1]>y[1];
}


int main(){
    vector<vector<int>>a;
    vector<int>b;

    int i,j,k,n,max1=-99999,m1,m2,m3;
    cin>>n;
    for(i=0;i<n;i++){
        b.clear();
        cin>>m1>>m2>>m3;
        b.push_back(m1);
        int sum = m2 + m3;
        b.push_back(sum);
        a.push_back(b);
    }
    sort(a.begin(),a.end(),Interval);
    int sum = a[0][0] + a[0][1];
    if(sum>max1){
            max1=sum;
        }
    int prev = a[0][0];
    for(int k1=1;k1<n;k1++){
        sum = prev + a[k1][0] + a[k1][1];
        if(sum>max1){
            max1=sum;
        }
        prev = prev+ a[k1][0];
    }
    //sort(a.begin(),a.end(),Interval);
    //cout<<a[0][0];


    cout<<max1<<"\n";
    return 0;
}
