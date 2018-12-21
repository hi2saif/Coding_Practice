/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test,i,j,k,n,d,total=0,flag,diff,count1,x,temp,z;
    vector<int>a;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n>>d;
        total=0;
        count1=0;
        temp=0;
        a.clear();
        flag=0;
        diff=0;
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
            total=total+x;
        }
        if((total%n==0)){
                   temp=total/n;
           }else{
            flag=1;
           }
           k=0;
           while(k+d<n && flag==0){
            if(a[k]<temp){
                diff=temp-a[k];
                a[k] = a[k]+diff;
                a[k+d]=a[k+d]-diff;
                count1+=diff;
            }
            if(a[k]>temp){
                diff=a[k]-temp;
                a[k] = a[k] -diff;
                a[k+d]=a[k+d]+diff;
                count1+=diff;
            }
            k++;
           }
           for(z=0;z<n;z++){
            if(a[z]!=temp)
            {
                flag=1;
                break;
            }
           }
           if(flag==1)
                cout<<"-1\n";
           else
                cout<<count1<<"\n";
          }
}
*/
