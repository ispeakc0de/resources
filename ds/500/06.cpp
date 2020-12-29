// largest subarray formed by consecutive elements
#include<bits/stdc++.h>
using namespace std;
#define maxx 100
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
     int min1,max1,len=1,start=0,end=0;
    for(int i=0;i<n-1;i++)
    {
        min1=max1=a[i];
         int b[maxx]={0};
         b[a[i]]=1;
        for(int j=i+1;j<n;j++){
            min1=min(min1,a[j]);
            max1=max(max1,a[j]);
            if(b[a[j]]==0 && max1-min1==(j-i)){
              if (len<max1-min1+1){
                start=i;end=j;len=max1-min1+1;
              }
            }
            if (b[a[j]]) break;
    }
  }
    cout<<"len: "<<len<<" i:"<<start<<", j:"<<end;
}