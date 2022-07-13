#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int cmp(vector<long long>a,vector<long long>b){
    return a[1]<b[1];
}
int main(){
    long long n,a,b,c;
    cin>>n;
    vector<vector<long long>>v;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }sort(v.begin(),v.end(),cmp);   
   long long* dp=new long long[n];
   dp[0]=v[0][2];
    for(long long i=1;i<n;i++){
        long long t=v[i][2];
        for(long long j=i-1;j>=0;j--){
            if(v[j][1]<v[i][0]){
             t+=dp[j];
           break;
        }
        }dp[i]=max(dp[i-1],t);
    }
    cout<<dp[n-1];
     delete []dp;
}

