#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,m,k,a;
    cin>>n>>m>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }sort(v.begin(),v.end());
    vector<int>v1;
    for(int i=0;i<m;i++){
        cin>>a;
        v1.push_back(a);
    }sort(v1.begin(),v1.end());
    int ans=0;
    int j=0;
    for(int i=0;i<n;i++){
        while(j<m){
        if(v1[j]+k<v[i]){
            j++;
        }else if(v1[j]-k>v[i]){
            break;
        }
        else{
            ans++;
            j++;
            break;
        }
        }
    }cout<<ans;


}
