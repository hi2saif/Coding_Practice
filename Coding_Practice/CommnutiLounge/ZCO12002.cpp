#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;


bool Interval(vector<int>x , vector<int>y)
{
    return (x[0] < y[0]);

}

int main(){

    long int i,j,k,test,n,x,y,start,end1,num,num1,max1=INT_MAX;
    vector<vector<long int>>a;
    vector<long int>b;
    vector<long int>c;
    vector<long int>d;
    cin>>test>>x>>y;
    for(i=0;i<test;i++){
        b.clear();
        cin>>start>>end1;
        b.push_back(start);
        b.push_back(end1);
        a.push_back(b);
    }
    sort(a.begin(),a.end(),Interval);
    for(j=0;j<x;j++){
        cin>>num;
        c.push_back(num);
    }
    for(k=0;k<y;k++){
        cin>>num1;
        d.push_back(num1);
    }
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    //cout<<a[0][0]<<a[1][0]<<a[2][0];
    vector<long int>::iterator it1 = c.begin();
    vector<long int>::iterator it2 = d.begin();
    //cout<<c[0];
    //cout<<d[0];
    for(long int k1=0;k1<test;k1++){
       it1=upper_bound(c.begin(),c.end(),a[k1][0]);
       it1--;
       it2=upper_bound(d.begin(),d.end(),a[k1][1]-1);
       if(*it2>*it1){
        int sum = *it2-*it1+1;
        if(sum<max1){
            max1=sum;
        }
       }
    }
    cout<<max1<<"\n";
}
