/*#include<iostream>

using namespace std;


int main(){

    int i,j,k,test;
    string a,b;
    cin>>test;
    string anti;
        string cloc;
    for(i=0;i<test;i++){
        anti="";
        cloc="";
        cin>>a>>b;
        anti = anti + b.substr(2,(b.size()-2)) + b.substr(0,2);
        cloc = cloc + b.substr((b.size()-2),2) + b.substr(0,(b.size()-2));
    }
   if(a.compare(anti) || a.compare(cloc))
            cout<<1<<"\n";
        else
            cout<<0<<"\n";


}
*/
