#include <iostream>
#include<vector>
#include<limits>
using namespace std;

int main(){

    int test,i,j,k,rating,min1,max1,time,n,r,c,flag=1;

    string rating1,color;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n;
        int a[1000][7]={0};
        for(j=0;j<n;j++){
            cin>>rating>>min1>>max1>>time>>rating1>>color;
            flag=1;
            a[j][0]=rating;
            a[j][1]=min1;
            a[j][2]=max1;
            a[j][3]=time;
            if(rating1=="rated"){
                    a[j][4]=1;
            }else{
                a[j][4]=2;
            }
            if(color=="random"){
                  a[j][5]=1;
            }else if(color=="black"){
                  a[j][5]=2;
            }else{
                  a[j][5]=3;
            }
      //  a[j][6]=0;
        for(k=0;k<j;k++){
                if(a[k][6]==0){
                    if(a[j][0]<=a[k][2] && a[j][0]>=a[k][1] && a[k][0]<=a[j][2] && a[k][0]>=a[j][1] && a[j][3]==a[k][3] && a[j][4]==a[k][4]){
                        if((a[j][5]==2 && a[k][5]==3) ||(a[j][5]==3 && a[k][5]==2) ||
                            (a[j][5]==1 && a[k][5]==1)){
                                a[k][6]=1;
                                a[j][6]=1;
                                flag=0;
                                break;
                        }
            }
        }
    }
        if(flag==0){
            cout<<k+1<<"\n";
        }else{
            cout<<"wait"<<"\n";
        }
    }
    }
    //cout<<c;
    return 0;
    }
