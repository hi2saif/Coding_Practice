#include <stdio.h>
#include<iostream>

using namespace std;

int square(int **arr,int n,int m){

    int i,j,k;
    int arr2[n][m];
        for(j=0;j<m;j++){
            arr2[0][j]=arr[0][j];
        }
        for(i=0;i<m;i++){
            arr2[i][0]=arr[i][0];
        }
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(arr[i][j]==1)
                    arr2[i][j] = min1(arr[i-1][j],arr[i][j-1],arr[i-1][j-1]) + 1;
                else
                    arr2[i][j]=0;

            }
        }
       int  max_of_s = arr2[0][0]; int max_i = 0; int max_j = 0;
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      if(max_of_s < arr2[i][j])
      {
         max_of_s = arr2[i][j];
         max_i = i;
         max_j = j;
      }
    }
  }

}




int main() {
	//code
	int test,i,j,k,n,m,z,x;
	cin>>test;
	for(i=0;i<test;i++){
	    cin>>n>>m;
	    int arr[n][m];
	    for(j=0;j<n;j++){
	        for(k=0;k<m;k++){
	            cin>>x;
	            arr[j][k]=x;
	        }
	    }
	    square(arr,n,m);
	}
	return 0;
}
