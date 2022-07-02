 #include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int ans=0;
int mod=1e9+7;
int main(){
    long long n,m,a,b;
    cin>>n>>m;
    vector<vector<long long>>v(n+1);
    vector<vector<long long>>v1(n+1);
    vector<long long> in_deg(n+1,0);
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v1[b].push_back(a);
        in_deg[b]++;
    }vector<long long>dp(n+1,0);
    dp[1]=1;
    queue<long long>q;
    for(int i=1;i<=n;i++){
        if(in_deg[i]==0){
          q.push(i);
        }
    }
    while(q.size()){
        int a=q.front();
        q.pop();
        for(auto i:v[a]){
            in_deg[i]--;
            if(in_deg[i]==0){
                q.push(i);
            }
        }for(auto i:v1[a]){
            dp[a]=(dp[a]+dp[i])%mod;
        }
    }
    cout<<dp[n];
    
}
