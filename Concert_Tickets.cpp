#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define ll long long
int main(){
 int n,q,i;cin>>n>>q;
 vec get 
 srt
vector<int>qe(q),temp;
for(auto &x:qe)cin>>x;
temp=qe;
map<int,int>mp;
sort(qe.begin(),qe.end());
int j=0;
i=0;
   for(auto x:qe){
    if(a[i]<x && i<n){
       while(a[i]<x &&i<n){i++;}
       if(a[i]>x)mp[x]=a[i-1];
       else mp[x]=a[i];
    }
    else 
    mp[x]=-1;
}
  for(auto x:temp){
    cout<<mp[x]<<"\n";
  }
return 0;
}