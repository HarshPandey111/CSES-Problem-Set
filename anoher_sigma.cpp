#include<iostream>
#include<bits/stdc++.h>
#define e 998244353
using namespace std;
int main()
{
    int j,n,i; cin>>n;
    long long sum=0,m;
    vector<int>a(n);
    string b,c,d;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           b=to_string(a[i]);
           c=to_string(a[i+1]);
           d=b+c;
           m=stoi(d);
           sum=sum+m;
        }
    }
    cout<<(sum+1%e);
    return 0;
}