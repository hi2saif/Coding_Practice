#include<iostream>
#include<vector>
using namespace std;


int main(){


    vector<vector<int>>a;
    vector<int>b;
    int x;
    for(int i=0;i<10;i++){
        b.clear();
        for(int j=0;j<10;j++){
            b.push_back(j);
        }
        a.push_back(b);
    }
    for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){
        cout<<a[i][j]<<" ";
}
cout<<"\n";
    }
}
