#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++){
     cin>>a[i];
    }
    int k=1,l=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
     if(a[i]==k++)
     continue;
     else{l=1;
     break;
     }
    }
    if(l==0)k++;
    cout<<k-1;

        return 0;
}