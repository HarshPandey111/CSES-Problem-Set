#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define ll long long
int main(){
 test{
    int i,n,f=0; cin>>n;
    string s; cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]&&s[i]=='1')f=1;
        
    }
    if(f)cout<<"YES\n";
 else if(s[0]=='1'||s[n-1]=='1')cout<<"YES\n";
 else cout<<"NO\n";
 }     
return 0;
}