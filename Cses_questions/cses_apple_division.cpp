#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long solve(vector<long long>v,long long s,long long cs,int i){
  if(i==0){
      return abs((s-cs)-cs);
  }return min(solve(v,s,cs,i-1),solve(v,s,cs+v[i-1],i-1));
}
int main(){
    int n;
    cin>>n;
    long long s=0,a;
    vector<long long>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        s+=a;
    }cout<<solve(v,s,0,n);


}
