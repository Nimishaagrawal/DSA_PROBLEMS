#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int solve(vector<vector<int>>&v,int &d,int ind){
    if(v[ind].size()==0){
        return 1;
    }
   int t=0;
   int r=0;
   for(auto j:v[ind]){
     t=max(t,solve(v,j,d));
     r+=solve(v,d,j);
   }d=max(d,r);
   return t+1;
}
int main(){
    int n,a,b;
    cin>>n;
    vector<vector<int>>v(n+1);
    for(int i=1;i<n;i++){
        cin>>a>>b;
        v[b].push_back(a);
        v[a].push_back(b);
    }int d=0;
    solve(v,d,1);
    cout<<d;
    
        


}
