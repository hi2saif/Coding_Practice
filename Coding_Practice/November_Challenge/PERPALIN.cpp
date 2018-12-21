#include <iostream>
#include<vector>
#include<limits>
#include<limits.h>
using namespace std;


void palindrome(int size1){

    int flag=1,i1=0,j1=size1-1,k1=0;
    char str[size1];

    while(i1<=j1){
        if(flag==1){
            str[i1]='a';
            str[j1]='a';
            flag=2;
    }else{
            str[i1]='b';
            str[j1]='b';
            flag=1;
    }
    i1++;
    j1--;
}
for(k1=0;k1<size1;k1++){
    cout<<str[k1];
}
}
void palindrome2(int size1,int di){

    int flag=1,i1=0,j1=size1-1,k1=0,k2=0;
    char str[size1];

    while(i1<=j1){
        if(flag==1){
            str[i1]='a';
            str[j1]='a';
            flag=2;
    }else{
            str[i1]='b';
            str[j1]='b';
            flag=1;
    }
    i1++;
    j1--;
}
for(k2=0;k2<di;k2++){
    for(k1=0;k1<size1;k1++){
        cout<<str[k1];
    }
}

}

int main(){

    int test,i,j,k,n,m;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n>>m;
        if(n==2 || n==1 || m==2 || m==1)
            cout<<"impossible\n";
        else if(n==m){
            palindrome(n);
            cout<<"\n";
        }else if((n>m) && (n%m==0)){
                palindrome2(m,n/m);
                cout<<"\n";

    }else{
         cout<<"impossible\n";
    }
    }

}
