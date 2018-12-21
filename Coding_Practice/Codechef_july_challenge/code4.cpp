/*#include<iostream>
#include<tuple>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

bool sortbysec(tuple<int,int,int> &a,
              tuple<int,int,int> &b)
{
    return (get<2>(a) > get<2>(b));
}
int main(){

    int i,j,k,n,d,test,x1,x2,x3,z,count1,count2,sadness,count3;

    vector<int>b;
    vector<int>l;
    vector<int>s;
    vector<tuple<int,int,int>> v;
    scanf("%d",&test);
    for(i=0;i<test;i++){
            v.clear();
            b.clear();
            l.clear();
            s.clear();
            sadness=0;
        scanf("%d%d",&n,&d);
        bool days[d];
        memset(days,true,d+1);
        count3=d;
        for(j=0;j<n;j++){
            scanf("%d%d%d",&x1,&x2,&x3);
            b.push_back(x1);
            l.push_back(x2);
            s.push_back(x3);
        }

    for(k=0;k<n;k++){
            v.push_back(make_tuple(b[k],l[k],s[k]));
    }
//    cout<<get<0>(t);
     sort(v.begin(), v.end(), sortbysec);
    //cout<<get<2>(v[0]);
    for(z=0;z<n;z++){
            count2=get<1>(v[z]);
            count1=get<0>(v[z]);
           // cout<<count2;
        while(count2!=0 && count3>0 && count1<=d ){
               // cout<<count2;
            if(days[count1-1]==1){
               // cout<<"s";
                    days[count1-1]=0;
                    count1++;
                    count2--;
                   // cout<<count2;
            }else{
                count1++;
            }
        }
            if(count1>count2)
                count3=count1;
            else
                count3=count2;
            if(count3>d)
                    count3=d;
            count3=d-(count3-1);
            if(count2>0){
                sadness= sadness + count2*get<2>(v[z]);
              //  cout<<count2;
            }

    }
    printf("%d\n",sadness);
    }
   // cout<<get<0>(v[0]);


}*/
