#include <iostream>
#include<list>
using namespace std;

int main()
{
    int i,j,k,test;
    int bubble;
    list<char> a;

    cin>>test;
    for(i=0;i<test;i++){
        string s1;
        cin>>s1;
        bubble=0;
        a.clear();
        if((s1.size()%2)==0){
            for(j=0;j<s1.size();j++){
                if(s1[j]=='A'){
                    if(a.empty())
                    {
                        a.push_back('A');
                    }
                    else
                    {
                    if(a.back()=='A'){
                        a.pop_back();
                    }
                    else{
                            a.push_back('A');
                    }
                    }
                }else if(s1[j]=='B'){
                    if(a.empty())
                    {
                        a.push_back('B');
                    }
                    else
                    {
                    if(a.back()=='B'){
                        a.pop_back();
                    }
                    else{
                        a.push_back('B');
                    }
                    }
                }
            }
            if(a.size()==0){
                bubble++;
            }
    }
    }
    cout<<bubble;
    return 0;
}
