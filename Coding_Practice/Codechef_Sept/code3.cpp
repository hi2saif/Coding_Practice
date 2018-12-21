/*#include<iostream>

using namespace std;


int main(){

    long int i,j,k,test,k1,k2,k3;
    long int count1[10]={0};
    string num;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>num;
        for(k3=0;k3<10;k3++)
	count1[k3]=0;
        //count1[10]={0};
        for(j=0;j<num.size();j++){
            count1[num[j]-48]++;
        }
       // cout<<count1[6];
        if(count1[6]>=1){
            for(k=5;k<=9;k++){

                if(count1[k]>=1 && k!=6){
                    int a = 6*10 + k;
                    if(a<=90 && a>=65)
            	cout<<(char)(a);
                }
            if(k==6){
                if(count1[k]>1){
                    int a = 6*10 + k;
                    if(a<=90 && a>=65)
            	cout<<(char)a;
                }
            }

            }
            }
            for(k1=7;k1<=9;k1++){
                    if(count1[k1]>=1){
                for(k2=0;k2<=9;k2++){
                    if(count1[k2]>=1 && k2!=k1){
                        int a = k1*10 + k2;
                        if(a<=90 && a>=65)
                        	cout<<(char)a;
                    }
                    if(k2==k1){
                        if(count1[k1]>1){
                            int a = 10*k1 + k2;
                            if(a<=90 && a>=65)
                        	cout<<(char)a;
                        }
                    }
                }
            }
            }
        	cout<<"\n";

    }

    }*/
