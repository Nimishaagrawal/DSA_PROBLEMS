#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    char a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a;
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+(a=='*');
        }
    }int x1,y1,x2,y2;
    for(int i=0;i<k;i++){
       cin>>x1>>y1>>x2>>y2;
       cout<<dp[x2][y2]+dp[x1-1][y1-1]-dp[x2][y1-1]-dp[x1-1][y2]<<'\n';
    }
}
