/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int swap1(int *a,int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;

}


int main(){

    int i,h,j,k,test,x,n;
    cin>>test;
    vector<int>a;
    for(i=0;i<test;i++){
        cin>>n;
        a.clear();
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
        }

        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                    swap(a[mid],a[low]);
                    mid++;
                    low++;
                    cout<<"a";
            }else if(a[mid]==1){
                mid++;
                cout<<"b";

            }else if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
                cout<<"c";
            }
        }

        for(k=0;k<n;k++){
            cout<<a[k]<<" ";

        }
    }


}
*/
