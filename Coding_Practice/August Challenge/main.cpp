/*#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int test,i,j,k,n,flag=0,x,k1=-1;
    vector<int>a;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n;
        flag=0;
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
        }
       int left=0;
       int right=a.size()-1;
       while(left!=right){
            if(a[left]!=a[right])
            {
                flag=1;
                break;
            }
        left++;
        right--;
       }
       if(a[left]!=7){
        flag=1;
        break;
       }
    if(flag==1)
            cout<<"No";
    else
            cout<<"Yes";
    }
    return 0;
}*/
