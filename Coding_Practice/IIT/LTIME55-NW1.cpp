/*#include<iostream>
#include<vector>
using namespace std;


void print(){
    for(int i=0;i<7;i++){
        cout<<"4"<<" ";
    }

}

int days(string str){

        if(str.compare("mon")==0)
            return 1;
        if(str.compare("tues")==0)
            return 2;
        if(str.compare("wed")==0)
            return 3;
        if(str.compare("thurs")==0)
            return 4;
        if(str.compare("fri")==0)
            return 5;
        if(str.compare("sat")==0)
            return 6;
        if(str.compare("sun")==0)
            return 7;

}

void print2(int result){

    for(int j=1;j<=7;j++){
        if(j==result){
            cout<<"5 ";
        }else{
            cout<<"4 ";
        }

    }
}

void print3(int result){

    if(result==7){
        cout<<"5 ";
        for(int k=2;k<=7;k++){
            if(k==result){
                cout<<"5 ";
            }else{
                cout<<"4 ";
            }
        }
    }else{
    for(int k=1;k<=7;k++){
            if(k==result || k==result+1){
                cout<<"5 ";
            }else{
                cout<<"4 ";
            }
        }
    }

}
void print4(int result){

    if(result==7){
        cout<<"5 ";
        cout<<"5 ";
        for(int k=3;k<=7;k++){
            if(k==result){
                cout<<"5 ";
            }else{
                cout<<"4 ";
            }
        }
    }else if(result==6){
            cout<<"5 ";
        for(int k=2;k<=7;k++){
            if(k==result || k==result+1){
                cout<<"5 ";
            }else{
                cout<<"4 ";
            }
        }
    }else{
        for(int k=1;k<=7;k++){
            if(k==result || k==result+1 || k==result+2){
                cout<<"5 ";
            }else{
                cout<<"4 ";
            }
        }

    }

}
int main(){

int i,j,k,test,n,x;
string str;
cin>>test;
for(i=0;i<test;i++){
    cin>>n;
    cin>>str;
    if(n==28){
        print();
        cout<<"\n";
    }else if(n==29){
            int result=days(str);
            print2(result);
            cout<<"\n";

    }else if(n==30){
        int result = days(str);
        print3(result);
        cout<<"\n";

    }else{
        int result = days(str);
        print4(result);
        cout<<"\n";
    }
}
}
*/
