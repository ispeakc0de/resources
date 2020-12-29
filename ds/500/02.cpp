// check for subArray with 0 sum
#include<bits/stdc++.h>
using namespace std;
#define ll int
int main(){
    ll n;cin>>n;
    ll a[n];
    unordered_set<int> set;
    set.insert(0);
    int sum=0;
    for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++){
sum+=a[i];
if (set.find(sum) != set.end()) {cout<<"yes";return 0;}
set.insert(sum);
}
cout<<"no";
}