#include<iostream>
#include<vector>

using namespace std;

int main(){

    int i,j,k,test,n=0,m=0;
    while(n!=-1 && m!=-1){
        cin>>n>>m;
        int x,y;
        if(n!=-1 && m!=-1){
            if(n==m){
                if(m==0)
                {
                    cout<<"0\n";

                }else
                {
                    cout<<"1\n";

                }
            }else{
                if(n>m)
                {
                    x=n;
                    y=m;

                }else
                {
                    x=m;
                    y=n;

                }
                if((x%(y+1))==0){
                    cout<<(x/(y+1));
                }else{
                    cout<<((x/(y+1))+1);
                }
            }
        }


    }


    return 0;
}
