/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int i,j,k,test,n,m,start=0;
  vector<string>arr;
  cin>>test;
  int c[26];
  for(i=0;i<test;i++){
    cin>>n>>m;
    string str;
    int words=0;
    arr.clear();
    start=0;
    string str2;
    cin.ignore();
    getline(cin,str);
    for(j=0;j<str.length();j++)
    {
        if(str[j]==' '){
           str2=str;
           arr.push_back(str2.substr(start,j-start));
           start=j+1;

        }
        if(j==str.length()-1){
        	str2=str;
        	arr.push_back(str2.substr(start,j-start+1));
        }
    }
       // cout<<arr[2];
    for(k=0;k<n-1;k++){
        int k1=k+1;
        int flag=0;
        int c[26]={0};
        string s1 = arr[k];
        for(int k2=0;k2<s1.length();k2++){
            c[s1[k2]-'a']++;
        }
        string s2 = arr[k1];
        for(int k3=0;k3<s2.length();k3++){
            if((c[s2[k3]-'a'])>0){
                flag=1;
                break;
            }
        }
        if(flag==0)
                words++;
    }
    if(words>m)
        cout<<"Very poor choice of words"<<"\n";
    else
        cout<<"Welcome to a world without rules"<<"\n";
    }
    return 0;
}
*/
