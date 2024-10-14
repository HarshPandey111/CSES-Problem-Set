#include<iostream>
#include<bits/stdc++.h>
#define s 100000000
using namespace std;
int main()
{
    int j,n,i; cin>>n;
    long long sum=0;
    vector<int>a(n);
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        long long b=a[i]+a[j];
        if(b>10000000)
          b=b%s;
       sum=sum+b;
        }
    }
    cout<<sum;
    return 0;
}