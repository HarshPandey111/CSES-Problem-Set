#include<iostream>
using namespace std;
// void swap(int k,int j,string &s){
//       char temp;
//       temp=s[k];
//       s[k]=s[j];
//       s[j]=temp;
// }
int main()
{
    string s; cin>>s;
    int n=s.length(),i=0,j=n-1;
    while(i<=j){
    if(s[i]!=s[j]){
        int k;
        for(int k=j-1;k>=0;k--){
            if(s[k]==s[i])break;
        }
      char temp;
      temp=s[k];
      cout<<temp;
      s[k]=s[j];
      s[j]=temp;
      
    }
    i++;j--;
}   
for(i=0;i<n;i++){
    cout<<"hello";
    cout<<s[i];
}
    return 0;
}