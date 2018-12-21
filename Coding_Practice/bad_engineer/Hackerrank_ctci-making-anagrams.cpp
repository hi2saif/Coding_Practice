/*
#include<string.h>
#include <iostream>
#include<cmath>
using namespace std;


int anagrams(string a,string b){
    //string a,b;
    int i,j,k;
    int count[256],elements=0;

    memset(count,0,sizeof(count));
        for(i=0;i<a.length();i++){
            count[a[i]-97]++;
        }
         for(k=0;k<b.length();k++){
            count[b[k]-97]--;
        }
    for(j=0;j<256;j++){
        elements = elements + abs(count[j]);
            }
        return elements;
}

int main(){

    string a1,b1;
    int answer;
  //	cout<<b1[2];

    	 cin>>a1>>b1;
        answer=anagrams(a1,b1);
        cout<<answer<<"\n";
}
*/
