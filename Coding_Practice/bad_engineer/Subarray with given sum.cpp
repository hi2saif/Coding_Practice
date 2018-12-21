/*#include<iostream>
#include<vector>
using namespace std;

int main(){

    long int test,i,j,k=0,n,s,left=-1,sum=0,count1=0,x;
    vector<int> arr;
    cin>>test;
    for(i=0;i<test;i++){
            left=-1;
            count1=0;
            sum=0;
            k=0;
        cin>>n;
        cin>>s;
        arr.clear();
        for(j=0;j<n;j++){
            cin>>x;
            arr.push_back(x);
        }
        while(count1==0){
        	if(left==n){
        		count1=2;
        		break;
        	}
            left++;
            k=left;
            sum=0;
            while(sum<s){
                sum = sum + arr[k];
                if(sum==s)
                {
                    count1=1;
                    break;
                }
                if(sum>s)
                    break;
                k++;
                if(k==n)
                    count1=2;
            }
        }
        if(count1==2){
            cout<<"-1"<<"\n";
        }else
            cout<<left+1<<" "<<k+1<<"\n";
    }

return 0;
}*/
