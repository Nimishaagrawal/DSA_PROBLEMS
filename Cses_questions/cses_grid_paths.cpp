#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a;
    vector<vector<char>>v(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>a;
        v[i][j]=a;
        }
    }if(v[0][0]=='*'){
        cout<<0;
    }else if(v[n-1][n-1]=='*'){
        cout<<0;
    }else{
   int dp[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        dp[i][j]=0;
    }
   }
   int m=1000000007;
    for(int i=0;i<n;i++){
        if(v[0][i]=='.'){
            dp[0][i]=1;
        }else{
        dp[0][i]=0;
        break;
        }
    }for(int i=0;i<n;i++){
        if(v[i][0]=='.'){
            dp[i][0]=1;
        }else{
      dp[i][0]=0;
      break;
        }
    }for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(v[i][j]=='.'){
           dp[i][j]=(dp[i][j-1]+dp[i-1][j])%m;
        }else{
            dp[i][j]=0;
        }
        }
    }
    cout<<dp[n-1][n-1];
    }
}


