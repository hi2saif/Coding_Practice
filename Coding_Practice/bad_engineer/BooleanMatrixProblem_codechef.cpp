/*#include<iostream>
#include<vector>
using namespace std;
int main(){


int test,i,j,k,j1,j2,k1,k2,n,n1,j3,k3;
cin>>test;

for(i=0;i<test;i++){
    cin>>n>>n1;
    int arr[n][n1];
    int row[n]={0};
    int col[n1]={0};
  //  row.clear();
  //  col.clear();
    //arr.clear();
    //memset(row,0,sizeof(5));
    for(j=0;j<n;j++){
        for(k=0;k<n1;k++){
            cin>>arr[j][k];
        }
    }
    //cout<<arr[0][0];

    for(j1=0;j1<n;j1++) {
        for(k1=0;k1<n1;k1++){
            if(arr[j1][k1]==1){
                row[j1]=1;
                col[k1]=1;
               // cout<<"sada";
            }
        }
    }
   // cout<<row[0];
    for(j2=0;j2<n;j2++){
        for(k2=0;k2<n1;k2++){
            if(row[j2]==1 || col[k2]==1)
                arr[j2][k2]=1;
        }
    }
    for(j3=0;j3<n;j3++){
        for(k3=0;k3<n1;k3++){
            cout<<arr[j3][k3]<<" ";
        }

    }
    cout<<"\n";
}

return 0;
}*/
