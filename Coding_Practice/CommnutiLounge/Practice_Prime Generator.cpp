/*#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;

vector<int> SIE(int s,int e){
    int j,k,s1,j1;
    bool p[e+1];
    vector<int>prime;
    memset(p,true,sizeof(p));
    p[1]=false;
    //cout<<p[7];
    if(s==1){
        s1=2;
    }else
        s1=s;
    //cout<<s<<s1<<e;
    for(j=2;j<=sqrt(e);j++){
        if(p[j]==true){
            for(k=2;k*j<=e;k++){
                p[k*j]=false;
                //cout<<k*j<<" ";
            }
        }
    }
    for(j1=2;j1<=e;j1++){
        if(p[j1]==true){
            prime.push_back(j1);
    }
    }
  //  cout<<p[4];
    for(j1=s;j1<=e;j1++){
        if(p[j1]==true){
            cout<<j1<<"\n";
    }
    }

    return prime;
}



int main(){

    int test,i1,start,end1,i12,k12,limit,k1;
    vector<int>prime1;
    cin>>test;
    for(i1=0;i1<test;i1++){
        cin>>start>>end1;
        limit = floor(sqrt(end1)) + 1  ;
       prime1= SIE(start,limit);
      // cout<<prime1[0];
       //cout<<prime1[0]<<prime1[1]<<prime1[2]<<prime1[3];

        int low;
        if(limit>=start)
            low=limit;
        else
            low=start;
        int high;
        if(2*low>=end1)
            high=end1;
        else
            high=2*low;
        while(low<end1){
            bool mark[limit+1];
            memset(mark,true,sizeof(mark));
            for(k1=0;k1<prime1.size();k1++){
                int lolimit = floor(low/prime1[k1]) * prime1[k1];
                if(lolimit<low)
                    lolimit += prime1[k1];
                for (k12=lolimit; k12<high; k12+=prime1[k1])
                    mark[k12-low] = false;
            }

            for (i12 = low; i12<high; i12++)
                if (mark[i12 - low] == true)
                    cout << i12 <<"\n";
            low  = low + limit;
            high = high + limit;
            if (high >= end1)
                high = end1;
        }
    }

}
*/
