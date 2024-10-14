#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
   long long x,y,m,a; cin>>x>>y;
    m=max(x,y);
    int ind=m;
    if(m>1){
         m--;
     long double b=m/2.0;
        a=abs((2+(2*m))*b);
        a++;
    }
    else a=1;
    //cout<<a<<" "<<ind;
    if(ind%2==0){
    if(x<ind){
     a=a+(ind-x);
    }
    else {
        a=a-(ind-y);
    }
    }
    else{
    
    if(x<ind){
     a=a+(ind-x);
    }
    else {
        a=a-(ind-y);
    }
    }
    cout<<a<<endl;
    }

    
    return 0;
}
