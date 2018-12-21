/*#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int main(){

int test,i,j,k,n,x,z,flag=0;
vector<int> a;
cin>>test;
stack<int>s;
for(i=0;i<test;i++){
    cin>>n;
    a.clear();
    for(j=0;j<n;j++){
        cin>>x;
        a.push_back(x);
    }
    s.push(a[0]);
    for(k=1;k<a.size();k++){
        int temp=a[k];
        while(!s.empty()){
            if(temp>s.top()){
                cout<<temp<<" ";
                s.pop();
            }else
                break;
        }

        s.push((a[k]));
        reverseStack(s);
    }
    while(!s.empty()){
        cout<<"-1";
        s.pop();
    }
}
}

    /*for(k=0;k<n-1;k++){
         flag=0;
         z=k+1;
        while(a[k]>a[z]){
            z++;
            if(z==n)
                flag=1;
        }
        if(flag==1)
            cout<<-1<<"\n";
        else
            cout<<a[z]<<" ";
    }
    cout<<-1<<"\n";

}


}*/
