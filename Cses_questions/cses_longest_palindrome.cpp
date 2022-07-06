#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long n=s.size();
    long long st=0,mxlen=1;
    vector<vector<long long >>dp(n,vector<long long>(n,0));
    for(long long i=0;i<n;i++){
        dp[i][i]=1;
    }for(long long i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=1;
            st=i;
            mxlen=2;
        }
    }
    for(long long k=3;k<=n;k++){
        for(long long i=0;i<n-k+1;i++){
            long long j=i+k-1;
            if(dp[i+1][j-1]&&s[i]==s[j]){
               dp[i][j]=1;
               if(k>mxlen){
                st=i;
                mxlen=k;
               }
        }
    }
    }for(long long i=st;i<=st+mxlen-1;i++){
        cout<<s[i];
    }

    


}
