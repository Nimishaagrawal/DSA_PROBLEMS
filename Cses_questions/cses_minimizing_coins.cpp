#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,k,a;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int m=1000000007;
   int dp[n+1][k+1];
    for(int i=0;i<=k;i++){
        dp[0][i]=INT_MAX-1;
    }for(int i=0;i<=n;i++){
      dp[i][0]=0;
    }for(int i=1;i<=k;i++){
        if(i%v[0]==0){
            dp[1][i]=i/v[0];
        }else{
            dp[1][i]=INT_MAX-1;
        }
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j>=v[i-1]){
           dp[i][j]=min(1+dp[i][j-v[i-1]],dp[i-1][j]);
        }else{
            dp[i][j]=dp[i-1][j];
        }
        }
    }if(dp[n][k]==INT_MAX-1){
        cout<<-1;
    }else{
    cout<<dp[n][k];
    }

}
