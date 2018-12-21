/*#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

    int j=1,k,n,b,max1,total,diff,sum,d;
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d%d",&n,&b);
        diff=1;
        j=1;
        max1=0;
        while(diff>0){
            total=j*b;
            d=total/b;
            diff=n-total;
            sum = diff*d;
            j++;
            if(sum>max1)
                max1=sum;
        }
       printf("%d\n",max1);
    }
}
*/
