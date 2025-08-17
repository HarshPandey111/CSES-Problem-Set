#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define ll long long
int mod=1000000007;
int a[1000002];
 
int calc(int n){
   if(n==0)return 1;
   if(n<0)return 0;
   int ans=0;
   if(a[n]!=-1)return a[n];
   for(int i=1;i<7;i++){
     ans=
     (ans+calc(n-i))%mod;
   }
   a[n]=ans;
   return ans;
}
int main(){
    int n; cin>>n;
    memset(a, -1, sizeof(a));
     cout<<  calc(n);
    
return 0;
}