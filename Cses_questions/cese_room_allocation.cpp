#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int cmp(vector<int>a,vector<int>b){
    if(a[0]==b[0]){
        return a[1]<b[1];
    }
    return a[0]<b[0];

}
int main(){
    int n,a,b;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        v.push_back({a,0,i});
        v.push_back({b,1,i});
    }sort(v.begin(),v.end(),cmp);
    int c=0;
    int s=0;
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=1;i<=n;i++){
        p.push(i);
    }
    vector<int>vec(n);
    for(int i=0;i<v.size();i++){
        if(v[i][1]==0){
            c++;
            s=max(s,c);
            vec[v[i][2]]=p.top();
            p.pop();
        }else{c--;
            p.push(vec[v[i][2]]);
        }
    }cout<<s<<'\n';
     for(auto i:vec){
            cout<<i<<' ';
     }



}


