#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main(){
    string a;
    cin>>a;
    int n=a.size();
    vector<long long>v(n,0);
    int j=0,i=1;
    while(i<n){
        if(a[i]==a[j]){
            j++;
            v[i]=j;
            i++;
        }else{
            if(j==0){
                v[i]=0;
                i++;
            }else{
                j=v[j-1];
            }
        }
    }vector<long long>res;
     j=v[n-1];
    while(j!=0){
        res.push_back(j);
        j=v[j-1];
    }sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
          cout<<res[i]<<' ';
    }
}
