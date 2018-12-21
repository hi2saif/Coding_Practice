#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int i,j,k,test,x,m,n;
	int result=0;
	int max1=0;
	map<char,int>a;
	string str;
	cin>>test;
	for(i=0;i<test;i++){
	    cin>>str;
        for(j=0;j<str.length();j++){
                if(a[str[j]]==0){
                    result=result+1;
                   // cout<<j<<result<<str[j]<<" ";
                    if(result>max1)
                            max1=result;
                    }else{
                        result=1;
                        //cout<<j<<str[j]<<" ";
                        a.clear();
                    }
            a[str[j]]++;
        }
	}
	cout<<max1;
	return 0;
}
