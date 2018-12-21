#include<iostream>
#include<stdio.h>
#include<vector>
#include<sstream>
using namespace std;


int main(){

    int j,k,n,count=0,x,k1;
    int test,i;
    vector<int>a;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&n);
        a.clear();
        count=0;
        for(j=0;j<n;j++){
            scanf("%d",&x);
            a.push_back(x);
        }
        for(k=0;k<(a.size()-1);k++){
            for(k1=k+1;k1<a.size();k1++){
                if((a[k] | a[k1]) <= max(a[k],a[k1]) )
                    count++;
            }
        }
        printf("%d\n",count);
    }


}
