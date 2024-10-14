#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  i,b,n,c=0; cin>>n;
    vector<long long >a(n);
     for(i=0;i<n;i++)cin>>a[i];
     for(i=1;i<n;i++){
         if(a[i]>=a[i-1])continue;
         else{
            b=abs(a[i]-a[i-1]);
            c=c+b;
            a[i]=a[i]+b;
         }
         
     }
     cout<<c;
    return 0;
}