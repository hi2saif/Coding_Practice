/*#include <iostream>
#include<vector>
using namespace std;

bool isPalindrome(string str, int low, int high)
{
    while (low < high)
    {
        if (str[low] != str[high])
            return false;
        low++;
        high--;
    }
    return true;
}

void allPart(vector<vector<string>>&all,vector<string>&curr,int start,int n,string str){

    if(start>=n){
        all.push_back(curr);
        return;
    }
    for(int i=start;i<n;i++){
        if(isPalindrome(str,start,i)){
            curr.push_back(str.substr(start,i-start+1));
            allPart(all,curr,i+1,n,str);
            curr.pop_back();
        }
    }

}

void allP(string s){
    vector<vector<string>>all;
    vector<string>curr;
    allPart(all,curr,0,s.length(),s);
    for(int j=0;j<all.size();j++){
        for(int k=0;k<all[j].size();k++){
            cout<<all[j][k]<<" ";
        }
        cout<<"\n";
    }
}*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//string s="nitin";
	//allP(s);
	int test,n,i,j,k;
	cin>>test;
	long double a =355/113.0;
	//cout<<a;
	for(i=0;i<test;i++){
	    cin>>n;
	    cout<<setprecision(n+1)<<a<<"\n";
	}
	return 0;
	//return 0;
}
