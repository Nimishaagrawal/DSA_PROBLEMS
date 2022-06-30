#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m;
    multiset<int>v1;
    for(int i=0;i<n;i++){
        cin>>a;
        v1.insert(a);
    }
    for(int i=0;i<m;i++){
        cin>>a;
        auto it=v1.upper_bound(a);
        if(it==v1.begin()){
            cout<<-1<<'\n';
        }else{
            cout<<*(--it)<<'\n';
            v1.erase(it);       
        }

    }


}
