#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,x,a;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }sort(v.begin(),v.end());
    int ans=0;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(v[i]+v[j]<=x){
            ans++;
            i++;
            j--;
        }else{
            ans++;
            j--;
        }
    }cout<<ans;


}
