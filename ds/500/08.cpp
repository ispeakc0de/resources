// max subarray with equal no of 0 and 1
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int a[n],len=0,end=0,sum=0;
for(int i=0;i<n;i++) cin>>a[i];
unordered_map<int,int> map;
map[0]=-1;
for(int i=0;i<n;i++){
sum+= (a[i]==0)?-1:1;
if(map.find(sum) != map.end())
{
    if (len<i-map[sum]){
        len = i-map[sum];
        end=i;
    }  
} else{
map[sum]=i;
}
}
cout<<"len: "<<len<<"["<<end-len+1<<":"<<end<<"]";
}