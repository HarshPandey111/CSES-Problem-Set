#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>a(n);
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    sort(a.begin(),a.end());
    int c=0;
     for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])c++;  
    }
    cout<<c+1;
    return 0;
}