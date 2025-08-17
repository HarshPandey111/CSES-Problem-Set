#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define vec vector<int>a(n);
#define srt sort(a.begin(),a.end());
#define get for(i=0;i<n;i++)cin>>a[i];
#define ll long long
string ans;
void dfs( vector<string>&a,int i,int j ,string &s){
     int dx[]={0,1,-1,0};
     int dy[]={1,0,0,-1};
     int n=a.size();
     int m=a[0].size();
    if(a[i][j]=='B'){
        if(ans.length()==0)ans=s;
        else{
            if(s<ans)ans=s;
        }
        return ;
    }
    a[i][j]='#';
    for(int k=0;k<4;k++){
        int nx=dx[k]+i;
        int ny=dy[k]+j;
        if(nx<n&&nx>=0&&ny<m&&ny>=0&&(a[nx][ny]=='.'||a[nx][ny]=='B')){
            if(nx==i){
               if(ny==j+1){
                   s.push_back('R');
               }
               else{
                 s.push_back('L');
               }
            }
            else{
                if(i==nx-1){
                  s.push_back('D');
                }
                else{
                  s.push_back('U');
                }
            }
            dfs(a,nx,ny,s);
            s.pop_back();
        }
    }
    a[i][j]='.';
}
int main(){
 int n,m;cin>>n>>m;
 vector<string>a(n);
 for(auto &x:a)cin>>x;
 int dx[]={0,1,-1,0};
 int dy[]={1,0,0,-1};
  string s;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(a[i][j]=='A'){
        dfs(a,i,j,s);
       }
    }
 }
   if(!ans.empty()){
    cout<<"YES\n"<<ans.length()<<"\n"<<ans<<"\n";
   }
   else cout<<"NO\n";
return 0;
}