#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<  n;i++)cin>>a[i];
int main(){
 string s;cin>>s;
 string p;cin>>p;
 int i,j=0,c=0,ans=0;
 for(i=0;i<s.length();i++)  {
    int k=i;
    while(s[i]==p[j] &&j<p.length()&&i<s.length()){
       i++;j++;c++;
    }
    if(c==p.size()){ans++;i--;}
    else i=k;
    j=0;c=0;
 }   
 cout<<ans;
return 0;
}