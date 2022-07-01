#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
   int dp[n+1][m+1];
    for(int i=0;i<=m;i++){
        dp[0][i]=i;
    }for(int i=1;i<=n;i++){
      dp[i][0]=i;
    }
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]!=s2[j-1]){
           dp[i][j]=1+min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
        }else{
            dp[i][j]=dp[i-1][j-1];
        }
        }
    }
    cout<<dp[n][m];
    }


