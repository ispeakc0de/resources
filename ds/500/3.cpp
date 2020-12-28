// print subArray with 0 sum
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
unordered_multimap<int,int> map;
int sum=0;
map.insert(pair<int,int>(0,-1));
for(int i=0;i<n;i++){
sum+=a[i];
if(map.find(sum) != map.end())
{
    auto itr = map.find(sum);
    while(itr != map.end() && itr->first == sum){
        cout<<"subarray "<<itr->second+1<<":"<<i<<endl;
        itr++;
    }
}
map.insert(pair<int,int>(sum,i));
}
}