#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    int flag=0;
    int i;
    int l=0,r=0;
   for(i=0;i<t;i++)
   {
   	flag=0;
   	l=0,r=0;
   	cin>>s1>>s2;
   	while(l<s1.size() && r<s2.size())
   	{
   		//cout<<l<<r;
   		if(s1[l]==s2[r])
   		{
   			l++;
   			r++;
   		}else if(s2[r]=='A' && s1[l]!='B')
   		{
   			int temp=l;
   			while(s1[temp]!='A')
   			{
   				if(s1[temp]=='B'){
   					flag=1;
   					break;
   				}
   				temp++;
   			}
   			if(flag==1){
   				break;
   			}
   			char temp1=s1[l];
   			s1[l]=s1[temp];
   			s1[temp]= temp1;
   		}else if(s2[r]=='#' && s1[l]!='A')
   		{
   			int temp=l;

   			while(s1[temp]!='#')
   			{
   				if(s1[temp]=='A'){
   					flag=1;
   					break;
   				}
   				temp++;
   			}
   			if(flag==1){
   				break;
   			}
   			char temp1=s1[l];
   			s1[l]=s1[temp];
   			s1[temp]= temp1;
   		}else{
   			flag=1;
   			break;
   		}
   	}
   	 if(flag==0)
	cout<<"yes\n";
else
	cout<<"No\n";
   }

}
