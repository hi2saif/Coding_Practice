/*#include<iostream>
#include<vector>
using namespace std;

int main()
{
int i,j,k,test,n,x;
cin>>test;
vector<int>arr;
for(i=0;i<test;i++)
{
    arr.clear();
    cin>>n;
    int flag=0;
    for(j=0;j<n;j++)
    {
        cin>>x;
        arr.push_back(x);
    }

    int left=1;
    int right=n-2;
    int leftsum=arr[0],rightsum=arr[n-1];
    int c1=1,c2=1;
     if(n==1){
        cout<<"1"<<"\n";
        flag=1;
    }
    while(left<=right)
    {

        if(leftsum>rightsum)
        {
            rightsum=rightsum+arr[right];
            right--;
            c1++;
        }
        else if(leftsum<rightsum)
        {
            leftsum=leftsum+arr[left];
            left++;
            c2++;
        }else if(leftsum==rightsum)
        {
                if((n-(c1+c2))==1)
                {   cout<<left+1<<"\n";
                    break;
                }else{
                    left++;
                    right--;

                }
        }

    //cout<<leftsum<<" "<<rightsum<<"\n";
    }
    if(left>right &&flag==0){
        cout<<"-1"<<"\n";
    }

}

return 0;
}*/
