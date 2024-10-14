#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
      int t; cin>>t;
      while(t--){
        int a,b; cin>>a>>b;
        if(a==2*b || a*2==b)cout<<"YES";
        else if((a%3==0)&&(b%3==0)){
           if(a-b==0 || a-b==3 || a-b==-3) cout<<"YES";
           else cout<<"NO";
      }
        else cout<<"NO";
      
      cout<<endl;
      }
return 0;
}