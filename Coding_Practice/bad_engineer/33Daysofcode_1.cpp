/*#include <bits/stdc++.h>

using namespace std;

int twinArrays(vector <int> x, vector <int> y){
    // Complete this function long int i,j,max1=INT_MAX,max2=INT_MAX,index1,max12=INT_MAX,max21=INT_MAX,index2;
long int i,j,max1=INT_MAX,max2=INT_MAX,index1,max12=INT_MAX,max21=INT_MAX,index2;
    if(x.size()<2){
        return x[0] + y[0];
    }
for(i=0;i<x.size();i++){
    if(x[i]<=max1){
            max12=max1;
            max1=x[i];
            index1=i;
    }else if(x[i]<max12 && x[i]!=max1)
            max12=x[i];

}
for(j=0;j<y.size();j++){
    if(y[j]<=max2){
        max21=max2;
        max2=y[j];
        index2=j;
    }else if(y[j]<max21 && y[j]!=max2)
            max21=y[j];
}
if(index1==index2){
       // cout<<"sad";
    if(max1+max21>max2+max12)
        return max2 + max12;
    else
        return max1+max21;
}else
    return max1 + max2;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2);
    cout << result << endl;
    return 0;
}*/
