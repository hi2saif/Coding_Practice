/*#include<iostream>
#include<vector>

using namespace std;

int rec(int x,long long int y){

    if(y==0)
        return 1;
    if(y%2==0)
        return (rec(x,y/2)*2) % 41;
    if(y%2==1)
        return x*(rec(x,y/2)*2) % 41;
}


int main(){

    cout<<rec(14,98765432123456789);

}
*/
