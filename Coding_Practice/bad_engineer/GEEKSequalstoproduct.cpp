/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int test,n,i,j,k,flag=0,sum;
cin>>test;
	for(i=0;i<test;i++){
	    cin>>n>>sum;
	    int arr[n];
	    flag=0;
	    for(j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+n);
	  //   for(j=0;j<n;j++){
	 //       cout<<arr[j];
	 //   }
	   int low=0;
	   int high=n-1;
	    while(low<high){
	        if(arr[low] * arr[high] > sum ){
                high = high-1;
	        }
	        else if(arr[low] * arr[high] < sum){
                low=low+1;
	        }else{
                flag=1;
                break;
	        }
	    }
	    if(flag==1)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
	}


}*/
