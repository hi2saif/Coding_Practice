/*#include <iostream>

using namespace std;

int main()
{
   int test,i,j,k,c=0,a=0,b=0,flag1=0,flag2=0;
   string s;
   cin>>test;
   for(i=0;i<test;i++){
    cin>>s;
    flag1=0;
    flag2=0;
    a=0;
    c=0;
    b=0;
    for(j=0;j<s.length();j++){
        if(s[j]=='A'){
                a=a+1;
                if(flag1==1&&flag2==0){
                    a=a+c;
                }
                c=0;
                flag1=1;
                flag2=0;
        }
        else if(s[j]=='B'){
                b=b+1;
                if(flag1==0&&flag2==1){
                    b=b+c;
                }
                c=0;
                flag2=1;
                flag1=0;
        }
        else if(s[j]=='.'){
                c++;
        }
        else{

        }
    }
    cout<<a<<" "<<b<<"\n";
   }
    return 0;
}*/
