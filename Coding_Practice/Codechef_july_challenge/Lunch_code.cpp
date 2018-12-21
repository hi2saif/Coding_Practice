/*#include<iostream>
#include<stdio.h>
#include<vector>
#include<sstream>
using namespace std;

int main(){

    long int test,i,j,k,x,max=0,count=0,N,k1;
    string s;
    vector<long int>a;
    cin>>test;
    cin.ignore();
    for(i=0;i<test;i++){
        s.clear();
        getline(cin,s);
        a.clear();
        max=0;
        k=0;
        count=0;
        istringstream iss(s);
        while(iss>>x)
                a.push_back(x);
        while(1){
        	if(a[k]==a.size()-1)
        		{
        			a[k]=0;
        			break;
        		}
        		k++;
        }
    for(j=0;j<a.size();j++){
        if(a[j]>max){
            max=a[j];
        }
    }
    cout<<max<<"\n";
        //cout<<a[0]<<a[1]<<a[2];
}
    }


*/
