/*#include<iostream>
#include<vector>
using namespace std;

int pivot_find(vector<int>b){
    int m,flag=0;
    //cout<<b[0]<<b[1]<<b[2]<<b[3]<<b[4];
    for(m=0;m<b.size()-1;m++){
        if(b[m]>b[m+1]){
            flag=1;
            break;
        }

    }
    if(flag==0){
        return b.size()-1;
    }
     else
        return m;
}

int searc(vector<int>c,int q,int num1){

    int left,right;

    if(num1>c[0]){
        left=0;
        right=q;
    }else{
        right=c.size()-1;
        left=q+1;
    }
    while(left!=right){
        int mid=(left+right)/2;
        if(num1==c[mid])
        {
            return mid;
        }
        if(num1<c[mid]){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    if(c[left]==num1)
        return left;
    else
        return -1;

}

int main(){


int i,j,k,test,n,x,num,pivot;
vector<int>a;
cin>>test;
for(i=0;i<test;i++){
    cin>>n;
    for(j=0;j<n;j++){
        cin>>x;
        a.push_back(x);
    }
    cin>>num;
    pivot=pivot_find(a);
    //cout<<pivot;
int    index=searc(a,pivot,num);
    cout<<index;

}

}*/
