#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test,i,j,count1=0,count2=0,flag1=0,flag2=0;
	string s;
	cin>>test;
	for(i=0;i<test;i++){
		count1=0;
		count2=0;
		cin>>s;
		j=0;
		while(j!=s.size()){
			flag1=0;
			flag2=0;
		//	cout<<"dsd";
			while(s[j]=='D'){
				j++;
				flag1=1;
			}
			while(s[j]=='U'){
				j++;
				flag2=2;
			}
			if(flag1==1)
				count1++;
			if(flag2==2)
				count2++;
		}
	//	cout<<count1;
		if(count1>count2)
			cout<<count2<<"\n";
    	else
			cout<<count1<<"\n";
	}
	return 0;
}

