
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main()
{
    int i,j,k,test,n,x,c;
        vector<int>arr;
        vector<int>arr2;
        cin>>test;
        for(i=0;i<test;i++){
            cin>>n;
            for(j=0;j<n;j++){
                cin>>x;
                arr.push_back(x);
            }
            sort(arr.begin(),arr.end());
            for(k=0;k<n;k++){
                cin>>x;
                arr2.push_back(x);
            }
            sort(arr2.begin(),arr2.end());
            int result=1,platform=1;
            int dep=0,ar=1,max1=-999;
            while(dep<n && ar<n){
                if(arr[ar]<arr2[dep]){
                    platform++;
                    ar++;
                }
                if(platform>max1)
                    max1=platform;

                }else{
                    platform--;
                    dep++;
                }
                cout<<max1;
        }

    return 0;
}
