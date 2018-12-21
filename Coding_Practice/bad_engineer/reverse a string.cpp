/*#include<iostream>
#include<stack>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
    string str;

    int i,index,temp,n,j;
    cin>>n;
    cin.ignore();
    for(j=0;j<n;j++){
	 getline(cin,str);
	  string str3;
      string str2;

    for(i=0;i<=str.size();i++){
        if(str[i]=='.' || i==str.size()){
                //str2=str2+str[i];
           reverse(str2.begin(),str2.end());
           if(i!=str.size())
           		str3= str3+str2+".";
           	else
           		str3= str3 + str2;
            str2.clear();
        }else
            str2 = str2 + str[i];
    }
    reverse(str3.begin(),str3.end());
    cout<<str3<<"\n";
}
    //cout<<str.size()<<str3.size();
	return 0;
}
*/
