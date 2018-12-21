/*#include<iostream>
using namespace std;


int main(){

long int i,j,k,n,test,count1=1,count2=1,left,right;
string str;
cin>>test;
for(i=0;i<test;i++){
    count1=1;
    count2=1;
    left=1;
    right=1;
    cin>>str;
    for(j=0;j<str.size();j++){

        if(str[j]=='<')
            {
            count1++;
            if(count1>left){
                left=count1;
                count2++;
            }
            }
        if(str[j]=='>'){
            count1--;
            if(count1<right){
                right=count1;
                count2++;
            }

        }
    }
    cout<<count2<<"\n";
}

}
*/
/*
#include<iostream>
using namespace std;


int main(){

long int i,j,k,n,test,count1=1,count2=1,max;
string str;
cin>>test;
for(i=0;i<test;i++){
    count1=0;
    count2=0;
    max=0;
   cin>>str;
    for(j=0;j<str.size();j++){
        if(str[j]=='<')
            {
            count1++;
            count2=0;
            }
        if(str[j]=='>'){
            count2++;
            count1=0;
        }
        if(count1>max || count2>max){
        	if(count1>count2)
    			max=count1;
    		else
    			max=count2;
        }
    }

    cout<<max+1<<"\n";
}

}

*/
