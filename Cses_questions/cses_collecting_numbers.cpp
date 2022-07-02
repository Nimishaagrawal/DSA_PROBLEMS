#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    long long  n,k,a,x,y;
    cin>>n>>k;
    vector<long long>v;
    vector<long long>w(n);
    for(int i=0;i<n;i++){
        cin>>a;
        a--;
        v.push_back(a);
        w[a]=i;
    }while(k){
        k--;
        cin>>x>>y;
        x--;
        y--;
        w[v[x]]=y;
        w[v[y]]=x;
    long long res=1;
    for(int i=1;i<n;i++){
        if(w[i]<w[i-1]){
            res++;
        }
    }cout<<res<<'\n'; 
 
    }
 
    
 
 
}
