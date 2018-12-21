/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,k,test,n,x,a,y,z;
        vector<int>arr;
        cin>>test;
     //   int a[10010]={0};
        for(i=0;i<test;i++){
//            a[10010]={0};
            int flag=0;


                cin>>x>>y>>z>>a;
              //  arr.push_back(x);
               if(x==y && z==a)
                    cout<<"YES\n";
            else if(x==z && y==a)
                    cout<<"YES\n";
            else if(x==a && y==z)
                    cout<<"YES\n";
            else
                    cout<<"NO\n";

        }

    return 0;
}*
