 #include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    long long n,m,k,a,b,c;
    cin>>n>>m>>k;
        vector<vector<long long>>v[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }priority_queue<vector<long long>,vector<vector<long long>>,greater<vector<long long>>>st;
    priority_queue<long long>dist[n+1];
    st.push({0,1});
    dist[1].push(0);
    while(!st.empty()){
         auto x=st.top();
         st.pop();
         long long curr_cost=dist[x[1]].top();
         if(x[0]>curr_cost){
            continue;
         }
         for(auto i:v[x[1]]){
            if(dist[i[0]].size()<k){
               dist[i[0]].push(x[0]+i[1]);
               st.push({x[0]+i[1],i[0]});
            }else if(dist[i[0]].top()>x[0]+i[1]){
                dist[i[0]].pop();
              dist[i[0]].push(x[0]+i[1]);
              st.push({x[0]+i[1],i[0]});
            }
         }
    }vector<long long>ans;
    while(dist[n].size()){
        ans.push_back(dist[n].top());
        dist[n].pop();
    }for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<' ';
    }
}
