 #include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    long long n,m,a,b,c;
    cin>>n>>m;
        vector<vector<long long>>v[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }vector<vector<long long>>dist(n+1,{INT64_MAX,INT64_MAX});
    set<vector<long long>>st;
    st.insert({0,1,0});
    dist[1]={0,0};
    while(!st.empty()){
         auto x=*(st.begin());
         st.erase(x);
         long long curr_cost=dist[x[1]][x[2]];
         if(x[1]==n){
            break;
         }
         for(auto i:v[x[1]]){
            if(!x[2]){
                long long newcost=curr_cost+i[1]/2;
                 if(newcost<dist[i[0]][1]){
                    dist[i[0]][1]=newcost;
                    st.insert({newcost,i[0],1});
                 }
            }
            if(dist[i[0]][x[2]]>curr_cost+i[1]){
              st.erase({dist[i[0]][x[2]],i[0],x[2]});
              dist[i[0]][x[2]]=curr_cost+i[1];
              st.insert({dist[i[0]][x[2]],i[0],x[2]});
            }
         }
    }
        cout<<dist[n][1]<<' ';

}
