// max length subarray with given sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n],sum=0,len=0,end=0;
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int,int> map;
    map[0]=-1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if (map.find(sum) == map.end()){
            map[sum]=i;
        }
        if (map.find(sum-k) != map.end() && len < i-map[sum-k]){
            len=i-map[sum-k];end=i;
        }
    }
    cout<<"ans: ["<<end-len+1<<":"<<end<<"]";
}