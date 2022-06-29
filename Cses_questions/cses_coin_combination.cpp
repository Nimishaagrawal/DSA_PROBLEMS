#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(vector<int>v,int &c,int ind,int k){
    if(k==0){
        c++;
        return ;
    }if(ind>=v.size()){
        return ;
    }if(k-v[ind]>=0){
        solve(v,c,ind,k-v[ind]);
    }solve(v,c,ind+1,k-v[ind]);
}
int main(){
    int n,k,a;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }int c=0;
    solve(v,c,0,k);
    cout<<c;
    }

