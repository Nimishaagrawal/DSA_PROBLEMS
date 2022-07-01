#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int m=1000000007;
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=min(i,6);j++){
           dp[i]=(dp[i]+dp[i-j])%m;
        }dp[i]=dp[i]%m;
        }

     
    cout<<dp[n];

}
