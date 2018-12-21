#include <iostream>
using namespace std;


string reverse1(string str){
    int len = str.length();
    int start=0;
    int end1 = len-1;
   while(start<end1){
        str[start] ^=str[end1];
        str[end1] ^=str[start];
        str[start] ^=str[end1];
        ++start;
        --end1;
    }
    return str;

}


int main() {
	string str = "Saif Ahmed is a boy";
    cout<<reverse1(str);
	return 0;
}
