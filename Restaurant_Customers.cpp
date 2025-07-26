#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define ll long long
int main(){
 int i,n; cin>>n;
 vector<pair<int,int>>a(n);
 for(auto &x:a){
    cin>>x.first>>x.second;
 }     
 srt
 for(auto x:a){
    cout<<x.first<<" ";
 }
 cout<<endl;
 for(auto x:a){
    cout<<x.second<<" ";
 }
 cout<<endl;
 int m=a[0].second,c=1,mx=0;
 for(i=1;i<n;i++){
    if(a[i].first<m){
        if(a[i].second>m){
            c++;
            m=a[i].second;
        }
        else c=1;

    }
    mx=max(mx,c);
 }
 cout<<mx;
return 0;
}