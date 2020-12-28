#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s; cin>>s;
    ll c=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='#') c++;
        else if (c) {s[i]='#';c--;}
        }
    for(int i=0;i<s.length();i++)
    if(s[i]!='#') cout<<s[i];
}