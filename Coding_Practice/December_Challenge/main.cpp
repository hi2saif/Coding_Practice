/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int test,i,j,k,n,m;
   int flag=0;
   vector<string>arr;
    string str;

    int c=0;
   cin>>test;
   for(i=0;i<test;i++){
    cin>>n;
    arr.clear();
    flag=0;
    string s,s1;
    c=0;
    for(j=0;j<n;j++){
        cin>>str;
        arr.push_back(str);
    }
    s=arr[0];
    for(k=0;k<arr.size();k++){
        if(s.compare(arr[k])==0){
            c++;
        }else if(flag==0){
            s1=arr[k];
            flag=1;
        }
    }
    int other = n-c;
    if(other==c){
        cout<<"Draw"<<"\n";
    }else if(other>c){
        cout<<s1<<"\n";
    }else{
        cout<<s<<"\n";
    }
   }

}
*/
