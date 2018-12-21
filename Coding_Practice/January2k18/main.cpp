#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int i,y,j,k,test,n,x,c;
        vector<int>arr;
        vector<int>arr2;
       // cin>>test;
      //  for(i=0;i<test;i++){
            cin>>n;
            arr.clear();
            arr2.clear();
            for(j=0;j<n;j++){
                cin>>x>>y;
                arr.push_back(x);
                arr2.push_back(y);
            }
            sort(arr.begin(),arr.end());
            sort(arr2.begin(),arr2.end());
           // cout<<arr2[2]<<" ";
            int result=1,platform=1;
            int ar=1,dep=0,max1=1;
            while(ar<n && dep<n){

                if(arr[ar]<arr2[dep])
                {
                    platform++;
                    ar++;
                    if(platform>max1)
                        max1=platform;
                }else{
                    platform--;
                    dep++;
                }
//cout<<platform<<" ";
            }
           cout<<max1<<"\n";
       // }
    return 0;
}

