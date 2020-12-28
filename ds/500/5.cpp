// duplicate element in limited range array
#include<bits/stdc++.h>
using namespace std;
int withXor(int n,int a[]){
int a1 =0;
for(int i=0;i<n;i++) a1=a1^a[i];
for(int i=1;i<n;i++) a1=a1^i;
return a1;
}
int withoutXor(int n,int a[]){
    for(int i=0;i<n;i++){
        int val = abs(a[i]);
        if(a[val]<0) return val;
        a[val]*=-1;
    }
    return 0;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int xor1=0,ans;
    if (xor1){
        ans= withXor(n,a);
    }
    else{
        ans= withoutXor(n,a);
    }
cout<<ans<<endl;
}