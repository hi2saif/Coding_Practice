/*#include <iostream>
#include<stdio.h>
#include <vector>
#include <stdlib.h>
#include <limits.h>
using namespace std;

int main()
{
    long int i,j,k,test,minimum=LONG_MAX,n,x,sum,index,previous,total=0,leftsum,rightsum;
    vector<long int>a;
    scanf("%ld",&test);
    for(i=0;i<test;i++){
        scanf("%ld",&n);
        minimum=LONG_MAX;
        index=0;
        sum=0;
        total=0;
        leftsum=0;
        rightsum=0;
        a.clear();

        for(j=0;j<n;j++){
            scanf("%ld",&x);
            a.push_back(x);
            total = total + x;
        }
        previous = 0;
        for(k=0;k<n;k++){
          //  sum = previous + a[k] + (total - previous);
          //  cout<<sum<<" ";
            leftsum = a[k] + previous;
            rightsum = total - leftsum;
            if(leftsum==rightsum){
                index = k;
                break;
            }
            previous = leftsum;
            //if(sum<minimum)
            	//{
            		//minimum=sum;
            		//index=k+1;
            	//}

        }
        cout<<leftsum;
        printf("%ld\n",index);
    }
    return 0;
}
*/
