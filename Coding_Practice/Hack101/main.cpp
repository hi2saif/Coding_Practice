#include <iostream>

using namespace std;

int main()
{
    int test,i,j,k,count1=0;
    string v;
    string c;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>v;
        cin>>c;
    }
    for(j=0;j<test;j++){
        if(v[j]!=c[j] && v[j]!='.'){
            count1++;
        }
    }
    cout<<count1<<"\n";
    return 0;
}
