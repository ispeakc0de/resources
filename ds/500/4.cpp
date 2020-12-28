// sort binary array in linear time
// odd number first then even numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k=0;
    for(int i=0;i<n;i++){
if (a[i]&1){
    int temp = a[i];
    a[i]=a[k];
    a[k++]=temp;
}
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
