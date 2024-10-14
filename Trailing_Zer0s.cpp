#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,c=0;cin>>n;
 while(n>0){
    n/=5;c+=n;
 }     
 cout<<c;
return 0;
}