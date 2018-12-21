/*#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){

    int n,i,j,k,index1=0,index2=0,max1=0,max2=0,nested=0,longest=0,x;
    stack<int> s;
    vector<int> a;
    cin>>n;
    for(i=0;i<n;i++){
            cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n;i++){
            if(a[i]==1){
                    nested++;
                    longest++;
                    s.push(a[i]);
            }else{
                    nested--;
                    s.pop();
                    if(s.empty()){
                        if(longest>max2){
                        	max2=longest;
                        	index2=i;
                        	longest=0;
                        }
                        longest=0;
                    }else
                        longest++;

            }
            if(nested>max1){
                max1=nested;
                index1=i;
            }
    }
cout<<max1<<" "<<index1+1<<" "<<max2 +1 <<" "<<index2-max2+1<<"\n";
}*/
