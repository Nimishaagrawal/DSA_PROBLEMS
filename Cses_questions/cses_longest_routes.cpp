 #include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    long long n,m,a,b;
    cin>>n>>m;
        vector<vector<long long>>v[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back({b,1});
    }vector<long long>dist(n+1,INT_MIN);
    vector<int>path[n+1];
    set<vector<long long>>st;
    st.insert({0,1});
    dist[1]=0;
    while(!st.empty()){
         auto x=*(st.begin());
         st.erase(x);
         for(auto i:v[x[1]]){
            if(dist[i[0]]==INT_MIN){
                dist[i[0]]=dist[x[1]]+1;
                st.insert({dist[i[0]],i[0]});
                path[i[0]]=path[x[1]];
                path[i[0]].push_back(x[1]);

            }
            if(dist[i[0]]<dist[x[1]]+i[1]){
              st.erase({dist[i[0]],i[0]});
              dist[i[0]]=dist[x[1]]+i[1];
              st.insert({dist[i[0]],i[0]});
              path[i[0]].clear();
              path[i[0]]=path[x[1]];
              path[i[0]].push_back(x[1]);

            }
         }
    }if(dist[n]==INT_MIN){
        cout<<"IMPOSSIBLE";
    }else{
        cout<<dist[n]+1<<'\n';
        for(auto i:path[n]){
            cout<<i<<' ';
        }cout<<n;
    }

}
