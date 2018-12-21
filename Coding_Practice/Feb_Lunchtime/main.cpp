#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,k,test,d,u,n,x,index=1,parachute=1;
    vector<int>a;
    cin>>test;
    for(i=0;i<test;i++){
        a.clear();
        index=1;
        parachute=1;
        cin>>n>>d>>u;
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
        }
        for(k=0;k<a.size()-1;k++){
            if(a[k+1]>=a[k] && a[k+1]-a[k]<=d){
                index++;
         //       cout<<index;
            }else if(a[k+1]<a[k] && (a[k]-a[k+1]<=u || parachute==1) ){
                index++;
                parachute=0;
           //     cout<<"A";
            }else{
                break;
            }
            //else if(parachute==1 && a[k]-a[k+1]>=u )

        }
        cout<<index<<"\n";
    }
    return 0;
}
