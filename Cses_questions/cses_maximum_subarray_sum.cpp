#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    long long s=0;
    long long cur=INT_MIN;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
        cur=max(cur,s);
        if(s<0){
            s=0;
        }
        v.push_back(a);
    }cout<<cur;


}
