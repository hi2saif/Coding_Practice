/*#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){

	unordered_map<string,int>arr;
	int i,j,k,test,n,x;

	cin>>test;
	for(i=0;i<test;i++){
	    cin>>n;
	    int c=0;
	    string str;
	    arr.clear();
	    int count1=0;
	   // vector<string>a;
	    cin.ignore();
	    getline(cin,str);
	    stringstream ss(str);
	    string word;
	    while(ss>>word){
	        arr[word]++;
	       // cout<<word<<" ";

	    }
        unordered_map<string,int> ::iterator p;
        for(p=arr.begin();p!=arr.end();p++){
            if(arr[p->first]==2)
                count1++;
        }
       // cout<<arr["hate"];
	cout<<count1<<"\n";
	}
    return 0;
}

*/
