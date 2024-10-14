#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      string s;
     getline(cin,s);
    //sort(s.begin(),s.end());
    int c=1,m=0;
     for(int i=0;i<s.length();i++){
      if(s[i]==s[i+1])
       c++;
       else
       c=1;
     m=max(m,c);
     }
     cout<<m;
    return 0;
}