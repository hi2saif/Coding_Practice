/*#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
int test,count1,i,j,k,count2=0;
string s;
cin>>test;
for(i=0;i<test;i++){
        count1=0;
    cin>>s;
    for(j=0;j<s.size();j++){
            count2=0;
        if(s[j]=='1'){
            k=j+1;
            while(s[k]=='0'){
                k++;
                count2++;
            }
            if(count2>0){
                if(s[k]=='1'){
                    count1++;
                }
            }
        }
    }
    cout<<count1<<"\n";
}

return 0;
}*/
