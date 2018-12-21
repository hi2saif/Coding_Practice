/*#include <iostream>
#include<string>
#include <cstring>
using namespace std;

int main()
{
    int test,i,j,k=1,n,count1=0,z;
    cin>>test;
    cin.ignore();
     string str;

    for(i=0;i<test;i++){
            count1=0;
            n=1;
            z=1;
            string str1;
        getline(cin,str);
        j=str.size();
        //cout<<j;
        while(--j){
            if(str[j]==' ')
                count1++;
        }
        if(str[0]>=97){
            str[0] = str[0] - 32;

            }
            str1 = str1 + str[0];
        //cout<<count1;
       if(count1==0){
            k=1;
            while(k<str.size()){
                if(str[k]<97){
                    str[k]= str[k] + 32;
                }
                str1 = str1 + str[k];
                k++;
            }

       }
       if(count1==1){
                z=1;
                str1= str1 + ". ";
                while(str[z]!=' '){
                    z++;
                }
                z++;
                if(str[z]>=97){
                    str[z] = str[z]-32;

                }
                str1 = str1+ str[z];
                z++;
                while(z<str.size()){
                    if(str[z]<97){
                        str[z]= str[z] + 32;
                    }
                    str1 = str1 + str[z];
                    z++;
                }
       }
       if(count1==2){
                n=1;
                str1 = str1 + ". ";
                while(str[n]!=' '){
                    n++;
                }
                n++;
                if(str[n]>=97){
                    str[n] = str[n] - 32;

                }
                str1 = str1 + str[n];
                str1 = str1 + ". ";
                while(str[n]!=' '){
                    n++;
                }
                n++;
                if(str[n]>=97){
                    str[n]  = str[n] - 32;

                }
                str1 = str1 + str[n];
                n++;
                while(n<str.size()){
                        if(str[n]<97){
                            str[n]= str[n] + 32;
                        }
                    str1 = str1 + str[n];
                    n++;
                }
            }
            cout<<str1<<"\n";
       }



    return 0;
}*/
