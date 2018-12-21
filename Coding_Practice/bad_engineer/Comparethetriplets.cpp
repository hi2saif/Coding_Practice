/*
#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector <int> answer;
    int count1=0,count2=0;
   // memset(answer,0,sizeof(answer));
    if(a0>b0){
        count1++;
    }else if(a0<b0){
        count2++;
    }

    if(a1>b1){
        count1++;
    }else if(a1<b1){
        count2++;
    }

    if(a2>b2){
        count1++;
    }else if(a2<b2){
        count2++;
    }
    answer.push_back(count1);
    answer.push_back(count2);
    return answer;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
*/
