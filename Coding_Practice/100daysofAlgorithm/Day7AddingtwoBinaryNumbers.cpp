/*#include<iostream>
using namespace std;

int main(){
    string s1,s2,s3="";
    int i,l,r,diff,a,b,c,carry=0;
    char sum;
    cin>>s1>>s2;

    l=s1.size();
    r=s2.size();
   // cout<<l;
    if(l>r){
         diff=l-r;
         while(diff){
            s2 = '0' + s2;
            diff--;
         }
    }else if (r>l){
        diff=r-l;
        while(diff){
            s1 = '0' + s1;
            diff--;
         }
    }
    for(i=s1.size()-1;i>=0;i--){
        a = s1[i]-'0';
        b = s2[i]-'0';
        c=carry ;
        sum = a^b^c + '0';

        carry =((a&b)|(b&c)|(c&a));

        s3 =  sum + s3;
    }
    if(carry){
        char carr = carry + '0';
        s3 = carr + s3;
        }
        cout<<s3;
}
*/

