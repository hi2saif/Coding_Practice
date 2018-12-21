#include <iostream>
#include<vector>
#include<stdio.h>
#include<math.h>
#include <sstream>  // for string streams
#include <string>
#include <numeric>
using namespace std;

 string longDivision(string number, long long int divisor)
{
    // As result can be very large store it in string
    string ans;

    // Find prefix of number that is larger
    // than divisor.
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
       temp = temp * 10 + (number[++idx] - '0');

    // Repeatedly divide divisor with temp. After
    // every division, update temp to include one
    // more digit.
    while (number.size() > idx)
    {
        // Store result in answer i.e. temp / divisor
        ans += (temp / divisor) + '0';

        // Take next digit of number
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";

    // else return ans
    return ans;
}

int main()
{
    long long int test,i,j,k,n,m,z,x,ans=1;
    scanf("%lld",&test);
    for(i=0;i<test;i++){
    	ans=1;
        scanf("%lld%lld",&n,&m);

    for(j=0;j<n;j++){
       scanf("%lld",&x);
        ans=x*ans;
    }
    ostringstream str1;
    str1 << ans;
    string geek = str1.str();
    for(k=0;k<m;k++){
          scanf("%lld",&z);
	cout<<longDivision(z,geek);
    }
    cout<<"\n";
}

}
