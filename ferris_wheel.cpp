#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;cin>>n>>x;
    vector<int>a(n);
    for(i=0;i<n;i++)cin>>a[i];
     sort(a.begin(),a.end());

     int s=0,c=1;
    for(i=0;i<a.size();i++){
        if(s+a[i]<=x){
            s=s+a[i];
        }
        else{
            s=a[i];
            c++;
        }
    }
    cout<<c;
    return 0;
}