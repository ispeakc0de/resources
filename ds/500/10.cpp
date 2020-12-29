// merge two sorted arrays
#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int b[],int i){
    int temp = a[i];
    a[i]=b[0];
    b[0]=temp;
}
int main(){
    int n,m;
    cin>>n;int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        if (a[i]>b[0]){
            swap(a,b,i);
        int temp=b[0],j;
        for(j=1;j<m&&temp>b[j];j++){
b[j-1]=b[j];
        }
        b[j-1]=temp;
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
     for(int i=0;i<m;i++) cout<<b[i]<<" ";
}