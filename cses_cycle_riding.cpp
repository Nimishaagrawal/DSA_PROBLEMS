#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int sp=0;
int ep=0;

int main(){
    int n,m;
    int a,b,c;
    cin>>n>>m;
    vector<vector<long long>>v;;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }long long w=(long long)1<<62;
    vector<long long>dist(n+1,w);
    vector<int>vis(n+1,0);
    vector<int>parent(n+1,0);
            int f;
            parent[1]=0;
            dist[1]=0;
    for(int iter=1;iter<n+1;iter++){
        f=0;
    for(int i=0;i<m;i++){
        if(dist[v[i][1]]>dist[v[i][0]]+v[i][2]){
            dist[v[i][1]]=dist[v[i][0]]+v[i][2];
            parent[v[i][1]]=v[i][0];
            f=v[i][1];
        }
    }
    }if(f==0){
        cout<<"NO";
    }else{
    vector<int>ans;
    for(int i=1;i<n+1;i++){
        f=parent[f];
    }for(int x=f;;x=parent[x]){
        ans.push_back(x);
        if(x==f&&ans.size()>1)
         break;
    }
    cout<<"YES"<<'\n';
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<' ';
    }
    }
}
