 #include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    long long n,m,a,b,c;
    long long w=1000000000000000000;
    int mod=1e9+7;
    cin>>n>>m;
        vector<vector<long long>>v[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }vector<long long>dist(n+1,w);
    vector<long long>count(n+1,1);
    vector<long long>max_flight(n+1,0);
    vector<long long>min_flight(n+1,0);
    set<vector<long long>>st;
    st.insert({0,1});
    dist[1]=0;
    while(!st.empty()){
         auto x=*(st.begin());
         st.erase(x);
         for(auto i:v[x[1]]){
            if(dist[i[0]]>dist[x[1]]+i[1]){
              st.erase({dist[i[0]],i[0]});
              dist[i[0]]=dist[x[1]]+i[1];
              st.insert({dist[i[0]],i[0]});
              count[i[0]]=count[x[1]]%mod;
              max_flight[i[0]]=1+max_flight[x[1]];
              min_flight[i[0]]=1+min_flight[x[1]];
            }else if(dist[i[0]]==(dist[x[1]]+i[1])){
                st.insert({dist[i[0]],i[0]});
                count[i[0]]=(count[i[0]]+count[x[1]])%mod;
                max_flight[i[0]]=max(max_flight[i[0]],1+max_flight[x[1]]);
                 min_flight[i[0]]=min(min_flight[i[0]],1+min_flight[x[1]]);
                 }
         }
     }
     cout<<dist[n]<<' '<<count[n]<<' '<<min_flight[n]<<' '<<max_flight[n];

}
