// sort an array contain only 0,1 and 2
// three way partition
#include<bits/stdc++.h>
using namespace std;
void swap(int i,int j, int a[]){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int start,mid,end,pivot;start=mid=0;end=n-1;
    pivot=1;
    while(mid<=end){
        if (a[mid] > pivot) {swap(mid,end,a);end--;}
        else if(a[mid]<pivot) {swap(mid,start,a);start++;mid++;}
        else mid++;
        }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }