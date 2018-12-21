/*#include <iostream>
#include <string>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long int test,i,j,k,len1,len2,k1,j1,diff,i1;
cin>>test;
for(i=0;i<test;i++){
	string a,b,num="";
	i1=0;
	len1=0;
	len2=0;
    cin>>a>>b;
    len1=a.size();
    diff=0;
    len2=b.size();
   // cout<<len1;
    if(len1>=len2){
        diff=len1-len2;
        for(j=0;j<diff;j++){

            	num.push_back(a[j]);
    }
        for(k=diff;k<len1;k++){
                int num2=(((a[k]-'0')+(b[k-diff]-'0')));
                //cout<<num2;
                num.push_back(num2%10 +'0');
    }
    }else{
        diff=len2-len1;
        for(j1=0;j1<diff;j1++){
                num.push_back(b[j1]);
    }
        for(k1=diff;k1<len2;k1++){
               int num2=(((a[k1-diff]-'0')+(b[k1]-'0')));
                //cout<<num2;
                num.push_back(num2%10 +'0');
    }
    }
	while(num[i1] == '0' && i1<diff)
		i1++;
		num.erase(0, i1);
	int num2  = stoi(num);

	cout<<num2;
	cout<<"\n";
}
}*/
