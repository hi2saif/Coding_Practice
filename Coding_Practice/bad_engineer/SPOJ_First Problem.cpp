//A player has played unknown number of games. We know the average score of the player (sum of scores in all the games / no. of games). Find the minimum number of games the player should have played to achieve that average.

//The player can score any non-negative integer score in a game.


/*#include <iostream>
#include <cmath>
#include<stdio.h>
#include <sstream>
using namespace std;

long gcd(long a,long b)
{
 return b==0?a:gcd(b,a%b);
}

int main(){
    string s;
    int i,j,k,flag,test;
    int count1;
    double frac;
    long number ,g;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>s;
        frac=1;
        number =0;
        count1=0;
        flag=0;
    //    cout<<s.size();
        for(j=s.size()-1;j>=0;j--){
            if(s[j]=='.'){
                flag=1;
                break;
            }
            else
                count1++;
        }
      // cout<<count1;
        for(k=0;k<s.size();k++){
                if(s[k]!='.'){
                    number = number*10 + (s[k]-48);
                    //cout<<'s';
                }
        }
       // cout<<number;
        if(flag==1){
            frac = pow(10,count1);
         //   cout<<frac;
            g =  gcd(number,frac);
           cout<<(frac) / g;
        }else
            cout<<"1";


    }
    //for(i=s.size();i>=0;i++){}

return 0;

}*/
