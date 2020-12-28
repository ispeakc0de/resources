// pair with given sum in unsorted array
#include<bits/stdc++.h>
using namespace std;
#define ll int

bool withSort(int n,int k,int a[]){
sort(a,a+n);
int i=0,j=n-1;
while(i<j){
    if (a[i]+a[j] == k) return true;
    (a[i]+a[j]<k)?i++:j--;
}
return false;
}

bool withoutSort(int n,int k,int a[]){
unordered_map<int,int> map;
for(int i=0;i<n;i++){
    if (map.find(k-a[i])!=map.end()) return true;
    map[a[i]]=1;
}
return false;
}

int main(){
ll n,k;cin>>n>>k;
ll a[n];
for(int i=0;i<n;i++) cin>>a[i];
bool ans = false, sort=false;
if (sort){
    ans = withSort(n,k,a);
}else{
ans = withoutSort(n,k,a);
}
cout<<ans<<endl;
}