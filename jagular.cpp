    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {    
        int n; cin>>n;
       vector<float>a;
         while(n!=1){
            a.push_back(n);
            if(n%2!=0)
            n=n+(n*(1.0/2.0));
            else
           n=(sqrt(n));
        }
        for(auto x:a)cout<<x<<" ";

        return 0;
    }