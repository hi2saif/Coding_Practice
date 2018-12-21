/*#include<iostream>
#include<stack>
using namespace std;


int main(){
    int i,j,k,test,n,x,flag;

    string str;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>str;
         stack<int>s;
        flag=0;
    for(j=0;j<str.size();j++){
        if(str[j]=='{' || str[j]=='[' || str[j]=='('){
            s.push(str[j]);
           }else{
               if(!s.empty()){
                char c1=s.top();

                if((c1=='{' && str[j]=='}') || (c1=='[' && str[j]==']') || (c1=='(' && str[j]==')')){
                   s.pop();
                }else{
                    flag=1;
                    break;
                }
           }else{
                flag=2;
                break;

           }
        }
           }
         //  char c1 = s.top();
         //  cout<<c1;
   if(s.empty() && flag==0){
        cout<<"balanced\n";
    }else
        cout<<"not balanced\n";
    }

    }*/
