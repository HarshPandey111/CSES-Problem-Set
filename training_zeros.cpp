#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    if(n<25)
    cout<<(n/5);
    else
        cout<<(n/5)+1;
    
    return 0;
}