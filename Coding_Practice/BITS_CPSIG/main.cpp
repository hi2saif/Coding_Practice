/*#include <iostream>
#include<map>
#include<set>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,test,c=0;
    string s,s2;
    //vector<string>str;
    unordered_set<string>str;
    cin>>test;
    for(i=0;i<test;i++){
            c=0;
            str.clear();
        for(j=0;j<4;j++){
                cin>>s;
                str.insert(s);
            }
        for(k=0;k<4;k++){
            cin>>s2;
            if(str.find(s2)==str.end()){

            }else{
                c++;
            }
        }
        if(c>=2){
            cout<<"similar";
        }else{
            cout<<"dissimilar";
        }
    }
//    cout<<str[0];
    return 0;
}
*/
