#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i; cin>>n;
    vector<int>a,b;
    long long sum;  
    float f=n/2.0;
    sum=f*(n+1);
    
    if(sum%2!=0)cout<<"NO";
    else{
        cout<<"YES\n";
        sum=sum/2;
        int ss=0;
     for(i=n;i>=1;i--){
        if(ss+i<=sum){
         ss=ss+i;
         a.push_back(i);
        }
        else{
            b.push_back(i);
        }
     }
     cout<<a.size()<<endl;
     for(auto x:a)cout<<x<<" ";
    cout<<endl<<b.size()<<endl;
    for(auto x:b)cout<<x<<" ";
  }    
    return 0;
}