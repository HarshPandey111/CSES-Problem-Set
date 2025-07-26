#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define int long long
signed main(){
   //  vec get
   int n,i,k;cin>>n>>k;
  int x,a,b,c;cin>>x>>a>>b>>c;
  vector<int>arr;
  arr.push_back(x);
  for(int i=1;i<n;i++){
     int z=((arr[i-1]%c)*(a%c))%c;
     int r=(z+b%c)%c;
     arr.push_back(r);
  }
//   for(auto x:arr)cout<<x<<" ";cout<<"\n";
    deque<int>q;
    for(i=0;i<k;i++){
      while(!q.empty()&&arr[i]<=arr[q.back()]){
         q.pop_back();
      }
      q.push_back(i);
    }
    int xr=0;
   //  cout<<arr[q.front()]<<" ";
    xr^=arr[q.front()];
    while(i<(int)arr.size()){     
      while(!q.empty()&&i-q.front()>=k){q.pop_front();}
       
      while(!q.empty()&&arr[i]<=arr[q.back()]){
         q.pop_back();
      }
      // if(q.empty()) 
      q.push_back(i);
      // cout<<arr[q.front()]<<" ";
      xr^=arr[q.front()];
     
       i++;
    }
    cout<<xr;
    return 0;
}