#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,ans=0;cin>>n>>k;
    int prefix[n+1];
    prefix[0]=0;
    for(int i=1;i<=n;i++) {cin>>x;prefix[i]=prefix[i-1]+x;}
    for(int i=0;i<=k;i++){
    int x= prefix[i]+(prefix[n]-prefix[n-(k-i)]);
    ans=max(ans,x);
    }
    cout<<ans<<endl;
}