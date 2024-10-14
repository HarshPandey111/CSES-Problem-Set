#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    if(n==1)cout<<"1";
    else if(n<=3)cout<<"NO SOLUTION";
    else {
        for(int i=n-1;i>=2; i=i-2)
        cout<<i<<" ";
        if(n%2==0)cout<<"1 ";
        for(int i=n;i>=1; i=i-2)
        cout<<i<<" ";
   
    }
    return 0;
}