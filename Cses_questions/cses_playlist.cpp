#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }map<int,int>m;
    int s=-1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(m.find(v[i])!=m.end()){
          s=max(s,m[v[i]]);
        }ans=max(ans,i-s);
        m[v[i]]=i;
    }
    cout<<ans;


}
