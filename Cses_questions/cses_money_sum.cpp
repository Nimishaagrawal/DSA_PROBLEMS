#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,a,k=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        k+=a;
        v.push_back(a);
    }
    int m=1000000007;
   int dp[n+1][k+1];
    for(int i=0;i<=k;i++){
        dp[0][i]=0;
    }for(int i=0;i<=n;i++){
      dp[i][0]=1;
    }for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j>=v[i-1]){
           dp[i][j]=dp[i-1][j-v[i-1]]||dp[i-1][j];
        }else{
            dp[i][j]=dp[i-1][j];
        }
        }
    }int c=0;
    for(int i=1;i<=k;i++){
    if(dp[n][i]==1){
        c++;
    }
    }cout<<c<<'\n';
    for(int i=1;i<=k;i++){
        if(dp[n][i]==1){
            cout<<i<<' ';
        }
    }

}
