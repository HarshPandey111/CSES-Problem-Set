#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define int long long
signed main(){
 int i,n,k;cin>>n>>k;
 vec get   
  map<int,int>mp; 
 vector<int>p(n);
 p[0]=a[0];
 for(i=1;i<n;i++){
    p[i]=a[i]+p[i-1];
 }
 int c=0;
 for(i=0;i<n;i++){
    if(i==0){
        if(p[i]==k)c++;
        mp[p[i]]++;
    }
    else{
        if(p[i]==k)c++;
         if(mp.find(p[i]-k)!=mp.end()){
           c+=mp[p[i]-k];
        } 
        mp[p[i]]++;
    }   
 }
 cout<<c;
return 0;
}
