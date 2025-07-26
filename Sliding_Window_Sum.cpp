#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define int long long
signed main(){
 int n,k;cin>>n>>k;
  int x,a,b,c;cin>>x>>a>>b>>c;
  vector<int>arr;
  arr.push_back(x);
  for(int i=1;i<n;i++){
     int z=((arr[i-1]%c)*(a%c))%c;
     int r=(z+b%c)%c;
     arr.push_back(r);
  }
//   for(auto x:arr)cout<<x<<" ";cout<<endl;
int s=0;
int xr=0;
for(int r=0;r<arr.size();r++){
    s+=arr[r];
    if(r>=k){
     s-=arr[r-k];
    }
    if(r>=k-1){xr^=s;}
  }
  cout<<xr;
return 0;
}