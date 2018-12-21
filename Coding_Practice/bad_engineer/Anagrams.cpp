/*#include<string.h>
#include <iostream>
#include<math.h>
using namespace std;


int anagrams(string a,string b){
    //string a,b;
    int i,j;
    int count[256],flag=1;
    //cin>>a>>b;
    memset(count,0,sizeof(count));
    if(a.length()!=b.length()){
        return 0;
    }else{
        for(i=0;i<a.length();i++){
            count[a[i]-97]++;
            count[b[i]-97]--;
        }
    }
    for(j=0;j<256;j++){
        if(count[j]==0)
            flag=0;
        else{
            flag=1;
            break;
            }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}

int main(){

    string a1,b1;
    int test,k,answer;
      cin>>test;

  //	cout<<b1[2];
    for(k=0;k<test;k++){
    	 cin>>a1>>b1;
        answer=anagrams(a1,b1);
        if(answer==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
}
}*/
