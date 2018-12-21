/*#include<iostream>

using namespace std;

//Counting maximum number of consecutive 1 in Binary number
int main(){
    int n,total,max=0,count=0;
    cin >> n;
    while(n!=0){
        total=n & 1;
       // cout<<total<<" ";
        if(total==1){
            count++;
        }else
            count=0;
        if(count>max)
            max=count;
        n=n>>1;
    }
    cout<<max;
    return 0;
}
*/
