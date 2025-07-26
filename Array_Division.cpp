#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define int long long
signed main(){
 int n,k,i;cin>>n>>k;
 vec get
 int s=0;
 for(i=0;i<n;i++){
    s+=a[i];
 } 
 s/=k;
 int l=(n+k-1)/k;
 cout<<l<<"\n";
 int sum=0,c=0,m=0;
 for(i=0;i<n;i++){
    if(c<=l){
        c++;
       sum+=a[i];
       if(sum>s){if(i!=n-1)sum-=a[i];c=0;m=max(m,sum);sum=a[i];}
       if(c==l){c=0;m=max(m,sum);sum=0;}
    }
 }   
 cout<<m; 
return 0;
}