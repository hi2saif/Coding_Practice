
/*#include<iostream>
#include<stack>
using namespace std;

int postfix(string s){

    stack<int> p;
    int i,first,second;
    for(i=0;i<s.length();i++){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
            first = p.top()-'0';
           // cout<<first<<" ";
            p.pop();
            second = p.top()-'0';
            p.pop();
           // cout<<second<<" ";
            if(s[i]=='+')
                p.push((second + first)+'0');
            if(s[i]=='-')
                p.push((second - first)+'0');
            if(s[i]=='*')
                p.push((second * first)+'0');
            if(s[i]=='/')
                p.push((second / first)+'0');
            if(s[i]=='^')
                p.push((second ^ first)+'0');

           // cout<<p.top()<<" ";

        }else{
            p.push(s[i]);
          //  cout<<s[i]<<" ";
        }

    }
    return p.top()-'0';
}



int main(){

    int as=postfix("231*+9-");
    cout<<as;

}*/
