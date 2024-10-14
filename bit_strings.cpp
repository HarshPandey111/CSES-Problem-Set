#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#define s 1000000
#define a 1000000000
using namespace std;
int main()
{
    long long  n; cin>>n;
    long long r=pow(2,n);
     cout<<(r%(a+7));
     
    return 0;
}