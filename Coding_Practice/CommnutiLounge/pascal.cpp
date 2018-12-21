#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n=8;
    vector<vector<int>>a;
    vector<int>b;
    b.push_back(1);
    a.push_back(b);
    b.clear();
    for(int i=1;i<n;i++){
            b.clear();
        for(int j=0;j<=i;j++){
                if(i==j){

                    b.push_back(1);

                }else if(j==0){

                    b.push_back(1);

                }else{

                    int sum  = a[i-1][j-1]+a[i-1][j];
                    b.push_back(sum);

                }
        }
        a.push_back(b);

    }

    for(int k=0;k<n;k++){
        for(int z=0;z<=k;z++){
            cout<<a[k][z]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
