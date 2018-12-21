/*#include <iostream>
#include<vector>
#include<limits>
using namespace std;

int main()
{
    int test,i,j,k,n,total=0,x,k2,k1,count1=0,sum=0,max1=INT_MIN,k3,k4;
    vector<int>a;
    cin>>test;
    for(i=0;i<test;i++){
        a.clear();
        cin>>n;
        count1=0;
        sum=0;
        max1=-100;
        total=0;
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
        }
        for(k2=0;k2<n-1;k2++){
            total=total+ n-k2-1;
        }
       // cout<<max1;
        //cout<<total<<" ";
        for(k=0;k<n-1;k++){
            for(k1=k+1;k1<n;k1++){
                sum=a[k] + a[k1];
                if(sum>=max1){
                    max1=sum;
                  //  count1++;
                }
            }
        }
        //cout<<max1<<" ";
        for(k3=0;k3<n-1;k3++){
            for(k4=k3+1;k4<n;k4++){
                int sum1=a[k3] + a[k4];
                if(sum1==max1){
                 //   max1=sum;
                    count1++;
                }
            }
        }

        cout<<(double)count1/(double)total<<"\n";

    }
    return 0;
}
*/
