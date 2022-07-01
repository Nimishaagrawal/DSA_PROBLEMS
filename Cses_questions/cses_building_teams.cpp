#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool solve(vector<int>v[],vector<int>&vis,int i,int val,vector<int>&ans){
    
     if(vis[i]==1){
        if(ans[i]!=val){
            return 0;
        }else{
            return 1;
        }
     }vis[i]=1;
     ans[i]=val;
     if(val==1){
        val=2;
     }else{
        val=1;
     }
     for(auto x:v[i]){
        int r=solve(v,vis,x,val,ans);
        if(r==0){
            return 0;
        }
        }return 1;
     
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
        vector<int>v[n+1];

    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }vector<int>vis(n+1,0);
    vector<int>ans(n+1,0);
    int f=0;
    int val=1;
    for(int i=1;i<=n;i++){
         if(vis[i]==0){
         if(solve(v,vis,i,val,ans)==0){
            f=1;
            break;
        }else{    if(val==1){
                val=2;
            }else{
                val=1;
            }
         }
         }
    }if(f){
        cout<<"IMPOSSIBLE";
    }else{
    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    }

}
