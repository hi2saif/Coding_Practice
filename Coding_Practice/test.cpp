#include<iostream>
using namespace std;
int main(){



int A[19] = {101, 103, 106, 109, 158, 164, 182, 187, 202, 205, 2, 3, 32, 57, 69, 74, 81, 99, 100};
int index=0,index2=0;
    int mid;
    int left=0;
    int right=19;
    while(left<=right){
        int mid1= (left + right)/2;
        if(mid1<right && A[mid]>A[mid+1]){
            index=mid1;
            break;
        }
        if(mid1>left && A[mid]<A[mid-1]){
            index=mid1-1;
            break;
        }
        if(A[left]>=A[mid])
            right=mid1-1;
        if(A[left]<A[mid])
            left = mid1+1;
    }
        cout<<index;
    }
